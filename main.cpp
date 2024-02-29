#include <Windows.h>
#include <string>
#include "skStr.h"
#include "includes.hpp"
#include "Overwatch.hpp"
#include "SDK.hpp"
#include <iostream>
#include <Windows.h>
#include <string>
#include <TlHelp32.h>
#include <io.h>
#include <vector>
#include <filesystem>
#include <fstream>
#include <regex>

const char* OVERWATCH_EXE = "Overwatch.exe";

DWORD GetProcessId(const char* cProcessName)
{
	DWORD dwProcessId = 0;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

	if (hSnap && hSnap != INVALID_HANDLE_VALUE)
	{
		PROCESSENTRY32 procEntry;
		procEntry.dwSize = sizeof(procEntry);

		if (Process32First(hSnap, &procEntry))
		{
			do
			{
				if (!_stricmp(procEntry.szExeFile, cProcessName))
				{
					dwProcessId = procEntry.th32ProcessID;
					break;
				}
			} while (Process32Next(hSnap, &procEntry));
		}
		CloseHandle(hSnap);
	}
	return dwProcessId;
}
std::string GetExeFileName()
{
	char buffer[MAX_PATH];
	GetModuleFileName(NULL, buffer, MAX_PATH);
	return std::string(buffer);
}

std::string GetExePath()
{
	std::string f = GetExeFileName();
	return f.substr(0, f.find_last_of("\\/"));
}
#include <Windows.h>

using namespace OW;
DWORD base_address;
#include <ShlObj.h>
#include <cstdlib>
DWORD checker;
HWND hwnd;
int main()
{
	system("cls");

	std::cout << skCrypt("\n Waiting for Overwatch 2...\n\n");
	HWND hwnd = NULL;
	while (hwnd == NULL)
	{
		hwnd = SpoofFindWindowA("TankWindowClass", 0);
		Sleep(100);
	}

	DWORD pidow2 = GetProcessId("OVERWATCH_EXE");
	std::cout << skCrypt(" PID: ");
	std::cout << pidow2;
	
	if (MessageBoxA(NULL, "Would you like to hook External cheat?", "External Hook", MB_YESNO) == IDYES)
	{
		if (MessageBoxA(NULL, "Would you like to create a new window instead of hijacking Medal.tv?\nHijacking Medal.tv doesn't work on Windows 11\nIf you don't use medal the cheat may die mid game", "Create New Window Instead Of Medal", MB_YESNO) == IDYES)
		{
			windows11yes = true;
		}
		//Sleep(4000);
		//ShowWindow(::GetConsoleWindow(), SW_HIDE);
		if (!SDK->Initialize())
			//MessageBox(NULL, "Error 21", "ERROR", MB_OK | MB_ICONERROR);
			exit(0);
		_beginthread((_beginthread_proc_type)prediction_thread, 0, 0);
		_beginthread((_beginthread_proc_type)entity_thread, 0, 0);
		_beginthread((_beginthread_proc_type)aimbot_thread, 0, 0);
		_beginthread((_beginthread_proc_type)overlay_thread, 0, 0);
		_beginthread((_beginthread_proc_type)velocity_thread, 0, 0);

		HWND tankWindow = SpoofFindWindowA("TankWindowClass", NULL);
		int iterations = 0;
		while (tankWindow && iterations < 10000)
		{
			BYTE AOB[] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xFF\xFF\x02\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00";
			std::string MASK = "??xx??xx?xxx?xxxxxxxxxxxxxxx???";
			Entity_t = SDK->FindPatternsExRegs(AOB, MASK, 0x180000);
			uint64_t viewMatrixVal = SDK->RPM<uint64_t>(SDK->dwGameBase + offset::ViewMatrix);
			viewMatrixVal = SDK->RPM<uint64_t>(viewMatrixVal + 0x5A0);
			viewMatrixVal = SDK->RPM<uint64_t>(viewMatrixVal + 0x118);
			auto view = SDK->RPM<uint64_t>(SDK->dwGameBase + offset::ViewMatrix) + offset::ViewMatrix_PTR;
			viewMatrixPtr = view;
			viewMatrix = SDK->RPM<Matrix>(viewMatrixPtr);
			if (GetKeyRandomized(Config::menukey)) {
				Config::Menu = !Config::Menu;
				Sleep(250);
			}
			if (GetKeyRandomized(Config::closekey)) {
				exit(0);
			}
			iterations++;
		}
	}
	exit(2);
}