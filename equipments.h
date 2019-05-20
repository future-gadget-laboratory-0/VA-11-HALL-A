#ifndef _EQUIPMENTS_H_
#define _EQUIPMENTS_H_
#include "cocos2d.h"
#include <map>
#include <string>
USING_NS_CC;
class EquipSprite :public Sprite
{
public:
	virtual bool init();
	//这个类对象的访问接口，通过它来实例化对象
	static EquipSprite* getInstance();
	CREATE_FUNC(EquipSprite);
private:
	//构造函数私有，这样就不可以随便声明这个类的对象了
	EquipSprite();
	//声明一个静态对象，也是这个类唯一的对象
	static EquipSprite* instance;
	std::map<std::string,int> m_equipments;
};

#endif