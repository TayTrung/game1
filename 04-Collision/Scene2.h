#pragma once
#include "Scene.h"
#include "SceneManager.h"

class Scene2 : public Scene
{
private:
	bool lvl2;
public:
	virtual void KeyState(BYTE *states);
	virtual void OnKeyDown(int KeyCode);
	virtual void OnKeyUp(int KeyCode);

	virtual void LoadResources();
	virtual void Update(DWORD dt);
	virtual void Render();

	void erasingObjThatInacitve();
	void spawnGhou(float x, float y);
	void spawnBat(Simon *simon, Camera *camera);
	void XuLyPanthera();
	virtual void CollisionBetWeaponAndEnemy();
	virtual void CollisionBetSimonAndItem();
	virtual void CollisionBetSimonAndEnemy();
	virtual int CollisionBetSimonAndUpStairs();
	virtual int CollisionBetSimonAndDownStairs();
	Scene2(Simon *simon);
	~Scene2();
};

