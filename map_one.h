/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __MAP_ONE_H__
#define __MAP_ONE_H__

#include "cocos2d.h"
//#include "hero_Catherine.h"
#include "controller.h"
#include "tower.h""
#include "UI.h"

class MapScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
	/*void onKeyPressed(EventKeyboard::KeyCode, Event*);
	void onKeyReleased(EventKeyboard::KeyCode, Event*);*/
	void onMouseDown(Event *event);
	void onMouseUp(Event *event);
	void onMouseMove(Event *event);
	void onMouseScroll(Event *event);
/*	bool onTouchBegan(Touch* touch, Event* event);
	void onTouchMoved(Touch* touch, Event* event);
	void onTouchEnded(Touch* touch, Event* event);
	*/
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
	actor_property propertyget(int);
    // implement the "static create()" method manually
	Vec2 map_skewing=Vec2(0,0);
	void update(float);
    CREATE_FUNC(MapScene);
private:
	Spritetower* tower1 = Spritetower::getInstance();
	Spritetower* tower2 = Spritetower::getInstance();
	Spritetower* tower3 = Spritetower::getInstance();
	Spritetower* tower4 = Spritetower::getInstance();
	TMXTiledMap* _tileMap;
	void scene_move(Vec2);
	m_controller* m_control = m_controller::create();
	UI* layer = UI::createLayer();
};

#endif // __HELLOWORLD_SCENE_H__
