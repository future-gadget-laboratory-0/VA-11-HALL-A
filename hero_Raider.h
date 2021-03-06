#ifndef _HERO_RAIDER_H_
#define _HERO_RAIDER_H_
#include "cocos2d.h"
#include "unitssprite.h"
#include "bullets.h"
//#include "anima.h"
USING_NS_CC;
class SpriteRaider :public UnitsSprite
{
public:
	virtual bool init();
	//这个类对象的访问接口，通过它来实例化对象
	static SpriteRaider * create(const char *pszFileName);
	static SpriteRaider *createWithSpriteFrameName(const char *pszFileName);
	static SpriteRaider* getInstance();
	//void setPosition(Vec2);
	void settag(int);
	void setbody(int, int, int);
	void move_lf();
	void move_rf();
	void move_rb();
	void move_lb();
	void stop_lf();
	void stop_rf();
	void stop_rb();
	void stop_lb();
	CREATE_FUNC(SpriteRaider);
	Vec2 pos;
	Vec2 old_pos = Point(-100, -100);
	Vec2 mouse_pos;
	int m_tag = 0;
	void move(float);
	void skillst();
	void skillnd();
	void skillrd();
	void skillth(Sprite*);
	void skillst(float);
	void skillnd(float);
	void skillrd(float);
	void skillth(float);
	void normal_attack(float);
	void death(float);
	BulletSprite* bulletmaking(int);
	UnitsSprite* target;
	bool Inrange(int kind);
	void self_strengthen(int, int, __String);
	void self_strengthen(int, int, __String, int, __String);
	void self_strengthen(int, int, __String, int, __String, int, __String);
	void self_strengthen(int, int, __String, int, __String, int, __String, int, __String);
	int skill_check();
	//float isexecute(int);//if int ==1, spell_judge=1,==0,=0,else won't change anything
	//void reexecute();
private:
	//构造函数私有，这样就不可以随便声明这个类的对象了
	SpriteRaider();
	Vec2 pos_should;
	ProgressTimer * Hp_progress;
	ProgressTimer * Mp_progress;
	bool death_judge = false;
	static SpriteRaider* instance1;
	static SpriteRaider* instance2;
	static SpriteRaider* instance3;
	static SpriteRaider* instance4;
	static SpriteRaider* instance5;
	static SpriteRaider* instance6;
	static SpriteRaider* instance7;
	static SpriteRaider* instance8;
	static SpriteRaider* instance9;
	static SpriteRaider* instance10;
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
	void shock(float);
	void shock_remove(float);
	bool shock_judge = false;
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
	//functionstate
	bool state_estimation(int, int, int);
	//functionshake
	//bool executeshake=0;
	bool Back_shake();
	void Bs_reset(float);
	float spell_judge = 0;
	//functionspell
	bool Spell_cooldown();
	bool Mana_cost(int);
	void Sc_reset1(float);
	void Sc_reset2(float);
	void Sc_reset3(float);
	void Sc_reset4(float);
	void doattack(float);
	int cooldowning1 = 0;
	int cooldowning2 = 0;
	int cooldowning3 = 0;
	int cooldowning4 = 0;
	//	int cooldowning5 = 0;
	int cooldowning_compare = 0;
	int normal_attacked = 0;
	Vec2 attack_pos = Vec2(0, 0);
	Sprite* HP_bar;
	Sprite* MP_bar;
	/*	BulletSprite* bullet0 = BulletSprite::create();
		BulletSprite* bullet1 = BulletSprite::create();
		BulletSprite* bullet2 = BulletSprite::create();
		BulletSprite* bullet3 = BulletSprite::create();
		BulletSprite* bullet4 = BulletSprite::create();
		BulletSprite* bullet5 = BulletSprite::create();*/
	BulletSprite* bullet0 = BulletSprite::getInstance();
	BulletSprite* bullet1 = BulletSprite::getInstance();
	BulletSprite* bullet2 = BulletSprite::getInstance();
	BulletSprite* bullet3 = BulletSprite::getInstance();
	BulletSprite* bullet4 = BulletSprite::getInstance();
	BulletSprite* bullet5 = BulletSprite::getInstance();
	BulletSprite* bullet6 = BulletSprite::getInstance();
	BulletSprite* bullet7 = BulletSprite::getInstance();
	BulletSprite* bullet8 = BulletSprite::getInstance();
	BulletSprite* bullet9 = BulletSprite::getInstance();
	//BulletSprite* bullett = BulletSprite::getInstance();
//	void skill(Ref* pSender);
};

#endif
