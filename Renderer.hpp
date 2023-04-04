#pragma once

namespace OW {
	namespace Render {
		inline void DrawEdges(const ImVec2& top, const ImVec2& bot, const ImVec2& base, ImU32 col)
		{
			ImDrawList* Draw = ImGui::GetBackgroundDrawList();
			float scale = (bot.y - top.y) / 3.0f;
			float length = scale / 2;
			Draw->AddLine(ImVec2(base.x - scale, top.y), ImVec2(base.x - scale + length, top.y), col, 2.0f); //  --- Top left
			Draw->AddLine(ImVec2(base.x - scale, top.y), ImVec2(base.x - scale, top.y + length), col, 2.0f); // | Top left
			Draw->AddLine(ImVec2(base.x + scale / 3, top.y), ImVec2(base.x + scale / 3 + length, top.y), col, 2.0f); // --- Top right
			Draw->AddLine(ImVec2(base.x + scale / 3 + length, top.y), ImVec2(base.x + scale / 3 + length, top.y + length), col, 2.0f); // | Top right
			Draw->AddLine(ImVec2(base.x - scale, bot.y), ImVec2(base.x - scale + length, bot.y), col, 2.0f); // --- Bottom left
			Draw->AddLine(ImVec2(base.x - scale, bot.y), ImVec2(base.x - scale, bot.y - length), col, 2.0f); // | Bottom left
			Draw->AddLine(ImVec2(base.x + scale / 3 + length, bot.y), ImVec2(base.x + scale / 3, bot.y), col, 2.0f); // --- Bottom right
			Draw->AddLine(ImVec2(base.x + scale / 3 + length, bot.y), ImVec2(base.x + scale / 3 + length, bot.y - length), col, 2.0f); // | Bottom right
		}
		inline void DrawBoxes(const ImVec2& top, const ImVec2& bot, const ImVec2& base, ImU32 col)
		{
			ImDrawList* Draw = ImGui::GetBackgroundDrawList();
			float scale = (bot.y - top.y) / 4.0f;
			float length = scale / 0.5;
			Draw->AddLine(ImVec2(base.x - scale, top.y), ImVec2(base.x - scale + length, top.y), col, 2.0f); //  --- Top left
			Draw->AddLine(ImVec2(base.x - scale, top.y), ImVec2(base.x - scale, top.y + length), col, 2.0f); // | Top left
			Draw->AddLine(ImVec2(base.x + scale / 3, top.y), ImVec2(base.x + scale / 3 + length, top.y), col, 2.0f); // --- Top right
			Draw->AddLine(ImVec2(base.x + scale / 3 + length, top.y), ImVec2(base.x + scale / 3 + length, top.y + length), col, 2.0f); // | Top right
			Draw->AddLine(ImVec2(base.x - scale, bot.y), ImVec2(base.x - scale + length, bot.y), col, 2.0f); // --- Bottom left
			Draw->AddLine(ImVec2(base.x - scale, bot.y), ImVec2(base.x - scale, bot.y - length), col, 2.0f); // | Bottom left
			Draw->AddLine(ImVec2(base.x + scale / 3 + length, bot.y), ImVec2(base.x + scale / 3, bot.y), col, 2.0f); // --- Bottom right
			Draw->AddLine(ImVec2(base.x + scale / 3 + length, bot.y), ImVec2(base.x + scale / 3 + length, bot.y - length), col, 2.0f); // | Bottom right
		}
	}
}