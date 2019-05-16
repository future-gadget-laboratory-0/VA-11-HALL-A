#ifndef _UNITS_H_
#define _UNITS_H_
#include "cocos2d.h"
#include "define.h"
USING_NS_CC;
class UnitsSprite :public Sprite
{
public:
	virtual bool init();
	//��������ķ��ʽӿڣ�ͨ������ʵ��������
	static UnitsSprite* getInstance();
	void setproperty(const actor_property&);
	int createdamage(const int&, const int&);
	int receivedamage(const int&, const int&);
	int consumeSTA(const int&, const int&);
	int changeproperty(const int&, const int&, const __String&);
	void Recover(const int&, const int&, const __String&);//return HP
	CREATE_FUNC(UnitsSprite);
private:
	//���캯��˽�У������Ͳ�����������������Ķ�����
	UnitsSprite();
	actor_property m_property;
	static UnitsSprite* instance;
	Sprite* m_units;
};

#endif
