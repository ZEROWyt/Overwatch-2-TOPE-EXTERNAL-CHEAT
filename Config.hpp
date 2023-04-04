#pragma once

namespace OW {
	namespace Config {
		/* Aimbot */
		float Flick_smooth = 2.f;
		float Tracking_smooth = 2.f;
		float Flick_speed = 2.f;
		float Tracking_speed = 2.f;
		float huintens = .1f;
		bool interception = false;
		float Fov = 90.f;
		float Within = 20.f;
		float SetFOV = 103.f;
		float y_pitch = 0.85f;
		float hitbox = 0.125f;
		float predit_level = 11.f;
		float lower = .4f;
		float bone = 0.30f;
		float boneorgy = 0.30f;
		bool Flick = false;
		bool dus = true;
		bool mouseevents = false;
		bool sendinput = false;
		bool Tracking = false;
		bool Silent = false;
		bool humamaim = false;
		int hero = 0;
		const char* heroes[] = { "Hanzo", "Genji", "Ana", "Sojourn", "Lucio", "Eco", "Pharah", "Orisa", "Torb", "Zen" };
		/* Draw */
		bool prediction = true;
		bool fovchanger = false;
		bool snapl = false;
		bool cornerbox = true;
		bool rectangle = true;
		bool triggerbot = false;
		bool filledrect = true;
		int selectedItem = 0;
		int ingameSensitivity = 15;
		bool geekmenu = false;
		bool draw_fov = true;
		int screenrezX = 1920;
		int screenrezY = 1080;
		bool draw_box = false;
		bool draw_edge = true;
		bool draw_3dbox = false;
		bool predd = true;
		float FlickMulti = 1.2f;
		double caps = 0.4;
		int key = VK_LBUTTON;
		int tkey = VK_MENU;
		int menukey = VK_INSERT;
		int closekey = VK_END;
		int apples = VK_F9;

		/* Draw Menu */
		bool Menu = true;
		bool force = true;

		/* Team */
		bool is_team = false;
		int delay = 45;
		int requestsper = 3;

		/* Color */
		ImVec4 EdgeESPColor = ImVec4(255, 0, 0, 255);
		ImVec4 EdgeESPinFOV = ImVec4(0, 1, 0, 1);
	}
}