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
	void Fixed(Vec2,Vec2,int);
	void Fixed(Vec2, Vec2,int,int);
	void Followed(int, int);
	CREATE_FUNC(BulletSprite);
	
private:
	//构造函数私有，这样就不可以随便声明这个类的对象了
	BulletSprite();
	static BulletSprite* instance;
	CCActionManager* actionManager = CCDirector::sharedDirector()->getActionManager();
	Sprite* m_bullet;
	Animate* animate;
	Animate* animate_one;

};

#endif

