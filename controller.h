#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_
#include "cocos2d.h"
#include "hero_Catherine.h"
#include "hero_nighttide.h"
#include "hero_Raider.h"
#include "hero_Pecola.h"
#include "dogface.h"
#include "tower.h"
#include <memory>

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
	bool onContactSeparate(PhysicsContact& contact);
	Vec2 getmouseloc();
	void setscale(float);
	actor_property getproperty(int);
	void chose_character(int, int);
	Spritetower* monster = Spritetower::getInstance();
	Vec2 map_skewing;
	std::map<std::string,int> hero_choices;
	int gettag(__String);
	CREATE_FUNC(m_controller);
	bool player2_AI = true;
	std::shared_ptr<int> ptra;
protected:
	m_controller();
	static m_controller* instance;
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
	bool PreventRepeated();
	bool sptime=0;
	bool execute = 0;
	Spritedogface* dogface1 = NULL;
	Spritedogface* dogface2 = NULL;
	Spritedogface* dogface3 = NULL;
	Spritedogface* dogface4 = NULL;
	Spritedogface* dogface5 = NULL;
	Spritedogface* dogface6 = NULL;
	Vec2 BT_pos= Vec2(1800, 500);
	Vec2 BC_pos = Vec2(2400, 500);
	Vec2 RT_pos = Vec2(1100, 500);
	Vec2 RC_pos = Vec2(500, 500);
	bool BT_DES = false;
	bool BC_DES = false;
	bool RT_DES = false;
	bool RC_DES = false;
	Sprite* mouse_sprite = Sprite::create("mouse.png");
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
};

#endif