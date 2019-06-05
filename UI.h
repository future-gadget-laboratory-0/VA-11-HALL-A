#pragma once
#ifndef _UI_H
#define _UI_H

#include "cocos2d.h"

class UI : public cocos2d::Layer
{
public:
	UI();
	~UI();
public:
	virtual bool init();
	CREATE_FUNC(UI);
public:
	static cocos2d::Scene* createScene();
	void scheduleBlood(float dt);
private:
	int health;
};

#endif // _UI_H