#ifndef _UNITS_H_
#define _UNITS_H_
#include "cocos2d.h"
#include "define.h"
USING_NS_CC;
class UnitsSprite :public Sprite
{
public:
	virtual bool init();
	//这个类对象的访问接口，通过它来实例化对象
	static UnitsSprite* getInstance();
	void setproperty(const actor_property&);
	int createdamage(const int&, const int&);
	int receivedamage(const int&, const int&);
	int consumeSTA(const int&, const int&);
	int changeproperty(const int&, const int&, const __String&);
	void Recover(const int&, const int&, const __String&);//return HP
	CREATE_FUNC(UnitsSprite);
private:
	//构造函数私有，这样就不可以随便声明这个类的对象了
	UnitsSprite();
	actor_property m_property;
	static UnitsSprite* instance;
	Sprite* m_units;
};

#endif
