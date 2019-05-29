#ifndef _HERO_CATHERINE_H_
#define _HERO_CATHERINE_H_
#include "cocos2d.h"
#include "unitssprite.h"
#include "bullets.h"
//#include "anima.h"
USING_NS_CC;
class SpriteCatherine :public UnitsSprite
{
public:
	virtual bool init();
	//��������ķ��ʽӿڣ�ͨ������ʵ��������
	static SpriteCatherine * create(const char *pszFileName);
	static SpriteCatherine *createWithSpriteFrameName(const char *pszFileName);
	static SpriteCatherine* getInstance();
	//void setPosition(Vec2);
	void settag(int);
	void setbody(int,int,int);
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
	void death(float);
private:
	//���캯��˽�У������Ͳ�����������������Ķ�����
	SpriteCatherine();
	static SpriteCatherine* instance;
	CCActionManager* actionManager = CCDirector::sharedDirector()->getActionManager();
	//Sprite* m_hero;
	Animate* animate;
	Animate* animate_one;
	PhysicsBody* CaBody;
	int move_judge=0;
	Vec2 touch_pos;
	bool touch_judge = 0;
	bool stop_judge = 0;
	void shock(float);
	void shock_remove(float);
	void revive(float);
/*	BulletSprite* bullet0 = BulletSprite::create();
	BulletSprite* bullet1 = BulletSprite::create();
	BulletSprite* bullet2 = BulletSprite::create();
	BulletSprite* bullet3 = BulletSprite::create();
	BulletSprite* bullet4 = BulletSprite::create();
	BulletSprite* bullet5 = BulletSprite::create();*/
	BulletSprite* bullet0 = BulletSprite::getInstance();
//	void skill(Ref* pSender);
};

#endif
