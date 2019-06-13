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
	void setanimation(__String, __String,int);
	void Fixed(Vec2,Vec2,int);
	void Fixed(Vec2, Vec2,int,int);
	void Followed(Sprite*, int);
	void Durable(Vec2,Vec2, int,int,int);//1 is firing 2 is laser
	void collision(Sprite*, Sprite*);//former is target ,the other is bullet
	CREATE_FUNC(BulletSprite);
	
private:
	//���캯��˽�У������Ͳ�����������������Ķ�����
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
	static BulletSprite* instance51;
	static BulletSprite* instance52;
	static BulletSprite* instance53;
	static BulletSprite* instance54;
	static BulletSprite* instance55;
	static BulletSprite* instance56;
	static BulletSprite* instance57;
	static BulletSprite* instance58;
	static BulletSprite* instance59;
	static BulletSprite* instance60;
	static BulletSprite* instance61;
	static BulletSprite* instance62;
	static BulletSprite* instance63;
	static BulletSprite* instance64;
	static BulletSprite* instance65;
	static BulletSprite* instance66;
	static BulletSprite* instance67;
	static BulletSprite* instance68;
	static BulletSprite* instance69;
	static BulletSprite* instance70;
	static BulletSprite* instance71;
	static BulletSprite* instance72;
	static BulletSprite* instance73;
	static BulletSprite* instance74;
	static BulletSprite* instance75;
	static BulletSprite* instance76;
	static BulletSprite* instance77;
	static BulletSprite* instance78;
	static BulletSprite* instance79;
	static BulletSprite* instance80;
	static BulletSprite* instance81;
	static BulletSprite* instance82;
	static BulletSprite* instance83;
	static BulletSprite* instance84;
	static BulletSprite* instance85;
	static BulletSprite* instance86;
	static BulletSprite* instance87;
	static BulletSprite* instance88;
	static BulletSprite* instance89;
	static BulletSprite* instance90;
	static BulletSprite* instance91;
	static BulletSprite* instance92;
	static BulletSprite* instance93;
	static BulletSprite* instance94;
	static BulletSprite* instance95;
	static BulletSprite* instance96;
	static BulletSprite* instance97;
	static BulletSprite* instance98;
	static BulletSprite* instance99;
	static BulletSprite* instance100;
	CCActionManager* actionManager = CCDirector::sharedDirector()->getActionManager();
//	Sprite* m_bullet;
	Animate* animate;
	Animate* animate_one;

};

#endif

