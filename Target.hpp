#pragma once
#include "includes.hpp";
namespace OW
{
	static Vector2 GetAimEnemy()
	{
		int TarGetIndex = -1;
		Vector2 target = Vector2(0, 0);
		float screenX = GetSystemMetrics(SM_CXSCREEN) / 2.0f;
		float screenY = GetSystemMetrics(SM_CYSCREEN) / 2.0f;
		Vector2 CrossHair = Vector2(screenX, screenY);

		float origin = FLT_MAX;
		size_t entitySize = Entity_t.size();

		if (TarGetIndex == -1 && entitySize > 0)
		{
			for (int i = 0; i < entitySize; i++)
			{
				if (Entitys[i].Live && Entitys[i].Team)
				{
					Vector2 Vec2{};
					if (Config::prediction)
					{
						if (!viewMatrix.WorldToScreen(Entitys[i].predict, &Vec2))
							continue;
					}
					else
					{
						if (!viewMatrix.WorldToScreen(Entitys[i].head, &Vec2))
							continue;
					}

					Vector2 RealVe2 = Vector2(Vec2.X - CrossHair.X, Vec2.Y - CrossHair.Y);
					float CrossDist = CrossHair.Distance(Vec2);

					if (CrossDist < origin && CrossDist < Config::Fov)
					{
						target = RealVe2;
						origin = CrossDist;
						TarGetIndex = i;
					}
				}
			}
		}
		else if (Entitys[TarGetIndex].Live && Entitys[TarGetIndex].Team)
		{
			Vector2 Vec2{};

			if (Config::prediction)
			{
				if (!viewMatrix.WorldToScreen(Entitys[TarGetIndex].predict, &Vec2))
					return {0, 0};
			}
			else
			{
				if (!viewMatrix.WorldToScreen(Entitys[TarGetIndex].center, &Vec2))
					return {0, 0};
			}

			Vector2 RealVe2 = Vector2(Vec2.X - CrossHair.X, Vec2.Y - CrossHair.Y);
			float CrossDist = CrossHair.Distance(Vec2);

			if (CrossDist < origin && CrossDist < Config::Fov)
			{
				target = RealVe2;
				origin = CrossDist;
			}
		}

		return target;
	}
}