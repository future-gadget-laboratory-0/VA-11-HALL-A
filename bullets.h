#ifndef _BULLETS_H_
#define _BULLETS_H_

#include "cocos2d.h"
#include "unitssprite.h"
#include "anima.h"
USING_NS_CC;
class BulletSprite :public UnitsSprite
{
public:
	virtual bool init();
	//这个类对象的访问接口，通过它来实例化对象
	static BulletSprite* getInstance();
	void setanimation(__String,__String);
	void setanimation(__String, __String,int);
	void Fixed(Vec2,Vec2,int);
	void Fixed(Vec2, Vec2,int,int);
	void Followed(Sprite*, int);
	void Durable(Vec2,Vec2, int,int,int);//1 is firing 2 is laser
	void collision(Sprite*, Sprite*);//former is target ,the other is bullet
	CREATE_FUNC(BulletSprite);
	
private:
	//构造函数私有，这样就不可以随便声明这个类的对象了
	BulletSprite();
	void bulletclear(float);
	void Followed(float);
	Sprite* m_target=NULL;

	int m_sped=bulletspeed;
	Vec2 old_pos=Vec2(-100,-100);
	//static Vector<BulletSprite*> instancev;
	static BulletSprite* instance;
	static BulletSprite* instance1;
	static BulletSprite* instance2;
	static BulletSprite* instance3;
	static BulletSprite* instance4;
	static BulletSprite* instance5;
	static BulletSprite* instance6;
	static BulletSprite* instance7;
	static BulletSprite* instance8;
	static BulletSprite* instance9;
	static BulletSprite* instance10;
	static BulletSprite* instance11;
	static BulletSprite* instance12;
	static BulletSprite* instance13;
	static BulletSprite* instance14;
	static BulletSprite* instance15;
	static BulletSprite* instance16;
	static BulletSprite* instance17;
	static BulletSprite* instance18;
	static BulletSprite* instance19;
	static BulletSprite* instance20;
	static BulletSprite* instance21;
	static BulletSprite* instance22;
	static BulletSprite* instance23;
	static BulletSprite* instance24;
	static BulletSprite* instance25;
	static BulletSprite* instance26;
	static BulletSprite* instance27;
	static BulletSprite* instance28;
	static BulletSprite* instance29;
	static BulletSprite* instance30;
	static BulletSprite* instance31;
	static BulletSprite* instance32;
	static BulletSprite* instance33;
	static BulletSprite* instance34;
	static BulletSprite* instance35;
	static BulletSprite* instance36;
	static BulletSprite* instance37;
	static BulletSprite* instance38;
	static BulletSprite* instance39;
	static BulletSprite* instance40;
	static BulletSprite* instance41;
	static BulletSprite* instance42;
	static BulletSprite* instance43;
	static BulletSprite* instance44;
	static BulletSprite* instance45;
	static BulletSprite* instance46;
	static BulletSprite* instance47;
	static BulletSprite* instance48;
	static BulletSprite* instance49;
	static BulletSprite* instance50;
	CCActionManager* actionManager = CCDirector::sharedDirector()->getActionManager();
//	Sprite* m_bullet;
	Animate* animate;
	Animate* animate_one;

};

#endif

