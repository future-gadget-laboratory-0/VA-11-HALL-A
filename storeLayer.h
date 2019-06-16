#pragma once
#ifndef _STORELAYER_H
#define _STORELAYER_H

#include "cocos2d.h"

class StoreLayer : public cocos2d::Layer
{
public:
	StoreLayer();
	~StoreLayer();
	void item1(cocos2d::Ref* pSender);
	void item2(cocos2d::Ref* pSender);
	void item3(cocos2d::Ref* pSender);
	void item4(cocos2d::Ref* pSender);
	void item5(cocos2d::Ref* pSender);
	void item6(cocos2d::Ref* pSender);
	void item7(cocos2d::Ref* pSender);
	void item8(cocos2d::Ref* pSender);
	void buyit(cocos2d::Ref* pSender);
	//void give_gold(int num);
	int price;
	int itemkey;
	int itemupdate = 0;
	//void upload(float);
	//int gold;
	//void gold_get(float);
	virtual bool init();
	void price_get(float); 
	int getgold;
	//Label* pPriceTTF;
	CREATE_FUNC(StoreLayer);
   
	static StoreLayer* createLayer();
private:
	//Label* pGoldTTF;
	
    
};

#endif // _GAMELAYER_H
