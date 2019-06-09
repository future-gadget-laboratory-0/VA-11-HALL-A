#ifndef _HERO_NIGHTTIDE_H_
#define _HERO_NIGHTTIDE_H_
#include "cocos2d.h"
#include "unitssprite.h"
#include "bullets.h"
//#include "anima.h"
USING_NS_CC;
class SpriteNighttide :public UnitsSprite
{
public:
	virtual bool init();
	//��������ķ��ʽӿڣ�ͨ������ʵ��������
	static SpriteNighttide* getInstance();
	void move_lf();
	void move_rf();
	void move_rb();
	void move_lb();
	void stop_lf();
	void stop_rf();
	void stop_rb();
	void stop_lb();
	CREATE_FUNC(SpriteNighttide);
	Vec2 pos;
	Vec2 old_pos = Point(-100, -100);
	Vec2 mouse_pos;
	void move(float);
	void skillst();
	void skillnd();
	void skillrd();
	void skillth();
	void skillst(float);
	void skillnd(float);
	void skillrd(float);
	void skillth(float);

private:
	//���캯��˽�У������Ͳ�����������������Ķ�����
	SpriteNighttide();
	static SpriteNighttide* instance;
	CCActionManager* actionManager = CCDirector::sharedDirector()->getActionManager();
	Sprite* m_hero;
	Animate* animate;
	Animate* animate_one;
	int move_judge = 0;
	Vec2 touch_pos;
	bool touch_judge = 0;
	bool stop_judge = 0;
	void shock(float);
	void shock_remove(float);
	BulletSprite* bullet0 = BulletSprite::create();
	//	void skill(Ref* pSender);
};

#endif
