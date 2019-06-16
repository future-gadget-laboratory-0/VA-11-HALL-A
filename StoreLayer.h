#pragma once
#ifndef _STORELAYER_H
#define _STORELAYER_H

#include "cocos2d.h"

class StoreLayer : public cocos2d::Layer
{
public:
	StoreLayer();
	~StoreLayer();
public:
	virtual bool init();
	CREATE_FUNC(StoreLayer);
public:
	static cocos2d::Scene* createScene();
};

#endif // _GAMELAYER_H