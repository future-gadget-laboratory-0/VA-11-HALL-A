#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_
#include "cocos2d.h"
#include "hero_Catherine.h"
#include "hero_nighttide.h"
#include "hero_Raider.h"
#include "hero_Pecola.h"
#include "dogface.h"
#include "tower.h"

USING_NS_CC;
class m_controller:public Sprite
{
public:
	virtual bool init();
	//这个类对象的访问接口，通过它来实例化对象
	static m_controller* getInstance();
	void onKeyPressed(EventKeyboard::KeyCode, Event*);
	void onKeyReleased(EventKeyboard::KeyCode, Event*);
	void onMouseDown(Event *event);
	void onMouseUp(Event *event);
	void onMouseMove(Event *event);
	void onMouseScroll(Event *event);
	bool onTouchBegan(Touch* touch, Event* event);
	void onTouchMoved(Touch* touch, Event* event);
	void onTouchEnded(Touch* touch, Event* event);
	bool onContactBegin(PhysicsContact& contact);
	//bool onContactPreSolve(PhysicsContact& contact, PhysicsContactPreSolve& solve);
	bool onContactSeparate(PhysicsContact& contact);
	Vec2 getmouseloc();
	void setscale(float);//change character size;
	actor_property getproperty(int);
	//auto chose_character(int,int);
	void chose_character(int, int);
	Vec2 map_skewing;
	std::map<std::string,int> hero_choices;
	int gettag(__String);
	CREATE_FUNC(m_controller);
	bool player2_AI = true;
protected:
	//构造函数私有，这样就不可以随便声明这个类的对象了
	m_controller();
	static m_controller* instance;
	//Sprite*m_sprite = NULL;
	void reexecute(float);
	void m_ai(float);
	void tower_attack(float);
	UnitsSprite* red_tower_target = NULL;
	UnitsSprite* old_red_tower_target=NULL;
	UnitsSprite* blue_tower_target= NULL;
	UnitsSprite* old_blue_tower_target = NULL;
	bool inattackrange(Vec2,int);
	bool inmoverange(Vec2);
	void ai_attack(float);
	bool ai_safe();
	void ai_normalattak();
	bool ai_getmoney(Vec2);
	bool ai_getmoney(Vec2,int,int);
	bool attackable=true;
	bool PreventRepeated();//is revising
	bool sptime=0;//is revising
	bool execute = 0;//is revising
	//SpriteCatherine* Catherine = SpriteCatherine::createWithSpriteFrameName("snow0_0.png");
	//SpriteCatherine* Catherine = SpriteCatherine::getInstance();

	Spritedogface* dogface1 = NULL;
	Spritedogface* dogface2 = NULL;
	Spritedogface* dogface3 = NULL;
	Spritedogface* dogface4 = NULL;
	Spritedogface* dogface5 = NULL;
	Spritedogface* dogface6 = NULL;




	/*
	SpriteCatherine* Catherine = NULL;
	SpriteCatherine* Catherine2 = NULL;
	SpriteCatherine* Catherine3 = NULL;
	SpriteCatherine* Catherine4 = NULL;
	SpriteCatherine* Catherine5 = NULL;
	SpriteCatherine* Catherine6 = NULL;
	SpriteCatherine* Catherine7 = NULL;
	SpriteCatherine* Catherine8 = NULL;
	SpriteCatherine* Catherine9 = NULL;
	SpriteCatherine* Catherine10 = NULL;
	SpriteNighttide* Nighttide1 = NULL;
	SpriteNighttide* Nighttide2 = NULL;
	SpriteNighttide* Nighttide3 = NULL;
	SpriteNighttide* Nighttide4 = NULL;
	SpriteNighttide* Nighttide5 = NULL;
	SpriteNighttide* Nighttide6 = NULL;
	SpriteNighttide* Nighttide7 = NULL;
	SpriteNighttide* Nighttide8 = NULL;
	SpriteNighttide* Nighttide9 = NULL;
	SpriteNighttide* Nighttide10 = NULL;*/
	
	Vec2 BT_pos= Vec2(1800, 500);
	Vec2 BC_pos = Vec2(2400, 500);
	Vec2 RT_pos = Vec2(1100, 500);
	Vec2 RC_pos = Vec2(500, 500);
	bool BT_DES = false;
	bool BC_DES = false;
	bool RT_DES = false;
	bool RC_DES = false;
	Sprite* mouse_sprite = Sprite::create("mouse.png");
	//SpriteCatherine* Catherine_test = SpriteCatherine::create();
	//Vector<int> SPS;//store Sprites's tag;
	int m_lockTag=0;
	int m_lockTag_now=0;
	int player1_tag;
	int player2_tag;
	int player3_tag;
	int player4_tag;
	int player5_tag;
	int player6_tag;
	int player7_tag;
	int player8_tag;
	int player9_tag;
	int player10_tag;
	//int player = 1; 
	//int character=1;
	//void lockon();
};

#endif