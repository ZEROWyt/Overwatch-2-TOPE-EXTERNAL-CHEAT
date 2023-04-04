#pragma once
#include "Target.hpp"
#include "Config.hpp"
#include <complex>
HWND Qum = SpoofFindWindowA("TankWindowClass", NULL);
#include "winuser.h"
HWND hwnd1;
static const char* KeyNames[] = {
"OFF",
"VK_LBUTTON",
"VK_RBUTTON",
"VK_CANCEL",
"VK_MBUTTON",
"VK_XBUTTON1",
"VK_XBUTTON2",
"Unknown",
"VK_BACK",
"VK_TAB",
"Unknown",
"Unknown",
"VK_CLEAR",
"VK_RETURN",
"Unknown",
"Unknown",
"VK_SHIFT",
"VK_CONTROL",
"VK_MENU",
"VK_PAUSE",
"VK_CAPITAL",
"VK_KANA",
"Unknown",
"VK_JUNJA",
"VK_FINAL",
"VK_KANJI",
"Unknown",
"VK_ESCAPE",
"VK_CONVERT",
"VK_NONCONVERT",
"VK_ACCEPT",
"VK_MODECHANGE",
"VK_SPACE",
"VK_PRIOR",
"VK_NEXT",
"VK_END",
"VK_HOME",
"VK_LEFT",
"VK_UP",
"VK_RIGHT",
"VK_DOWN",
"VK_SELECT",
"VK_PRINT",
"VK_EXECUTE",
"VK_SNAPSHOT",
"VK_INSERT",
"VK_DELETE",
"VK_HELP",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"A",
"B",
"C",
"D",
"E",
"F",
"G",
"H",
"I",
"J",
"K",
"L",
"M",
"N",
"O",
"P",
"Q",
"R",
"S",
"T",
"U",
"V",
"W",
"X",
"Y",
"Z",
"VK_LWIN",
"VK_RWIN",
"VK_APPS",
"Unknown",
"VK_SLEEP",
"VK_NUMPAD0",
"VK_NUMPAD1",
"VK_NUMPAD2",
"VK_NUMPAD3",
"VK_NUMPAD4",
"VK_NUMPAD5",
"VK_NUMPAD6",
"VK_NUMPAD7",
"VK_NUMPAD8",
"VK_NUMPAD9",
"VK_MULTIPLY",
"VK_ADD",
"VK_SEPARATOR",
"VK_SUBTRACT",
"VK_DECIMAL",
"VK_DIVIDE",
"VK_F1",
"VK_F2",
"VK_F3",
"VK_F4",
"VK_F5",
"VK_F6",
"VK_F7",
"VK_F8",
"VK_F9",
"VK_F10",
"VK_F11",
"VK_F12",
"VK_F13",
"VK_F14",
"VK_F15",
"VK_F16",
"VK_F17",
"VK_F18",
"VK_F19",
"VK_F20",
"VK_F21",
"VK_F22",
"VK_F23",
"VK_F24",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"VK_NUMLOCK",
"VK_SCROLL",
"VK_OEM_NEC_EQUAL",
"VK_OEM_FJ_MASSHOU",
"VK_OEM_FJ_TOUROKU",
"VK_OEM_FJ_LOYA",
"VK_OEM_FJ_ROYA",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"Unknown",
"VK_LSHIFT",
"VK_RSHIFT",
"VK_LCONTROL",
"VK_RCONTROL",
"VK_LMENU",
"VK_RMENU"
};
static const int KeyCodes[] = {
	0x0,  //Undefined
	0x01,
	0x02,
	0x03,
	0x04,
	0x05,
	0x06,
	0x07, //Undefined
	0x08,
	0x09,
	0x0A, //Reserved
	0x0B, //Reserved
	0x0C,
	0x0D,
	0x0E, //Undefined
	0x0F, //Undefined
	0x10,
	0x11,
	0x12,
	0x13,
	0x14,
	0x15,
	0x16, //IME On
	0x17,
	0x18,
	0x19,
	0x1A, //IME Off
	0x1B,
	0x1C,
	0x1D,
	0x1E,
	0x1F,
	0x20,
	0x21,
	0x22,
	0x23,
	0x24,
	0x25,
	0x26,
	0x27,
	0x28,
	0x29,
	0x2A,
	0x2B,
	0x2C,
	0x2D,
	0x2E,
	0x2F,
	0x30,
	0x31,
	0x32,
	0x33,
	0x34,
	0x35,
	0x36,
	0x37,
	0x38,
	0x39,
	0x3A, //Undefined
	0x3B, //Undefined
	0x3C, //Undefined
	0x3D, //Undefined
	0x3E, //Undefined
	0x3F, //Undefined
	0x40, //Undefined
	0x41,
	0x42,
	0x43,
	0x44,
	0x45,
	0x46,
	0x47,
	0x48,
	0x49,
	0x4A,
	0x4B,
	0x4C,
	0x4B,
	0x4E,
	0x4F,
	0x50,
	0x51,
	0x52,
	0x53,
	0x54,
	0x55,
	0x56,
	0x57,
	0x58,
	0x59,
	0x5A,
	0x5B,
	0x5C,
	0x5D,
	0x5E, //Rservered
	0x5F,
	0x60, //Numpad1
	0x61, //Numpad2
	0x62, //Numpad3
	0x63, //Numpad4
	0x64, //Numpad5
	0x65, //Numpad6
	0x66, //Numpad7
	0x67, //Numpad8
	0x68, //Numpad8
	0x69, //Numpad9
	0x6A,
	0x6B,
	0x6C,
	0x6D,
	0x6E,
	0x6F,
	0x70, //F1
	0x71, //F2
	0x72, //F3
	0x73, //F4
	0x74, //F5
	0x75, //F6
	0x76, //F7
	0x77, //F8
	0x78, //F9
	0x79, //F10
	0x7A, //F11
	0x7B, //F12
	0x7C, //F13
	0x7D, //F14
	0x7E, //F15
	0x7F, //F16
	0x80, //F17
	0x81, //F18
	0x82, //F19
	0x83, //F20
	0x84, //F21
	0x85, //F22
	0x86, //F23
	0x87, //F24
	0x88, //Unkown
	0x89, //Unkown
	0x8A, //Unkown
	0x8B, //Unkown
	0x8C, //Unkown
	0x8D, //Unkown
	0x8E, //Unkown
	0x8F, //Unkown
	0x90,
	0x91,
	0x92, //OEM Specific
	0x93, //OEM Specific
	0x94, //OEM Specific
	0x95, //OEM Specific
	0x96, //OEM Specific
	0x97, //Unkown
	0x98, //Unkown
	0x99, //Unkown
	0x9A, //Unkown
	0x9B, //Unkown
	0x9C, //Unkown
	0x9D, //Unkown
	0x9E, //Unkown 
	0x9F, //Unkown
	0xA0,
	0xA1,
	0xA2,
	0xA3,
	0xA4,
	0xA5
};
static int degrees = 0;

