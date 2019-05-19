#ifndef _UNITS_H_
#define _UNITS_H_
#include "cocos2d.h"
#include "define.h"
#include <string>
USING_NS_CC;
class UnitsSprite :public Sprite
{
public:
	virtual bool init();
	//��������ķ��ʽӿڣ�ͨ������ʵ��������
	static UnitsSprite* getInstance();
	bool setproperty(const actor_property&);
	bool bpdamage();
	bool evadamage(const int&);//if is physical(1),if is magical(1),,if is holy(2)
	int createdamage(const int&,const int&);//if is physical(1),if is magical(1),,if is holy(2),the second means the MP you cost
	int createdamage(const int&);//if is physical(1),if is magical(1),,if is holy(2)
	int receivedamage(const int&,const int&, const int&, const int&);//if is magical(0),if is physical(1),if is true(2),
	int receivedamage(const int&, const int&, const int&);//if is magical(0),if is physical(1),if is true(2),
	int consumeSTA(const int&);
	bool changeproperty(const int&, const __String&);
	void Recover(const int&, const int&, const __String&);//return HP

	CREATE_FUNC(UnitsSprite);
protected:
	//���캯��˽�У������Ͳ�����������������Ķ�����
	UnitsSprite();
	actor_property m_property;
	static UnitsSprite* instance;
};

#endif