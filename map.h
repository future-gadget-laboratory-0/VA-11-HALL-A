#pragma once
#ifndef __MAP_H__
#define __MAP_H__

#include "cocos2d.h"
#include "controller.h"
USING_NS_CC;
class map : public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();
	cocos2d::TMXTiledMap *_tileMap;
	cocos2d::TMXLayer *_background;
	cocos2d::Sprite*_player;
	cocos2d::Sprite*_shuijing;
	cocos2d::TMXLayer*_meta;
	virtual bool init();
	virtual bool onTouchBegan(Touch *touch, Event *unused_event);
	void menuCloseCallback(cocos2d::Ref* pSender);
	// implement the "static create()" method manually
	CREATE_FUNC(map);
private:
	m_controller* m_control = m_controller::create();
};

#endif // __MAP_H__