static void ImGui::Hotkey(int* k, const ImVec2& size_arg = ImVec2(0, 0))
{
	static bool waitingforkey = false;
	if (waitingforkey == false) {
		if (ImGui::Button(KeyNames[*(int*)k], size_arg))
			waitingforkey = true;
	}
	else if (waitingforkey == true) {
		ImGui::Button("...", size_arg);
		std::this_thread::sleep_for(std::chrono::milliseconds(20));
		for (auto& Key : KeyCodes)
		{
			if (GetAsyncKeyState(Key)) {
				*(int*)k = Key;
				waitingforkey = false;
			}
		}
	}
}
static void ImGui::Hotkey1(int* k, const ImVec2& size_arg = ImVec2(0, 0))
{
	static bool waitingforkey = false;
	if (waitingforkey == false) {
		if (ImGui::Button(KeyNames[*(int*)k], size_arg))
			waitingforkey = true;
	}
	else if (waitingforkey == true) {
		ImGui::Button("...", size_arg);
		std::this_thread::sleep_for(std::chrono::milliseconds(20));
		for (auto& Key : KeyCodes)
		{
			if (GetAsyncKeyState(Key)) {
				*(int*)k = Key;
				waitingforkey = false;
			}
		}
	}
}
static void ImGui::Hotkey2(int* k, const ImVec2& size_arg = ImVec2(0, 0))
{
	static bool waitingforkey = false;
	if (waitingforkey == false) {
		if (ImGui::Button(KeyNames[*(int*)k], size_arg))
			waitingforkey = true;
	}
	else if (waitingforkey == true) {
		ImGui::Button("...", size_arg);
		std::this_thread::sleep_for(std::chrono::milliseconds(20));
		for (auto& Key : KeyCodes)
		{
			if (GetAsyncKeyState(Key)) {
				*(int*)k = Key;
				waitingforkey = false;
			}
		}
	}
}
static void ImGui::Hotkey3(int* k, const ImVec2& size_arg = ImVec2(0, 0))
{
	static bool waitingforkey = false;
	if (waitingforkey == false) {
		if (ImGui::Button(KeyNames[*(int*)k], size_arg))
			waitingforkey = true;
	}
	else if (waitingforkey == true) {
		ImGui::Button("...", size_arg);
		std::this_thread::sleep_for(std::chrono::milliseconds(20));
		for (auto& Key : KeyCodes)
		{
			if (GetAsyncKeyState(Key)) {
				*(int*)k = Key;
				waitingforkey = false;
			}
		}
	}
}
static void ImGui::Hotkey4(int* k, const ImVec2& size_arg = ImVec2(0, 0))
{
	static bool waitingforkey = false;
	if (waitingforkey == false) {
		if (ImGui::Button(KeyNames[*(int*)k], size_arg))
			waitingforkey = true;
	}
	else if (waitingforkey == true) {
		ImGui::Button("...", size_arg);
		std::this_thread::sleep_for(std::chrono::milliseconds(20));
		for (auto& Key : KeyCodes)
		{
			if (GetAsyncKeyState(Key)) {
				*(int*)k = Key;
				waitingforkey = false;
			}
		}
	}
}

namespace OW {

	inline void velocity_thread() {

		while (true) {
			if (Config::prediction) {
				__try {

					for (int i = 0; i < Entity_t.size(); i++)
					{
						clock_t currTime = clock();
						if (Entitys[i].Team && Entitys[i].Live) {
							if ((currTime - Entitys[i].lastVelocityUpdate) >= 20)
							{
								//std::cout << Entitys[i].lastVelocityUpdate << "\n";
								Entitys[i].Velocity.X = (Entitys[i].Loc.X - Entitys[i].lastPos.X) / (currTime - Entitys[i].lastVelocityUpdate);
								//std::cout << "I: " << i << " X: " << Entitys[i].Velocity.X << "\n";
								Entitys[i].Velocity.Y = (Entitys[i].Loc.Y - Entitys[i].lastPos.Y) / (currTime - Entitys[i].lastVelocityUpdate);
								Entitys[i].Velocity.Z = (Entitys[i].Loc.Z - Entitys[i].lastPos.Z) / (currTime - Entitys[i].lastVelocityUpdate);
								Entitys[i].lastPos = Entitys[i].Loc;

								Entitys[i].lastVelocityUpdate = currTime;
							}
						}

					}
				}
				__except (0) {
					Sleep(1);
				}
			}

		}

	}
	void SolveQuartic(const std::complex<float> coefficients[5], std::complex<float> roots[4]) {
		const std::complex<float> a = coefficients[4];
		const std::complex<float> b = coefficients[3] / a;
		const std::complex<float> c = coefficients[2] / a;
		const std::complex<float> d = coefficients[1] / a;
		const std::complex<float> e = coefficients[0] / a;

		const std::complex<float> Q1 = c * c - 3.f * b * d + 12.f * e;
		const std::complex<float> Q2 = 2.f * c * c * c - 9.f * b * c * d + 27.f * d * d + 27.f * b * b * e - 72.f * c * e;
		const std::complex<float> Q3 = 8.f * b * c - 16.f * d - 2.f * b * b * b;
		const std::complex<float> Q4 = 3.f * b * b - 8.f * c;

		const std::complex<float> Q5 = std::pow(Q2 / 2.f + std::sqrt(Q2 * Q2 / 4.f - Q1 * Q1 * Q1), 1.f / 3.f);
		const std::complex<float> Q6 = (Q1 / Q5 + Q5) / 3.f;
		const std::complex<float> Q7 = 2.f * std::sqrt(Q4 / 12.f + Q6);

		roots[0] = (-b - Q7 - std::sqrt(4.f * Q4 / 6.f - 4.f * Q6 - Q3 / Q7)) / 4.f;
		roots[1] = (-b - Q7 + std::sqrt(4.f * Q4 / 6.f - 4.f * Q6 - Q3 / Q7)) / 4.f;
		roots[2] = (-b + Q7 - std::sqrt(4.f * Q4 / 6.f - 4.f * Q6 + Q3 / Q7)) / 4.f;
		roots[3] = (-b + Q7 + std::sqrt(4.f * Q4 / 6.f - 4.f * Q6 + Q3 / Q7)) / 4.f;
	}
	Vector3 predictCalc(Vector3 EnPos, float Speed, Vector3 Velocity)
	{
		__try {
			Vector3 Predict;
			auto origin = viewMatrix.GetCameraVec();
			origin.X -= 0.5;
			origin.Y -= 0.85;
			origin.Z -= 0.5;
			double G = -9.81f;
			double A = origin.X;
			double B = origin.Y;
			double C = origin.Z;
			double M = EnPos.X;
			double N = EnPos.Y;
			double O = EnPos.Z;
			double P = Velocity.X * 1000;
			double Q = Velocity.Y * 1000;
			double R = Velocity.Z * 1000;
			double S = Speed;
			double H = M - A;
			double J = O - C;
			double K = N - B;
			double L = -.5f * G;
			double c4 = L * L;
			double c3 = -2 * Q * L;
			double c2 = (Q * Q) - (2 * K * L) - (S * S) + (P * P) + (R * R);
			double c1 = (2 * K * Q) + (2 * H * P) + (2 * J * R);
			double c0 = (K * K) + (H * H) + (J * J);

			std::complex<float> pOutRoots[4];
			const std::complex<float> pInCoeffs[5] = { c0, c1, c2, c3, c4 };
			SolveQuartic(pInCoeffs, pOutRoots);
			float fBestRoot = FLT_MAX;
			for (int i = 0; i < 4; i++) {
				if (pOutRoots[i].real() > 0.f && std::abs(pOutRoots[i].imag()) < 0.0001f && pOutRoots[i].real() < fBestRoot) {
					fBestRoot = pOutRoots[i].real();
				}
			}

			Predict.X = EnPos.X + (Velocity.X * fBestRoot * 1000);
			Predict.Y = EnPos.Y + (Velocity.Y * fBestRoot * 1000);
			Predict.Z = EnPos.Z + (Velocity.Z * fBestRoot * 1000);
			return Predict;
		}
		__except (0) {

		}

	}
	inline void prediction_thread() {
		while (true) {
			std::vector<DWORD64>temp_entity = Entity_t;
			if (temp_entity.size() > 0)
			{

				for (int i = 0; i < temp_entity.size(); i++)
				{
					__try {
						float speed = 0;
						//"Hanzo", "Widow", "Genji", "Ana", "Sojourn", "Lucio", "Eco", "Pharah", "Orisa", "Torb", "Zen"
						if (Config::heroes[Config::hero] == "Hanzo") speed = 110.0f;
						if (Config::heroes[Config::hero] == "Genji") speed = 60.0f;
						if (Config::heroes[Config::hero] == "Ana") speed = 52.2f;
						if (Config::heroes[Config::hero] == "Sojourn") speed = 160.0f;
						if (Config::heroes[Config::hero] == "Lucio") speed = 50.0f;
						if (Config::heroes[Config::hero] == "Eco") speed = 75.0f;
						if (Config::heroes[Config::hero] == "Pharah") speed = 35.0f;
						if (Config::heroes[Config::hero] == "Orisa") speed = 90.0f;
						if (Config::heroes[Config::hero] == "Torb") speed = 70.0f;
						if (Config::heroes[Config::hero] == "Zen") speed = 90.0f;

						Entitys[i].predict = predictCalc(Vector3(Entitys[i].Loc.X, Entitys[i].Loc.Y + Config::bone, Entitys[i].Loc.Z), speed, Entitys[i].Velocity);
					}
					__except (0) {

					}
				}
				Sleep(1);
			}
			else {
				Sleep(5);
			}
		}
	}

