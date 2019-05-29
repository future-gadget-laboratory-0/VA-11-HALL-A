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
	//��������ķ��ʽӿڣ�ͨ������ʵ��������
	static BulletSprite* getInstance();
	void setanimation(__String,__String);
	void Fixed(Vec2,Vec2,int);
	void Fixed(Vec2, Vec2,int,int);
	void Followed(Sprite*, int);
	void collision(Sprite*, Sprite*);//former is target ,the other is bullet
	CREATE_FUNC(BulletSprite);
	
private:
	//���캯��˽�У������Ͳ�����������������Ķ�����
	BulletSprite();
	static BulletSprite* instance;
	CCActionManager* actionManager = CCDirector::sharedDirector()->getActionManager();
//	Sprite* m_bullet;
	Animate* animate;
	Animate* animate_one;

};

#endif

