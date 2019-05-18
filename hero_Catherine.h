#ifndef _HERO_CATHERINE_H_
#define _HERO_CATHERINE_H_
#include "cocos2d.h"
#include "unitssprite.h"
USING_NS_CC;
class SpriteCatherine :public UnitsSprite
{
public:
	virtual bool init();
	//这个类对象的访问接口，通过它来实例化对象
	static SpriteCatherine* getInstance();
	
	CREATE_FUNC(SpriteCatherine);
private:
	//构造函数私有，这样就不可以随便声明这个类的对象了
	SpriteCatherine();
	static SpriteCatherine* instance;
	Sprite* m_hero;
};

#endif
