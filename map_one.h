#ifndef __MAP_ONE_H__
#define __MAP_ONE_H__

#include "cocos2d.h"
#include "controller.h"
#include "tower.h""
#include "UI.h"
#include "storeLayer.h"

class MapScene : public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene(int id1,int id2);

	virtual bool init();
	void onMouseDown(Event *event);
	void onMouseUp(Event *event);
	void onMouseMove(Event *event);
	void onMouseScroll(Event *event);
	void menuCloseCallback(cocos2d::Ref* pSender);
	actor_property propertyget(int);
	Vec2 map_skewing = Vec2(0, 0);
	void update(float);
	void victory_judge(float);
	void gold_get(float);
	void level_get(float);
	void kda_get(float);
	void purchase(float);
	int purchase_key;
	int bought1;
	int bought2;
	int bought3;
	int bought4;
	int bought5;
	int bought6;
	int bought7;
	int bought8;
	int level;
	int gold;
	int kills;
	int deaths;
	int player1_mia;
	int player2_mia;
	int doge1_mia;
	int doge2_mia;
	int doge3_mia;
	int monster_mia;
	void open_store(cocos2d::Ref* pSender);
	void close_store(cocos2d::Ref* pSender);
	
	m_controller* m_control = m_controller::create();
	CREATE_FUNC(MapScene);
private:
	Spritetower* tower1 = Spritetower::getInstance();
	Spritetower* tower2 = Spritetower::getInstance();
	Spritetower* tower3 = Spritetower::getInstance();
	Spritetower* tower4 = Spritetower::getInstance();
	TMXTiledMap* _tileMap;
	void scene_move(Vec2);
	UI* layer = UI::createLayer();
	StoreLayer* storeLayer=NULL;
		//= StoreLayer::createLayer();
	Label* pGoldTTF;
	Label* pKillsTTF;
	Label* pDeathsTTF;
	Label* pLevelTTF;
	Menu* close;
	Menu* open;
	MenuItemImage* closeStore;
	Sprite* another_sprite;
};

#endif 
