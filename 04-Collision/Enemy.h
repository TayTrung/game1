#pragma once
#include "GameObject.h"

class Enemy;
typedef Enemy * LPENEMY;
class Enemy : public CGameObject
{

public:
	bool spawnFireBall;
	bool freezed;
	DWORD freezeTime_Start;
	int itemInside;
	void StartUntouchable() { freezed = true; freezeTime_Start = GetTickCount(); }
	void setItemInside(int Item);
	void getItemInside(int Item);
	Enemy();
	~Enemy();
};

