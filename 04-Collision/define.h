#pragma once
//Main.cpp
#define WINDOW_CLASS_NAME L"SampleWindow"
#define MAIN_WINDOW_TITLE L"04 - Collision"

#define SCREEN_WIDTH	360
#define SCREEN_HEIGHT	285
//FPS
#define MAX_FRAME_RATE 90

//Game.h
#define DIRECTINPUT_VERSION 0x0800
#define KEYBOARD_BUFFER_SIZE 1024

//Item.h
#define ITEM_GRAVITY 0.002f

//GameObj.h
#define ID_TEX_BBOX -100		// special texture to draw object bounding box

#pragma region Map

#define offsetMap 64
#define ID_TEX_MAP1 4
#define ID_TEX_MAP2 5

#pragma endregion

#pragma region Stairts

#define STAIRS_BBOX_WIDTH	30
#define STAIRS_BBOX_HEIGHT 30

#pragma endregion

#pragma region Ground

#define BRICKMAP11_BBOX_WIDTH 768
#define BRICKMAP21_BBOX_WIDTH 1583
#define BRICKMAP22_BBOX_WIDTH 304
#define BRICKMAP23_BBOX_WIDTH 896
#define BRICK_BBOX_HEIGHT 16

#define INVIS_BRICK_BBOX_WIDTH	5
#define INVIS_BRICK_BBOX_HEIGHT 5

#define INVIS_STATE_NEXT_LVL 1000
#define INVIS_STATE_INVIS_ITEM 2000
#define INVIS_STATE_INACTIVE 3000

#pragma endregion


#pragma region Torch and Candle

#define TORCH_BBOX_WIDTH	16
#define TORCH_BBOX_HEIGHT	32

#define TORCH_STATE_ACTIVE		100
#define TORCH_STATE_INACTIVE	200

#define CANDLE_BBOX_WIDTH		8
#define CANDLE_BBOX_HEIGHT		16

#define CANDLE_STATE_ACTIVE		100
#define CANDLE_STATE_INACTIVE	200

#pragma endregion


#pragma region Ghou

#define GHOU_BBOX_WIDTH		16
#define GHOU_BBOX_HEIGHT	32


#define GHOU_ANI_RIGHT		0
#define GHOU_ANI_LEFT		1

#define GHOU_STATE_ACTIVE_RIGHT 50
#define GHOU_STATE_ACTIVE_LEFT	100
#define GHOU_STATE_INACTIVE		200

#define GHOU_WALKING_SPEED 0.07f
#pragma endregion

#pragma region Bat

#define BAT_BBOX_WIDTH		16
#define BAT_BBOX_HEIGHT		16

#define BAT_ANI_RIGHT 0
#define BAT_ANI_LEFT  1

#define BAT_STATE_ACTIVE_RIGHT	50
#define BAT_STATE_ACTIVE_LEFT	100
#define BAT_STATE_INACTIVE		200

#pragma endregion
#pragma region Panther

#define PANTHER_BBOX_WIDTH		32
#define PANTHER_BBOX_HEIGHT		16


#define PANTHER_ANI_RIGHT			0
#define PANTHER_ANI_LEFT			1
#define PANTHER_ANI_SIT_RIGHT		2
#define PANTHER_ANI_SIT_LEFT		3
#define PANTHER_ANI_JUMP_RIGHT		4
#define PANTHER_ANI_JUMP_LEFT		5

#define PANTHER_STATE_ACTIVE_RIGHT	50
#define PANTHER_STATE_ACTIVE_LEFT	100
#define PANTHER_STATE_INACTIVE		200
#define PANTHER_STATE_JUMPING_RIGHT	300
#define PANTHER_STATE_JUMPING_LEFT	400
#define PANTHER_STATE_SIT_LEFT		500
#define PANTHER_STATE_SIT_RIGHT		600

#define PANTHER_WALKING_SPEED 0.2f

#pragma endregion

#pragma region Scene1

#define BACKGROUND_COLOR D3DCOLOR_XRGB(0, 0, 0)



#define MAP1_WIDTH	768
#define MAP1_HEIGHT	184



#pragma endregion




//CASES TO DEFINE WHAT ITEMS IS INSIDE
#define bigheartInside 1
#define morningstarInside 2
#define daggerInside 3
#define smallheartInside 4

#define checkpointBrick 5


#define ID_TEX_SIMON 0
#define ID_TEX_WHIP 10	
#define ID_TEX_GROUND 20
#define ID_TEX_TORCH 30
#define ID_TEX_CANDLE 32
#define ID_TEX_GHOUL 31
#define ID_TEX_BAT 34
#define ID_TEX_PANTHER 33
#define ID_TEX_MOR 40
#define ID_TEX_ITEM_BIGHEART 50
#define ID_TEX_ITEM_SWORD 60
#define ID_TEX_ITEM_WHIP 70
#define ID_TEX_ITEM_GOLD 80
#define ID_TEX_ITEM_SMALLHEART 90
 
#pragma region Scene2

#define MAP2_WIDTH	2814
#define MAP2_HEIGHT	184

#define MAP21_WIDTH		512
#define MAP21_HEIGHT	184

#pragma endregion

#pragma region Item

#define ITEM_STATE_ACTIVE		100
#define ITEM_STATE_INACTIVE		200

#pragma endregion

#pragma region BigHeart

#define BIGHEART_BBOX_WIDTH  12
#define BIGHEART_BBOX_HEIGHT 10


#pragma endregion

#pragma region SmallHeart

#define SMALLHEART_BBOX_WIDTH  5
#define SMALLHEART_BBOX_HEIGHT 5