	inline void scan_matrix_ex();
	inline void entity_thread() {
		while (true) {
			std::this_thread::sleep_for(std::chrono::milliseconds(3));
			std::vector<DWORD64>temp_entity = Entity_t;
			if (temp_entity.size() > 0)
			{
				for (int i = 0; i < temp_entity.size(); i++)
				{
					Entitys[i].base = SDK->RPM<Vector3>(temp_entity[i] - 0x9C); // base offset
					Entitys[i].headbase = SDK->RPM<Vector3>(temp_entity[i] - 0x8C); // head?
					Entitys[i].center = Vector3(Entitys[i].base.X + 0.4717, Entitys[i].base.Y + 1, Entitys[i].base.Z + 0.54717); // offset for esp
					Entitys[i].head = Vector3(Entitys[i].headbase.X + (-5.2 / 10), Entitys[i].headbase.Y + (-3.5 / 10), Entitys[i].headbase.Z + (-4.8 / 10)); // offset for aimbot
					Entitys[i].head2 = SDK->RPM<Vector3>(temp_entity[i] - 0x9C);
					Entitys[i].Loc = Vector3(Entitys[i].head2.X + 0.5f, Entitys[i].head2.Y + 0.6f, Entitys[i].head2.Z + 0.5f);
					Config::bone = Config::boneorgy;
					// If the user is pressing VK_Shift, lower Entitys[i].head.Y by 0.4. This is for aimbot against ana, etc
					if (GetKeyState(20)) {
						Entitys[i].head.Y -= Config::lower;
						Config::bone -= Config::lower;
					}
					else {
					}
					Entitys[i].Live = SDK->RPM<BYTE>(temp_entity[i] - 0x1) == 0x14; // living check
					if (!Config::is_team)
						Entitys[i].Team = SDK->RPM<BYTE>(temp_entity[i] - 0x4) != 0x8; // team check
					else
						Entitys[i].Team = SDK->RPM<BYTE>(temp_entity[i] - 0x4) != 0x10;
					if (GetAsyncKeyState(Config::apples)) {
						Sleep(1000);
						if (Config::is_team -= false)
							Config::is_team -= true;
						else if (Config::is_team -= true)
							Config::is_team -= false;
					}
				}
				viewMatrix = SDK->RPM<Matrix>(viewMatrixPtr);
				//scan_matrix_ex();
				std::this_thread::sleep_for(std::chrono::milliseconds(3));
			}
			else
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(5));
			}
		}
	}

	inline void esp() {
		__try {
			ImDrawList* Draw = ImGui::GetBackgroundDrawList();
			ImVec2 CrossHair = ImVec2(GetSystemMetrics(SM_CXSCREEN) / 2.0f, GetSystemMetrics(SM_CYSCREEN) / 2.0f);
			if (Config::draw_edge) {
				for (int i = 0; i < Entity_t.size(); i++) {
					if (Entitys[i].Team && Entitys[i].Live) {
						Vector3 Vec3 = Entitys[i].center;
						Vector2 Vec2_A{}, Vec2_B{};
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y - 1.5f, Vec3.Z), &Vec2_A))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y + 0.8f, Vec3.Z), &Vec2_B))
							continue;
						float Size = abs(Vec2_A.Y - Vec2_B.Y) / 2.0f;
						float Size2 = abs(Vec2_A.Y - Vec2_B.Y) / 20.0f;
						float Height2 = abs(Vec2_A.Y - Vec2_B.Y);
						int num7 = (float)(1500 / (int)Height2);
						float xpos = (Vec2_A.X + Vec2_B.X) / 2.f;
						float ypos = Vec2_A.Y + Size / 5;
						Vector2 CrossHair = Vector2(GetSystemMetrics(SM_CXSCREEN) / 2.0f, GetSystemMetrics(SM_CYSCREEN) / 2.0f);
						Vector2 RealVe2 = Vector2(Vec2_B.X - CrossHair.X, Vec2_B.Y - CrossHair.Y);
						float CrossDist = CrossHair.Distance(Vec2_B);
						float origin = FLT_MAX;
						if (CrossDist < origin && CrossDist < Config::Fov) {
							Render::DrawEdges(ImVec2(xpos - Size / 1.5f, Vec2_A.Y), ImVec2(xpos + Size / 1.5f, Vec2_B.Y), ImVec2(xpos - Size2 / 1.5f, Vec2_A.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
						}
						else {
							Render::DrawEdges(ImVec2(xpos - Size / 1.5f, Vec2_A.Y), ImVec2(xpos + Size / 1.5f, Vec2_B.Y), ImVec2(xpos - Size2 / 1.5f, Vec2_A.Y), ImGui::GetColorU32(Config::EdgeESPColor));
						}
						//Render::DrawEdges(ImVec2(xpos - Size / 1.5f, Vec2_A.Y), ImVec2(xpos + Size / 1.5f, Vec2_B.Y), ImVec2(xpos - Size2 / 1.5f, Vec2_A.Y), ImGui::GetColorU32(Config::EdgeESPColor));

					}
				}
			}
			if (Config::draw_box) {
				for (int i = 0; i < Entity_t.size(); i++) {
					if (Entitys[i].Team && Entitys[i].Live) {
						Vector3 Vec3 = Entitys[i].center;
						Vector2 Vec2_A{}, Vec2_B{};
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y - 1.5f, Vec3.Z), &Vec2_A))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y + 0.8f, Vec3.Z), &Vec2_B))
							continue;

						float Size = abs(Vec2_A.Y - Vec2_B.Y) / 2.0f;
						float Size2 = abs(Vec2_A.Y - Vec2_B.Y) / 20.0f;
						float Height2 = abs(Vec2_A.Y - Vec2_B.Y);
						int num7 = (float)(1500 / (int)Height2);
						float xpos = (Vec2_A.X + Vec2_B.X) / 2.f;
						float ypos = Vec2_A.Y + Size / 5;
						Vector2 CrossHair = Vector2(GetSystemMetrics(SM_CXSCREEN) / 2.0f, GetSystemMetrics(SM_CYSCREEN) / 2.0f);
						Vector2 RealVe2 = Vector2(Vec2_B.X - CrossHair.X, Vec2_B.Y - CrossHair.Y);
						float CrossDist = CrossHair.Distance(Vec2_B);
						float origin = FLT_MAX;
						if (CrossDist < origin && CrossDist < Config::Fov) {
							Draw->AddRect(ImVec2(xpos + Size / 1.5f, Vec2_B.Y), ImVec2(xpos - Size / 1.5f, Vec2_A.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
							Draw->AddRectFilled(ImVec2(xpos + Size / 1.5f, Vec2_B.Y), ImVec2(xpos - Size / 1.5f, Vec2_A.Y), ImGui::GetColorU32(ImVec4(0, 0, 0, 0.4)));
							//Draw->AddCircle(ImVec2(xpos, ypos - Height2), 5, ImGui::GetColorU32(Config::EdgeESPinFOV));
						}

						else
						{
							Draw->AddRect(ImVec2(xpos + Size / 1.5f, Vec2_B.Y), ImVec2(xpos - Size / 1.5f, Vec2_A.Y), ImGui::GetColorU32(Config::EdgeESPColor));
							Draw->AddRectFilled(ImVec2(xpos + Size / 1.5f, Vec2_B.Y), ImVec2(xpos - Size / 1.5f, Vec2_A.Y), ImGui::GetColorU32(ImVec4(0, 0, 0, 0.4)));
						}
					}
				}
			}
			if (Config::predd) {
				for (int i = 0; i < Entity_t.size(); i++) {
					if (Entitys[i].Team && Entitys[i].Live) {
						Vector2 Vec2_Q;
						if (!viewMatrix.WorldToScreen(Entitys[i].predict, &Vec2_Q))
							continue;
						Vector3 Vec3 = Entitys[i].center;
						Vector2 Vec2_A{}, Vec2_B{};
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y - 1.5f, Vec3.Z), &Vec2_A))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y + 0.8f, Vec3.Z), &Vec2_B))
							continue;

						float Size = abs(Vec2_A.Y - Vec2_B.Y) / 2.0f;
						float Size2 = abs(Vec2_A.Y - Vec2_B.Y) / 20.0f;
						float Height2 = abs(Vec2_A.Y - Vec2_B.Y);
						int num7 = (float)(1500 / (int)Height2);
						float xpos = (Vec2_A.X + Vec2_B.X) / 2.f;
						float ypos = Vec2_A.Y + Size / 5;
						Vector2 CrossHair = Vector2(GetSystemMetrics(SM_CXSCREEN) / 2.0f, GetSystemMetrics(SM_CYSCREEN) / 2.0f);
						Vector2 RealVe2 = Vector2(Vec2_B.X - CrossHair.X, Vec2_B.Y - CrossHair.Y);
						float CrossDist = CrossHair.Distance(Vec2_B);
						float origin = FLT_MAX;
						if (CrossDist < origin && CrossDist < Config::Fov) {
							Draw->AddCircle(ImVec2(Vec2_Q.X, Vec2_Q.Y), 3, ImGui::GetColorU32(Config::EdgeESPinFOV));
							//Draw->AddCircle(ImVec2(xpos, ypos - Height2), 5, ImGui::GetColorU32(Config::EdgeESPinFOV));
						}

						else
						{
							Draw->AddCircle(ImVec2(Vec2_Q.X, Vec2_Q.Y), 3, ImGui::GetColorU32(Config::EdgeESPColor));
						}
					}
				}
			}
			if (Config::draw_3dbox) {
				for (int i = 0; i < Entity_t.size(); i++) {
					if (Entitys[i].Team && Entitys[i].Live) {
						Vector3 Vec3 = Entitys[i].center;
						Vector2 Vec2_A{}, Vec2_B{};
						Vector2 Vec2_C{}, Vec2_D{}, Vec2_E{}, Vec2_F{}, Vec2_G{}, Vec2_H{}, Vec2_I{}, Vec2_J{}, Vec2_K{}, Vec2_L{};
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X + 1.0f, Vec3.Y + 0.8f, Vec3.Z), &Vec2_C))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X - 1.0f, Vec3.Y + 0.8f, Vec3.Z), &Vec2_D))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y + 0.8f, Vec3.Z + 1.0f), &Vec2_E))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y + 0.8f, Vec3.Z - 1.0f), &Vec2_F))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X + 1.0f, Vec3.Y - 1.5f, Vec3.Z), &Vec2_G))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X - 1.0f, Vec3.Y - 1.5f, Vec3.Z), &Vec2_H))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y - 1.5f, Vec3.Z + 1.0f), &Vec2_I))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y - 1.5f, Vec3.Z - 1.0f), &Vec2_J))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y + 0.8f, Vec3.Z), &Vec2_K))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X - 2.0f, Vec3.Y + 0.8f, Vec3.Z + 2.0f), &Vec2_L))
							continue;
						Vector2 CrossHair = Vector2(GetSystemMetrics(SM_CXSCREEN) / 2.0f, GetSystemMetrics(SM_CYSCREEN) / 2.0f);
						Vector2 RealVe2 = Vector2(Vec2_B.X - CrossHair.X, Vec2_B.Y - CrossHair.Y);
						float CrossDist = CrossHair.Distance(Vec2_B);
						float origin = FLT_MAX;
						if (CrossDist < origin && CrossDist < Config::Fov) {
							Draw->AddLine(ImVec2(Vec2_C.X, Vec2_C.Y), ImVec2(Vec2_E.X, Vec2_E.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
							Draw->AddLine(ImVec2(Vec2_C.X, Vec2_C.Y), ImVec2(Vec2_F.X, Vec2_F.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
							Draw->AddLine(ImVec2(Vec2_D.X, Vec2_D.Y), ImVec2(Vec2_E.X, Vec2_E.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
							Draw->AddLine(ImVec2(Vec2_D.X, Vec2_D.Y), ImVec2(Vec2_F.X, Vec2_F.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
							//
							Draw->AddLine(ImVec2(Vec2_G.X, Vec2_G.Y), ImVec2(Vec2_I.X, Vec2_I.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
							Draw->AddLine(ImVec2(Vec2_G.X, Vec2_G.Y), ImVec2(Vec2_J.X, Vec2_J.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
							Draw->AddLine(ImVec2(Vec2_H.X, Vec2_H.Y), ImVec2(Vec2_I.X, Vec2_I.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
							Draw->AddLine(ImVec2(Vec2_H.X, Vec2_H.Y), ImVec2(Vec2_J.X, Vec2_J.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
							//
							Draw->AddLine(ImVec2(Vec2_C.X, Vec2_C.Y), ImVec2(Vec2_G.X, Vec2_G.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
							Draw->AddLine(ImVec2(Vec2_D.X, Vec2_D.Y), ImVec2(Vec2_H.X, Vec2_H.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
							Draw->AddLine(ImVec2(Vec2_E.X, Vec2_E.Y), ImVec2(Vec2_I.X, Vec2_I.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
							Draw->AddLine(ImVec2(Vec2_F.X, Vec2_F.Y), ImVec2(Vec2_J.X, Vec2_J.Y), ImGui::GetColorU32(Config::EdgeESPinFOV));
						}
						else
						{
							Draw->AddLine(ImVec2(Vec2_C.X, Vec2_C.Y), ImVec2(Vec2_E.X, Vec2_E.Y), ImGui::GetColorU32(Config::EdgeESPColor));
							Draw->AddLine(ImVec2(Vec2_C.X, Vec2_C.Y), ImVec2(Vec2_F.X, Vec2_F.Y), ImGui::GetColorU32(Config::EdgeESPColor));
							Draw->AddLine(ImVec2(Vec2_D.X, Vec2_D.Y), ImVec2(Vec2_E.X, Vec2_E.Y), ImGui::GetColorU32(Config::EdgeESPColor));
							Draw->AddLine(ImVec2(Vec2_D.X, Vec2_D.Y), ImVec2(Vec2_F.X, Vec2_F.Y), ImGui::GetColorU32(Config::EdgeESPColor));
							//
							Draw->AddLine(ImVec2(Vec2_G.X, Vec2_G.Y), ImVec2(Vec2_I.X, Vec2_I.Y), ImGui::GetColorU32(Config::EdgeESPColor));
							Draw->AddLine(ImVec2(Vec2_G.X, Vec2_G.Y), ImVec2(Vec2_J.X, Vec2_J.Y), ImGui::GetColorU32(Config::EdgeESPColor));
							Draw->AddLine(ImVec2(Vec2_H.X, Vec2_H.Y), ImVec2(Vec2_I.X, Vec2_I.Y), ImGui::GetColorU32(Config::EdgeESPColor));
							Draw->AddLine(ImVec2(Vec2_H.X, Vec2_H.Y), ImVec2(Vec2_J.X, Vec2_J.Y), ImGui::GetColorU32(Config::EdgeESPColor));
							//
							Draw->AddLine(ImVec2(Vec2_C.X, Vec2_C.Y), ImVec2(Vec2_G.X, Vec2_G.Y), ImGui::GetColorU32(Config::EdgeESPColor));
							Draw->AddLine(ImVec2(Vec2_D.X, Vec2_D.Y), ImVec2(Vec2_H.X, Vec2_H.Y), ImGui::GetColorU32(Config::EdgeESPColor));
							Draw->AddLine(ImVec2(Vec2_E.X, Vec2_E.Y), ImVec2(Vec2_I.X, Vec2_I.Y), ImGui::GetColorU32(Config::EdgeESPColor));
							Draw->AddLine(ImVec2(Vec2_F.X, Vec2_F.Y), ImVec2(Vec2_J.X, Vec2_J.Y), ImGui::GetColorU32(Config::EdgeESPColor));
						}
					}
				}
			}
			if (Config::snapl) {
				for (int i = 0; i < Entity_t.size(); i++) {
					if (Entitys[i].Team && Entitys[i].Live) {
						Vector3 Vec3 = Entitys[i].center;
						Vector2 Vec2_A{}, Vec2_B{};
						Vector2 Vec2_C{}, Vec2_D{}, Vec2_E{}, Vec2_F{}, Vec2_G{}, Vec2_H{}, Vec2_I{}, Vec2_J{}, Vec2_K{}, Vec2_L{};
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y - 1.5f, Vec3.Z), &Vec2_A))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y + 0.8f, Vec3.Z), &Vec2_B))
							continue;
						float Size = abs(Vec2_A.Y - Vec2_B.Y) / 2.0f;
						float Size2 = abs(Vec2_A.Y - Vec2_B.Y) / 20.0f;
						float Height2 = abs(Vec2_A.Y - Vec2_B.Y);
						int num7 = (float)(1500 / (int)Height2);
						float xpos = (Vec2_A.X + Vec2_B.X) / 2.f;
						float ypos = Vec2_A.Y + Size / 5;
						Vector2 CrossHair = Vector2(GetSystemMetrics(SM_CXSCREEN) / 2.0f, GetSystemMetrics(SM_CYSCREEN) / 2.0f);
						Vector2 RealVe2 = Vector2(Vec2_B.X - CrossHair.X, Vec2_B.Y - CrossHair.Y);
						float CrossDist = CrossHair.Distance(Vec2_B);
						float origin = FLT_MAX;
						if (CrossDist < origin && CrossDist < Config::Fov) {
							Draw->AddLine(ImVec2(960, 0), ImVec2(xpos, ypos - Height2), ImGui::GetColorU32(Config::EdgeESPinFOV), 1.0f);
							//Draw->AddCircle(ImVec2(xpos, ypos - Height2), 5, ImGui::GetColorU32(Config::EdgeESPinFOV));
						}

						else
						{
							Draw->AddLine(ImVec2(960, 0), ImVec2(xpos, ypos - Height2), ImGui::GetColorU32(Config::EdgeESPColor), 1.0f);
						}
					}
				}
			}
			if (Config::dus) {
				for (int i = 0; i < Entity_t.size(); i++) {
					if (Entitys[i].Team && Entitys[i].Live) {
						Vector3 Vec3 = Entitys[i].center;
						Vector2 Vec2_A{}, Vec2_B{};
						Vector2 Vec2_C{}, Vec2_D{}, Vec2_E{}, Vec2_F{}, Vec2_G{}, Vec2_H{}, Vec2_I{}, Vec2_J{}, Vec2_K{}, Vec2_L{};
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y - 1.5f, Vec3.Z), &Vec2_A))
							continue;
						if (!viewMatrix.WorldToScreen(Vector3(Vec3.X, Vec3.Y + 0.8f, Vec3.Z), &Vec2_B))
							continue;
						float Size = abs(Vec2_A.Y - Vec2_B.Y) / 2.0f;
						float Size2 = abs(Vec2_A.Y - Vec2_B.Y) / 20.0f;
						float Height2 = abs(Vec2_A.Y - Vec2_B.Y);
						int num7 = (float)(1500 / (int)Height2);
						float xpos = (Vec2_A.X + Vec2_B.X) / 2.f;
						float ypos = Vec2_A.Y + Size / 5;
						auto cool = viewMatrix.GetCameraVec();
						int distance = sqrt(((cool.X - Entitys[i].Loc.X) * (cool.X - Entitys[i].Loc.X)) + ((cool.Y - (Entitys[i].Loc.Y + Config::bone)) * (cool.Y - (Entitys[i].Loc.Y + Config::bone))) + ((cool.Z - Entitys[i].Loc.Z) * (cool.Z - Entitys[i].Loc.Z)));
						std::string distance2 = "[" + std::to_string(distance) + "]";
						ImVec2 textSize = ImGui::CalcTextSize(distance2.c_str());
						Vector2 CrossHair = Vector2(GetSystemMetrics(SM_CXSCREEN) / 2.0f, GetSystemMetrics(SM_CYSCREEN) / 2.0f);
						Vector2 RealVe2 = Vector2(Vec2_B.X - CrossHair.X, Vec2_B.Y - CrossHair.Y);
						float CrossDist = CrossHair.Distance(Vec2_B);
						float origin = FLT_MAX;
						if (CrossDist < origin && CrossDist < Config::Fov) {
							Draw->AddText(ImVec2(xpos - (textSize.x / 2), ypos), ImGui::GetColorU32(Config::EdgeESPinFOV), (char*)distance2.c_str());
							//Draw->AddCircle(ImVec2(xpos, ypos - Height2), 5, ImGui::GetColorU32(Config::EdgeESPinFOV));
						}

						else
						{
							Draw->AddText(ImVec2(xpos - (textSize.x / 2), ypos), ImGui::GetColorU32(Config::EdgeESPColor), (char*)distance2.c_str());
						}
					}
				}
			}
			if (Config::draw_fov) {
				Draw->AddCircle(CrossHair, Config::Fov, 0xFFFFFFFF, 100);
			}
		}
		__except (1) {

		}
	}

	inline void overlay_thread() {
		std::chrono::system_clock::time_point a = std::chrono::system_clock::now();
		std::chrono::system_clock::time_point b = std::chrono::system_clock::now();

		HWND tWnd = SpoofFindWindowA("TankWindowClass", NULL);
		WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, "MedalOverlay", NULL };
		RegisterClassEx(&wc);
		HWND hwnd;
		if (!windows11yes) {
			hwnd = FindWindowA("MedalOverlayClass", "MedalOverlay");
			if (!hwnd) {
				MessageBox(0, "Failed to find Medal\nPress OK to proceed to website", "Failed to hijack Window", MB_OK);
				system("start https://medal.tv/");
				exit(1);
			}
		}
		else {
			hwnd = CreateWindowA(wc.lpszClassName, "Discord", WS_POPUP, 0, 0, 0, 0, NULL, NULL, wc.hInstance, NULL);
		}
		if (!CreateDeviceD3D(hwnd))
		{
			CleanupDeviceD3D();
			UnregisterClass(wc.lpszClassName, wc.hInstance);
		
		}

		MARGINS margins = { -1 };
		if (windows11yes) {
			DwmExtendFrameIntoClientArea(hwnd, &margins);
		}

		SpoofSetWindowPos(hwnd, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
		SetWindowLong(hwnd, GWL_EXSTYLE, WS_EX_LAYERED | WS_EX_TRANSPARENT | WS_EX_NOACTIVATE);


		IMGUI_CHECKVERSION();
		ImGui::CreateContext();

		ImGuiIO& io = ImGui::GetIO(); (void)io;

		ImGui::StyleColorsDark();

		ImGui_ImplWin32_Init(tWnd);
		ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);

		MSG msg;
		ZeroMemory(&msg, sizeof(msg));
		int FPS;
		while (SpoofFindWindowA("TankWindowClass", NULL))
		{

			io.DeltaTime = 1.0f / 60.0f;

			std::this_thread::sleep_for(std::chrono::milliseconds(1));
			DEVMODE dm;
			dm.dmSize = sizeof(DEVMODE);

			EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm);

			FPS = dm.dmDisplayFrequency;

			a = std::chrono::system_clock::now();
			std::chrono::duration<double, std::milli> work_time = a - b;
			if (work_time.count() < 1000 / FPS)
			{
				std::chrono::duration<double, std::milli> delta_ms(1000 / FPS - work_time.count());
				auto delta_ms_duration = std::chrono::duration_cast<std::chrono::milliseconds>(delta_ms);
				std::this_thread::sleep_for(std::chrono::milliseconds(delta_ms_duration.count()));
			}

			b = std::chrono::system_clock::now();
			std::chrono::duration<double, std::milli> sleep_time = b - a;

			DWORD Style = GetWindowLong(tWnd, GWL_STYLE);
			RECT rect;
			GetWindowRect(tWnd, &rect);

			SpoofSetWindowPos(hwnd, HWND_TOPMOST, rect.left, rect.top, rect.right, rect.bottom, SWP_NOZORDER);

			SpoofSetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
			ShowWindow(hwnd, SW_SHOWDEFAULT);
			UpdateWindow(hwnd);
			if (::PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
			{
				::TranslateMessage(&msg);
				::DispatchMessage(&msg);
				continue;
			}

			if (GetKeyRandomized(VK_LBUTTON))
			{
				ImGui::GetIO().MouseDown[0] = true;
			}
			else
			{
				ImGui::GetIO().MouseDown[0] = false;
			}

			//io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Arial.ttf", 14); fucking memory leak :/

			auto& colors = ImGui::GetStyle().Colors;
			colors[ImGuiCol_WindowBg] = ImVec4{ 0.1f, 0.1f, 0.13f, 1.0f };
			colors[ImGuiCol_MenuBarBg] = ImVec4{ 0.16f, 0.16f, 0.21f, 1.0f };

			// Border
			colors[ImGuiCol_Border] = ImVec4{ 0.44f, 0.37f, 0.61f, 0.29f };
			colors[ImGuiCol_BorderShadow] = ImVec4{ 0.0f, 0.0f, 0.0f, 0.24f };

			// Text
			colors[ImGuiCol_Text] = ImVec4{ 1.0f, 1.0f, 1.0f, 1.0f };
			colors[ImGuiCol_TextDisabled] = ImVec4{ 0.5f, 0.5f, 0.5f, 1.0f };

			// Headers
			colors[ImGuiCol_Header] = ImVec4{ 0.13f, 0.13f, 0.17, 1.0f };
			colors[ImGuiCol_HeaderHovered] = ImVec4{ 0.19f, 0.2f, 0.25f, 1.0f };
			colors[ImGuiCol_HeaderActive] = ImVec4{ 0.16f, 0.16f, 0.21f, 1.0f };

			// Buttons
			colors[ImGuiCol_Button] = ImVec4{ 0.13f, 0.13f, 0.17, 1.0f };
			colors[ImGuiCol_ButtonHovered] = ImVec4{ 0.19f, 0.2f, 0.25f, 1.0f };
			colors[ImGuiCol_ButtonActive] = ImVec4{ 0.16f, 0.16f, 0.21f, 1.0f };
			colors[ImGuiCol_CheckMark] = ImVec4{ 0.74f, 0.58f, 0.98f, 1.0f };

			// Popups
			colors[ImGuiCol_PopupBg] = ImVec4{ 0.1f, 0.1f, 0.13f, 0.92f };

			// Slider
			colors[ImGuiCol_SliderGrab] = ImVec4{ 0.44f, 0.37f, 0.61f, 0.54f };
			colors[ImGuiCol_SliderGrabActive] = ImVec4{ 0.74f, 0.58f, 0.98f, 0.54f };

			// Frame BG
			colors[ImGuiCol_FrameBg] = ImVec4{ 0.13f, 0.13, 0.17, 1.0f };
			colors[ImGuiCol_FrameBgHovered] = ImVec4{ 0.19f, 0.2f, 0.25f, 1.0f };
			colors[ImGuiCol_FrameBgActive] = ImVec4{ 0.16f, 0.16f, 0.21f, 1.0f };

			// Tabs
			colors[ImGuiCol_Tab] = ImVec4{ 0.16f, 0.16f, 0.21f, 1.0f };
			colors[ImGuiCol_TabHovered] = ImVec4{ 0.24, 0.24f, 0.32f, 1.0f };
			colors[ImGuiCol_TabActive] = ImVec4{ 0.2f, 0.22f, 0.27f, 1.0f };
			colors[ImGuiCol_TabUnfocused] = ImVec4{ 0.16f, 0.16f, 0.21f, 1.0f };
			colors[ImGuiCol_TabUnfocusedActive] = ImVec4{ 0.16f, 0.16f, 0.21f, 1.0f };

			// Title
			colors[ImGuiCol_TitleBg] = ImVec4{ 0.16f, 0.16f, 0.21f, 1.0f };
			colors[ImGuiCol_TitleBgActive] = ImVec4{ 0.16f, 0.16f, 0.21f, 1.0f };
			colors[ImGuiCol_TitleBgCollapsed] = ImVec4{ 0.16f, 0.16f, 0.21f, 1.0f };

			// Scrollbar
			colors[ImGuiCol_ScrollbarBg] = ImVec4{ 0.1f, 0.1f, 0.13f, 1.0f };
			colors[ImGuiCol_ScrollbarGrab] = ImVec4{ 0.16f, 0.16f, 0.21f, 1.0f };
			colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4{ 0.19f, 0.2f, 0.25f, 1.0f };
			colors[ImGuiCol_ScrollbarGrabActive] = ImVec4{ 0.24f, 0.24f, 0.32f, 1.0f };

			// Seperator
			colors[ImGuiCol_Separator] = ImVec4{ 0.44f, 0.37f, 0.61f, 1.0f };
			colors[ImGuiCol_SeparatorHovered] = ImVec4{ 0.74f, 0.58f, 0.98f, 1.0f };
			colors[ImGuiCol_SeparatorActive] = ImVec4{ 0.84f, 0.58f, 1.0f, 1.0f };

			// Resize Grip
			colors[ImGuiCol_ResizeGrip] = ImVec4{ 0.44f, 0.37f, 0.61f, 0.29f };
			colors[ImGuiCol_ResizeGripHovered] = ImVec4{ 0.74f, 0.58f, 0.98f, 0.29f };
			colors[ImGuiCol_ResizeGripActive] = ImVec4{ 0.84f, 0.58f, 1.0f, 0.29f };


			auto& style = ImGui::GetStyle();
			style.TabRounding = 4;
			style.ScrollbarRounding = 9;
			style.WindowRounding = 7;
			style.GrabRounding = 3;
			style.FrameRounding = 3;
			style.PopupRounding = 4;
			style.ChildRounding = 4;



			ImGui_ImplDX11_NewFrame();
			ImGui_ImplWin32_NewFrame();
			ImGui::NewFrame();
			bool _visible = true;
			if (Config::Menu)
			{
				ImGui::SetNextWindowPos(ImVec2{ 50, 30 }, ImGuiCond_Once);
				if (ImGui::Begin(skCrypt("Aim"), &_visible, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize)) {
					ImGui::Checkbox(skCrypt("Aimbot"), &Config::Tracking);
					ImGui::Checkbox(skCrypt("Flick Bot"), &Config::Flick);
					ImGui::Checkbox(skCrypt("Triggerbot"), &Config::triggerbot);
					ImGui::Text(skCrypt("Turn on CapsLock to aim lower"));
					ImGui::Separator();
					ImGui::SliderFloat(skCrypt("Aim Smoothness"), &Config::Tracking_smooth, 0.f, 10.f, "%0.1f");
					ImGui::SliderFloat(skCrypt("Flick Smoothing"), &Config::Flick_smooth, 0.f, 20.f, "%0.1f");
					ImGui::SliderFloat(skCrypt("CapsLock Lowerness"), &Config::lower, -5.f, 5.f, "%0.1f");
					ImGui::Separator();
					//ImGui::Text(skCrypt("Advanced Flick Precision"));
					//ImGui::SliderFloat(skCrypt("Flick Speed/Smoothness"), &Config::Flick_smooth, 0.f, 15.f, "%.01f");
					//ImGui::SliderInt(skCrypt("Flick Delay Before Shot"), &Config::delay, 1, 100, "%.001f");
					//ImGui::SliderInt(skCrypt("Flick Aim Requests"), &Config::requestsper, 1, 20, "%.001f");
					//ImGui::InputDouble(Config::caps);
					//ImGui::InputDouble("CapsLock Lowering", &Config::down, -3, 3);
					ImGui::Separator();
					ImGui::Text(skCrypt("Prediction:"));
					ImGui::Checkbox(skCrypt("Prediction"), &Config::prediction);
					ImGui::Combo(skCrypt("Hero"), &Config::hero, Config::heroes, IM_ARRAYSIZE(Config::heroes));
					ImGui::Text(skCrypt("Bone"));
					ImGui::SliderFloat(skCrypt("Bone"), &Config::boneorgy, 0.f, 1.0f, "%.02f");
					ImGui::Separator();
					ImGui::Text(skCrypt("Aim Key"));
					ImGui::Hotkey(&Config::key, ImVec2(90, 40));
					ImGui::Text(skCrypt("Trigger/Flick Key"));
					ImGui::Hotkey1(&Config::tkey, ImVec2(90, 40));
				}
				ImGui::SetNextWindowPos(ImVec2{ 450, 30 }, ImGuiCond_Once);
				if (ImGui::Begin(skCrypt("Visuals"), &_visible, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize)) {
					ImGui::Checkbox(skCrypt("Draw FOV"), &Config::draw_fov);
					ImGui::Checkbox(skCrypt("Box ESP"), &Config::draw_box);
					ImGui::Checkbox(skCrypt("Prediction Circle ESP"), &Config::predd);
					ImGui::Checkbox(skCrypt("Distance ESP"), &Config::dus);
					ImGui::Checkbox(skCrypt("3D Box ESP"), &Config::draw_3dbox);
					ImGui::Checkbox(skCrypt("Corner ESP"), &Config::draw_edge);
					ImGui::Checkbox(skCrypt("Snaplines"), &Config::snapl);
					ImGui::ColorEdit4(skCrypt("ESP Color (In FOV)"), (float*)&Config::EdgeESPinFOV, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
					ImGui::ColorEdit4(skCrypt("ESP Color (Not in FOV)"), (float*)&Config::EdgeESPColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
					ImGui::Separator();
					ImGui::SliderFloat(skCrypt("Circle FOV"), &Config::Fov, 20.0f, 1000.0f, "%.01f");
				}
				ImGui::SetNextWindowPos(ImVec2{ 800, 30 }, ImGuiCond_Once);
				if (ImGui::Begin(skCrypt("Misc"), &_visible, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize)) {
					ImGui::Checkbox(skCrypt("Switch Team Target"), &Config::is_team);
					ImGui::Text(skCrypt("Team Target (Keybind)"));
					ImGui::Hotkey4(&Config::apples, ImVec2(70, 30));
					ImGui::Separator();
					ImGui::Text(skCrypt("Open/Close Menu"));
					ImGui::Hotkey2(&Config::menukey, ImVec2(90, 40));
					ImGui::Text(skCrypt("Close Cheat"));
					ImGui::Hotkey3(&Config::closekey, ImVec2(90, 40));
				}
				ImGui::End();
			}

			esp();
			ImGui::EndFrame();
			ImGui::Render();
			g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
			auto ss = ImVec4(0, 0, 0, 0);
			g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, (float*)&ss);
			ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

			g_pSwapChain->Present(1, 0);
		}

		ImGui_ImplDX11_Shutdown();
		ImGui_ImplWin32_Shutdown();
		ImGui::DestroyContext();

		CleanupDeviceD3D();
		::DestroyWindow(hwnd);
		if (windows11yes) {
			::UnregisterClass(wc.lpszClassName, wc.hInstance);
		}
	}
	inline void aimbot_thread() {
		__try {
			timeBeginPeriod(1);
			Vector2 CrossHair = Vector2(GetSystemMetrics(SM_CXSCREEN) / 2.0f, GetSystemMetrics(SM_CYSCREEN) / 2.0f);
			static float origin_sens = 0.f;

			bool shooted = false;
			while (true) {
				//Tracking
				if (Config::Tracking) {
					Config::Flick = false;
					Config::humamaim = false;
					Config::triggerbot = false;
					Config::Silent = false;
					//Vector2 TarGet = GetAimEnemy();
					while (GetKeyRandomized(Config::key))
					{
						Vector2 TarGet = GetAimEnemy();
						{
							SpoofedMouseEvent(MOUSEEVENTF_MOVE, TarGet.X * Config::Tracking_smooth / (3.f * 8.f), TarGet.Y * Config::Tracking_smooth / (3.f * 8.f), NULL, NULL);
						}
						std::this_thread::sleep_for(std::chrono::milliseconds(1));
					}
				}
				else if (Config::Flick) {

					Config::Tracking = false;
					Config::humamaim = false;
					Config::triggerbot = false;
					Vector2 TarGets = GetAimEnemy();
					while (GetKeyRandomized(Config::tkey))
					{

						Vector2 TarGet = GetAimEnemy();
						{
							SpoofedMouseEvent(MOUSEEVENTF_MOVE, TarGet.X * Config::Flick_smooth / (3.f * 8.f), TarGet.Y * Config::Flick_smooth / (3.f * 8.f), NULL, NULL);
							SpoofedMouseEvent(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
							SpoofedMouseEvent(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
						}
					}
				}
				else if (Config::triggerbot) {
					Config::Tracking = false;
					Config::Flick = false;
					Config::Silent = false;
					Config::humamaim = false;
					Vector2 TarGets = GetAimEnemy();
					while (GetKeyRandomized(Config::tkey))
					{
						Vector2 TarGet = GetAimEnemy();
						if (TarGet.X != 0 && TarGet.Y != 0)
						{
							SpoofedMouseEvent(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
							SpoofedMouseEvent(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
							std::this_thread::sleep_for(std::chrono::milliseconds(1));
						}
					}
				}
			}
			timeBeginPeriod(1);
		}
		__except (1) {
			std::this_thread::sleep_for(std::chrono::milliseconds(1));
		}
	}


	inline bool compress_mbis = false;
	inline std::vector<MEMORY_BASIC_INFORMATION64> mbis = {};

	inline bool update_memory_query()
	{
		MEMORY_BASIC_INFORMATION64 mbi = { 0, };
		MEMORY_BASIC_INFORMATION64 old = { 0, };
		uintptr_t current_address = 0x7ffe0000;
		std::vector<MEMORY_BASIC_INFORMATION64> addresses;
		while (true)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1));
			if (!VirtualQueryEx(SDK->hProcess, (LPVOID)current_address, (PMEMORY_BASIC_INFORMATION)&mbi, sizeof(MEMORY_BASIC_INFORMATION64)))
				break;
			if ((mbi.State & 0x1000) != 0 && (mbi.Protect & 0x100) == 0)
			{
				if (old.BaseAddress + old.RegionSize == mbi.BaseAddress && compress_mbis)
					old.RegionSize += mbi.RegionSize;
				else
					addresses.push_back(mbi);

				old = mbi;
			}
			current_address = mbi.BaseAddress + mbi.RegionSize;
		}

		mbis = addresses;

		return (mbis.size() > 0);
	}

	inline void scan_matrix_ex()
	{
		if (!update_memory_query())
			return;

		Matrix view_matrix{};
		Vector3 local_pos = Vector3(viewMatrix.get_location().x, viewMatrix.get_location().y, viewMatrix.get_location().z);

		for (size_t i = 0; i < mbis.size(); ++i)
		{
			MEMORY_BASIC_INFORMATION64 mbi = mbis[i];

			char* buffer = new char[mbi.RegionSize];
			SDK->read_buf(mbi.BaseAddress, buffer, mbi.RegionSize);

			for (int j = 0; j < mbi.RegionSize; j++)
			{
				memcpy(&view_matrix, &buffer[j], sizeof(Matrix));
				auto local_camera = view_matrix.GetCameraVec();

				if (local_pos.DistTo(local_camera) < 2.0f)
				{
					printf("%p %.2f %.2f %.2f | %.2f %.2f %.2f\n", mbi.BaseAddress + j, local_pos.X, local_pos.Y, local_pos.Z, local_camera.X, local_camera.Y, local_camera.Z);
				}
			}

			delete[]buffer;
		}

		printf("finished\n");
	}
}

