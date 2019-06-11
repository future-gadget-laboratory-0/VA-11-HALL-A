#ifndef _TOWER_H_
#define _TOWER_H_
#include "cocos2d.h"
#include "unitssprite.h"
#include "bullets.h"
//#include "anima.h"
USING_NS_CC;
class Spritetower :public UnitsSprite
{
public:
	virtual bool init();
	//这个类对象的访问接口，通过它来实例化对象
	static Spritetower *create(const char *pszFileName);
	static Spritetower *createWithSpriteFrameName(const char *pszFileName);
	static Spritetower *getInstance();
	//void setPosition(Vec2);
	void settag(int);
	void setbody(int, int, int);
	CREATE_FUNC(Spritetower);
	Vec2 mouse_pos;
	int m_tag = 0;
	void normal_attack(float);
	void death(float);
	BulletSprite* bulletmaking(int);
	UnitsSprite* target;
	bool Inrange(int kind);
	void self_strengthen(int, int, __String);
	void self_strengthen(int, int, __String, int, __String);
	void self_strengthen(int, int, __String, int, __String, int, __String);
	void self_strengthen(int, int, __String, int, __String, int, __String, int, __String);
	Sprite* HP_bar;
	ProgressTimer * Hp_progress;
private:
	Spritetower();
	
	bool death_judge = false;
	static Spritetower* instance1;
	static Spritetower* instance2;
	static Spritetower* instance3;
	static Spritetower* instance4;
	static Spritetower* instance5;
	static Spritetower* instance6;
	static Spritetower* instance7;
	static Spritetower* instance8;
	static Spritetower* instance9;
	static Spritetower* instance10;
	static Spritetower* instance11;
	static Spritetower* instance12;
	static Spritetower* instance13;
	static Spritetower* instance14;
	PhysicsBody* CaBody;
	void property_refresh(float);
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
	int normal_attacked = 0;
	Vec2 attack_pos = Vec2(0, 0);
	
	BulletSprite* bullet0 = BulletSprite::getInstance();
	BulletSprite* bullet1 = BulletSprite::getInstance();
	BulletSprite* bullet2 = BulletSprite::getInstance();
	BulletSprite* bullet3 = BulletSprite::getInstance();
	BulletSprite* bullet4 = BulletSprite::getInstance();
	BulletSprite* bullet5 = BulletSprite::getInstance();
};

#endif
