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
	//这个类对象的访问接口，通过它来实例化对象
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
	//float isexecute(int);//if int ==1, spell_judge=1,==0,=0,else won't change anything
	//void reexecute();
private:
	//构造函数私有，这样就不可以随便声明这个类的对象了
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
	float stop_judge = 0;//0 is down;1 is doing move execute;other the time of stand excute
	
	void shock(float);
	void shock_remove(float);
	void revive(float);
	//functionstate
	bool state_estimation(int,int,int);
	//functionshake
	//bool executeshake=0;
	bool Back_shake();
	void Bs_reset(float);
	float spell_judge = 0;
	//functionspell
	bool Spell_cooldown();
	void Sc_reset1(float);
	void Sc_reset2(float);
	void Sc_reset3(float);
	void Sc_reset4(float);
	int cooldowning1=0;
	int cooldowning2 = 0;
	int cooldowning3 = 0;
	int cooldowning4 = 0;
	int cooldowning_compare = 0;
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
