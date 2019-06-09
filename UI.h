#pragma once
#ifndef _UI_H_
#define _UI_H_

#include "cocos2d.h"

class UI : public cocos2d::Layer
{
public:
	UI();
	~UI();

	virtual bool init();
	CREATE_FUNC(UI);

	static UI* createLayer();
	void scheduleBlood();
	void giveHealth(int num);
	void giveMaxHealth(int num);
private:
	int health=0;
	int Maxhealth = 0;

};

#endif // _UI_H_