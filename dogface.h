#ifndef _DOGFACE_H_
#define _DOGFACE_H_
#include "cocos2d.h"
#include "unitssprite.h"
#include "bullets.h"
//#include "anima.h"
USING_NS_CC;
class Spritedogface :public UnitsSprite
{
public:
	virtual bool init();
	//这个类对象的访问接口，通过它来实例化对象
	static Spritedogface * create(const char *pszFileName);
	static Spritedogface *createWithSpriteFrameName(const char *pszFileName);
	static Spritedogface* getInstance();
	//void setPosition(Vec2);
	void setkind(int);
	void setbody(int, int, int);
	CREATE_FUNC(Spritedogface);
	Vec2 pos;
	Vec2 old_pos = Point(-100, -100);
	Vec2 mouse_pos;
	int m_tag = 0;
	void move(float);
	void normal_attack(float);
	void death(float);
	BulletSprite* bulletmaking(int);
	UnitsSprite* target;
	bool attackable = true;
	bool movable = true;
	bool Inrange(int kind);
	void self_strengthen(int, int, __String);
	void self_strengthen(int, int, __String, int, __String);
	void self_strengthen(int, int, __String, int, __String, int, __String);
	void self_strengthen(int, int, __String, int, __String, int, __String, int, __String);

private:
	//构造函数私有，这样就不可以随便声明这个类的对象了
	Spritedogface();
	Vec2 pos_should;
	ProgressTimer * Hp_progress;
	bool death_judge = false;
	static Spritedogface* instance1;
	static Spritedogface* instance2;
	static Spritedogface* instance3;
	static Spritedogface* instance4;
	static Spritedogface* instance5;
	static Spritedogface* instance6;
	static Spritedogface* instance7;
	static Spritedogface* instance8;
	static Spritedogface* instance9;
	static Spritedogface* instance10;
	CCActionManager* actionManager = CCDirector::sharedDirector()->getActionManager();
	//Sprite* m_hero;
	Animate* animate;
	Animate* animate_one;
	PhysicsBody* CaBody;
	int move_judge = 0;
	Vec2 touch_pos;
	bool touch_judge = 0;
	float stop_judge = 0;//0 is down;1 is doing move execute;other the time of stand excute
	void property_refresh(float);
	void revive(float);
	void restore(float);
	
	void levelup(float);
	void strengthen(float);
	int strength_property_st_num = 0;
	int strength_property_nd_num = 0;
	int strength_property_rd_num = 0;
	int strength_property_th_num = 0;
	__String strength_property_st = "";
	__String strength_property_nd = "";
	__String strength_property_rd = "";
	__String strength_property_th = "";
	bool instrengthen = 0;
	void doattack(float);
	
	Vec2 attack_pos = Vec2(0, 0);
	Sprite* HP_bar;
	BulletSprite* bullet0 = BulletSprite::getInstance();
	BulletSprite* bullet1 = BulletSprite::getInstance();
	BulletSprite* bullet2 = BulletSprite::getInstance();
	BulletSprite* bullet3 = BulletSprite::getInstance();
	//BulletSprite* bullett = BulletSprite::getInstance();
//	void skill(Ref* pSender);
};

#endif

