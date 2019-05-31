#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_
#include "cocos2d.h"
#include "hero_Catherine.h"

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
	void chose_character(int,int);
	CREATE_FUNC(m_controller);
protected:
	//构造函数私有，这样就不可以随便声明这个类的对象了
	m_controller();
	static m_controller* instance;
	void reexecute(float);
	bool PreventRepeated();//is revising
	bool sptime=0;//is revising
	bool execute = 0;//is revising
	//SpriteCatherine* Catherine = SpriteCatherine::createWithSpriteFrameName("snow0_0.png");
	SpriteCatherine* Catherine = SpriteCatherine::getInstance();
	//SpriteCatherine* Playerone = SpriteCatherine::getInstance();
	//SpriteCatherine* Catherine_two = SpriteCatherine::getInstance();
	//SpriteCatherine* Catherine_two = SpriteCatherine::createWithSpriteFrameName("snow10_0.png");
	//SpriteCatherine* Catherine_two = SpriteCatherine::create();
	Sprite* mouse_sprite = Sprite::create("mouse.png");
	//SpriteCatherine* Catherine_test = SpriteCatherine::create();
	//Vector<int> SPS;//store Sprites's tag;
	//int m_STag;
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