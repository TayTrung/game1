#pragma once
#include "Enemy.h"
#include "Simon.h"
#include "Camera.h"
class Boss : public Enemy
{
public:
	int hp = 16;

	bool untouchable;
	DWORD untouchable_start;
	void StartUntouchable() {
		untouchable = true;
		untouchable_start = GetTickCount();
	}
	virtual void Update(DWORD dt,Simon *x);
	virtual void Render();
	void SetState(int state);
	virtual void GetBoundingBox(float &left, float &top, float &right, float &bottom);

	Boss();
	~Boss();
};

