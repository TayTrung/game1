#include "Numbah.h"



void Numbah::Update(DWORD dt, vector<LPGAMEOBJECT>* colliable_objects)
{
	// Calculate dx, dy 
	CGameObject::Update(dt);

	// Simple fall down
	vy += ITEM_GRAVITY * dt;


	vector<LPCOLLISIONEVENT> coEvents;
	vector<LPCOLLISIONEVENT> coEventsResult;

	coEvents.clear();

	CalcPotentialCollisions(colliable_objects, coEvents);

	if (GetTickCount() - dropTime_Start > ITEM_MAX_TIME_DROP)
	{
		if (this->GetState() == ITEM_STATE_DROPPED)
		this->SetState(ITEM_STATE_INACTIVE);
		dropTime_Start = 0;
		dropped = false;
	}

	// No collision occured, proceed normally
	if (coEvents.size() == 0)
	{
		x += dx;
		y += dy;
	}
	else
	{
		float min_tx, min_ty, nx = 0, ny;

		FilterCollision(coEvents, coEventsResult, min_tx, min_ty, nx, ny);

		// block 
		x += min_tx * dx + nx * 0.4f;		// nx*0.4f : need to push out a bit to avoid overlapping next frame
		y += min_ty * dy + ny * 0.4f;

		if (nx != 0) vx = 0;
		if (ny != 0)
		{
			
			vy = 0;
		}

	}
	if (this->GetState() == ITEM_STATE_ACTIVE)
	{
		TimeWaitToEat += dt;
		if (TimeWaitToEat >= ITEM_TIME_WAIT_TO_EAT)
		{
			this->SetState(ITEM_STATE_DROPPED);
			StartCountTIme();
			TimeWaitToEat = 0;
		}
	}

	//clean up collision events
	for (UINT i = 0; i < coEvents.size(); i++) delete coEvents[i];
}

Numbah::Numbah()
{
	state = ITEM_STATE_ACTIVE;
}


Numbah::~Numbah()
{
}


void Numbah::GetBoundingBox(float &left, float &top, float &right, float &bottom)
{
	left = x;
	top = y;
	right = x + NUMBAH_BBOX_WIDTH;
	bottom = y + NUMBAH_BBOX_HEIGHT;
}



void Numbah::Render()
{
	if (this->GetState() == ITEM_STATE_ACTIVE || this->GetState() == ITEM_STATE_DROPPED)
	{
		animations[0]->Render(x, y);
		//	RenderBoundingBox(100);
	}


}

void Numbah::SetState(int state)
{
	this->state = state;

}
