#ifndef _HERO_CATHERINE_H_
#define _HERO_CATHERINE_H_
#include "cocos2d.h"
#include "unitssprite.h"
USING_NS_CC;
class SpriteCatherine :public UnitsSprite
{
public:
	virtual bool init();
	//��������ķ��ʽӿڣ�ͨ������ʵ��������
	static SpriteCatherine* getInstance();
	
	CREATE_FUNC(SpriteCatherine);
private:
	//���캯��˽�У������Ͳ�����������������Ķ�����
	SpriteCatherine();
	static SpriteCatherine* instance;
	Sprite* m_hero;
};

#endif
