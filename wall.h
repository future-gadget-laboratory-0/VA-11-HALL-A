#ifndef _WALL_H_
#define _WALL_H_
#include "cocos2d.h"
#include "unitssprite.h"
#include "bullets.h"
//#include "anima.h"
USING_NS_CC;
class SpriteWall :public UnitsSprite
{
public:
	virtual bool init();
	//这个类对象的访问接口，通过它来实例化对象
	static SpriteWall * create(const char *pszFileName);
	static SpriteWall *createWithSpriteFrameName(const char *pszFileName);
	static SpriteWall* getInstance();
	//void setPosition(Vec2);
	void settag(int);
	void setbody(int, int, int);
	
	void SpriteWall::collopse_time(float time);
	CREATE_FUNC(SpriteWall);
	UnitsSprite* target;
	//float isexecute(int);//if int ==1, spell_judge=1,==0,=0,else won't change anything
	//void reexecute();
private:
	//构造函数私有，这样就不可以随便声明这个类的对象了
	SpriteWall();
	Vec2 pos_should;
	ProgressTimer * Hp_progress;
	bool death_judge = false;
	void collopse(float);
	static SpriteWall* instance1;
	static SpriteWall* instance2;
	static SpriteWall* instance3;
	static SpriteWall* instance4;
	static SpriteWall* instance5;
	//Sprite* m_hero;
	PhysicsBody* CaBody;
	int move_judge = 0;
	Vec2 touch_pos;
	bool touch_judge = 0;
	float stop_judge = 0;//0 is down;1 is doing move execute;other the time of stand excute
	void property_refresh(float);
	void restore(float);
	Sprite* HP_bar;
	Sprite* MP_bar;
};

#endif