#define SMALLHEART_WALKING_SPEED 0.02f

#pragma endregion

#pragma region Dagger1

#define DAGGER1_BBOX_WIDTH		16
#define DAGGER1_BBOX_HEIGHT		9

#pragma endregion

#pragma region GoldBag

#define GOLDBAG_BBOX_WIDTH 15
#define GOLDBAG_BBOX_HEIGHT 15

#pragma endregion

#pragma region MorningStar

#define MSTAR_BBOX_WIDTH		16
#define MSTAR_BBOX_HEIGHT		16

#pragma endregion

#pragma region Whip

#define VAMPIRE_KILLER		1
#define CHAIN_WHIP			2
#define MORNING_STAR		3

#define offsetXRightSide	20
#define offsetYBothSide	9

#define offsetXLeftSide		3

#define VAMPIRE_KILLER_BBOX_WIDTH	24
#define VAMPIRE_KILLER_BBOX_HEIGHT	7

#define CHAIN_WHIP_BBOX_WIDTH		24
#define CHAIN_WHIP_BBOX_HEIGHT		9

#define MORNING_STAR_BBOX_WIDTH		40
#define MORNING_STAR_BBOX_HEIGHT	10

#define WHIP_STATE_ACTIVE_RIGHT 100
#define WHIP_STATE_ACTIVE_LEFT	200
#define WHIP_STATE_INACTIVE		300

#define WHIP_ANI_LEFT  0
#define WHIP_ANI_RIGHT 1
#define WHIP_ANI_INACTIVE 2

#pragma endregion

#pragma region Dagger

#define DAGGER_BBOX_WIDTH			16
#define DAGGER_BBOX_HEIGHT			9

#define DAGGER_STATE_ACTIVE_LEFT	100
#define DAGGER_STATE_ACTIVE_RIGHT	200
#define DAGGER_STATE_INACTIVE		300

#define DAGGER_ANI_LEFT				0
#define DAGGER_ANI_RIGHT			1
#define DAGGER_ANI_INACTIVE			2

#define DAGGER_FLYING_SPEED			0.2f 

#pragma endregion

#pragma region Simon

#define SIMON_WALKING_SPEED					0.1f 
#define SIMON_JUMP_SPEED_Y					0.4f
#define SIMON_JUMP_DEFLECT_SPEED			0.2f
#define SIMON_GRAVITY						0.002f
#define SIMON_DIE_DEFLECT_SPEED				0.5f

#define SIMON_STATE_IDLE					0
#define SIMON_STATE_WALKING_RIGHT			100
#define SIMON_STATE_WALKING_LEFT			200
#define SIMON_STATE_JUMP					300
#define SIMON_STATE_SIT						400
#define SIMON_STATE_ATTACK					500
#define SIMON_STATE_ATTACK_ON_STAIRS		550
#define SIMON_STATE_ATTACK_SITTING			600
#define SIMON_STATE_THROW					700
#define SIMON_STATE_THROW_ON_STAIRS			750
#define SIMON_STATE_THROW_SITTING			800
#define SIMON_STATE_HURT_RIGHT				900
#define SIMON_STATE_HURT_LEFT				1000
#define SIMON_STATE_UP_RIGHT				1100
#define SIMON_STATE_UP_LEFT					1200
#define SIMON_STATE_DOWN_RIGHT				1300
#define SIMON_STATE_DOWN_LEFT				1400

#define SIMON_UNTOUCHABLE_TIME				3000

#define SIMON_ANI_IDLE_RIGHT				0
#define SIMON_ANI_IDLE_LEFT					1

#define SIMON_ANI_WALKING_RIGHT				2
#define SIMON_ANI_WALKING_LEFT				3

#define SIMON_ANI_SITTING_RIGHT				4
#define SIMON_ANI_SITTING_LEFT				5

#define SIMON_ANI_JUMPING_RIGHT				6
#define SIMON_ANI_JUMPING_LEFT				7

#define SIMON_ANI_ATTACKING_RIGHT			8
#define SIMON_ANI_ATTACKING_LEFT			9

#define SIMON_ANI_ATTACKING_RIGHT_SITTING	10
#define SIMON_ANI_ATTACKING_LEFT_SITTING	11

#define SIMON_ANI_THROW_RIGHT				12
#define SIMON_ANI_THROW_LEFT				13

#define SIMON_ANI_THROW_RIGHT_SITTING		14
#define SIMON_ANI_THROW_LEFT_SITTING		15

#define SIMON_ANI_HURT_RIGHT				16
#define SIMON_ANI_HURT_LEFT					17

#define SIMON_ANI_UP_RIGHT					18
#define SIMON_ANI_UP_LEFT					19
#define SIMON_ANI_DOWN_RIGHT				20	
#define SIMON_ANI_DOWN_LEFT					21

#define SIMON_ANI_AFK_UP_RIGHT				22
#define SIMON_ANI_AFK_UP_LEFT				23
#define SIMON_ANI_AFK_DOWN_RIGHT			24
#define SIMON_ANI_AFK_DOWN_LEFT				25	

#define SIMON_ANI_ATTACK_OS_UP_RIGHT		26
#define SIMON_ANI_ATTACK_OS_UP_LEFT         27
#define SIMON_ANI_ATTACK_OS_DOWN_RIGHT      28		
#define SIMON_ANI_ATTACK_OS_DOWN_LEFT	    29

//#define SIMON_ANI_DIE						14


#define SIMON_BIG_BBOX_WIDTH  16
#define SIMON_BIG_BBOX_HEIGHT 31

#pragma endregion





class define
{
public:
	define();
	~define();
};

