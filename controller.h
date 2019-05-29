#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_
#include "cocos2d.h"
#include "hero_Catherine.h"

USING_NS_CC;
class m_controller:public Sprite
{
public:
	virtual bool init();
	//��������ķ��ʽӿڣ�ͨ������ʵ��������
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
	CREATE_FUNC(m_controller);
protected:
	//���캯��˽�У������Ͳ�����������������Ķ�����
	m_controller();
	static m_controller* instance;
	//SpriteCatherine* Catherine = SpriteCatherine::createWithSpriteFrameName("snow0_0.png");
	SpriteCatherine* Catherine = SpriteCatherine::getInstance();
	//auto Catherine = SpriteCatherine::createWithSpriteFrameName("snow0_0.png");
	//SpriteCatherine* Catherine = SpriteCatherine::create();
	Sprite* mouse_sprite = Sprite::create("mouse.png");
	//SpriteCatherine* Catherine_test = SpriteCatherine::create();
	//Vector<int> SPS;//store Sprites's tag;
	int m_STag;
	//void lockon();
};

#endif