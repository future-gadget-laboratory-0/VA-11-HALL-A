#ifndef _HERO_CATHERINE_H_
#define _HERO_CATHERINE_H_
#include "cocos2d.h"
#include "unitssprite.h"
USING_NS_CC;
class SpriteCatherine :public UnitsSprite
{
public:
	virtual bool init();
	//��������ķ��ʽӿڣ�ͨ������ʵ��������
	static SpriteCatherine* getInstance();
	void move_lf();
	void move_rf();
	void move_rb();
	void move_lb();
	void stop_lf();
	void stop_rf();
	void stop_rb();
	void stop_lb();
	CREATE_FUNC(SpriteCatherine);
	Vec2 pos;
	Vec2 old_pos=Point(-100,-100);
	void move(float);
private:
	//���캯��˽�У������Ͳ�����������������Ķ�����
	SpriteCatherine();
	static SpriteCatherine* instance;
	CCActionManager* actionManager = CCDirector::sharedDirector()->getActionManager();
	Sprite* m_hero;
	Animate* animate;
};

#endif
