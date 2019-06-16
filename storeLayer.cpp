#include "StoreLayer.h"
#include "SimpleAudioEngine.h"
#include "controller.h"

USING_NS_CC;

// 构造函数，如有对象成员，需要在此初始化
StoreLayer::StoreLayer()
{}
// 析构
StoreLayer::~StoreLayer()
{}

//虚函数，初始化，当执行本类的create()函数时会被自动调用
static void problemLoading(const char* filename)
{
	printf("Error while loading: %s\n", filename);
	printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}
bool StoreLayer::init()
{
	bool bl = Layer::init();
	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	auto sprite = Sprite::create("storeBackGround.png");
	sprite->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
	this->addChild(sprite, 0);

	
	//schedule(schedule_selector(StoreLayer::gold_get), 1.0f);
	//gold = getgold;
	//pGoldTTF = Label::create(CCString::createWithFormat("GOLD:%i", gold)->getCString(), "fonts/Marker Felt.ttf", 40);
	//pGoldTTF->setPosition(1500, 900);
	//pGoldTTF->setName("gold");
	//this->addChild(pGoldTTF, 2);

	itemkey = 0;

	auto buyit = MenuItemImage::create(
		"button_buy.png",
		"button_buy2.png",
		CC_CALLBACK_1(StoreLayer::buyit, this));
	buyit->setPosition(Vec2(1140, 270));
	auto buy = Menu::create(buyit, NULL);
	buy->setPosition(Vec2::ZERO);
	this->addChild(buy, 5);

	auto item1 = MenuItemImage::create(
		"equipment/Red_Potion.png",
		"equipment/Red_Potion.png",
		CC_CALLBACK_1(StoreLayer::item1, this));
	item1->setPosition(Vec2(748, 730));
	auto itemp1 = Menu::create(item1, NULL);
	itemp1->setPosition(Vec2::ZERO);
	this->addChild(itemp1, 5);

	auto item2 = MenuItemImage::create(
		"equipment/Blue_Potion.png",
		"equipment/Blue_Potion.png",
		CC_CALLBACK_1(StoreLayer::item2, this));
	item2->setPosition(Vec2(748, 670));
	auto itemp2 = Menu::create(item2, NULL);
	itemp2->setPosition(Vec2::ZERO);
	this->addChild(itemp2, 5);

	auto item3 = MenuItemImage::create(
		"equipment/head.png",
		"equipment/head.png",
		CC_CALLBACK_1(StoreLayer::item3, this));
	item3->setPosition(Vec2(748, 611));
	auto itemp3 = Menu::create(item3, NULL);
	itemp3->setPosition(Vec2::ZERO);
	this->addChild(itemp3, 5);

	auto item4 = MenuItemImage::create(
		"equipment/armour.png",
		"equipment/armour.png",
		CC_CALLBACK_1(StoreLayer::item4, this));
	item4->setPosition(Vec2(748, 552));
	auto itemp4 = Menu::create(item4, NULL);
	itemp4->setPosition(Vec2::ZERO);
	this->addChild(itemp4, 5);

	auto item5 = MenuItemImage::create(
		"equipment/Crossbow.png",
		"equipment/Crossbow.png",
		CC_CALLBACK_1(StoreLayer::item5, this));
	item5->setPosition(Vec2(748, 493));
	auto itemp5 = Menu::create(item5, NULL);
	itemp5->setPosition(Vec2::ZERO);
	this->addChild(itemp5, 5);

	auto item6 = MenuItemImage::create(
		"equipment/knife.png",
		"equipment/knife.png",
		CC_CALLBACK_1(StoreLayer::item6, this));
	item6->setPosition(Vec2(748, 434));
	auto itemp6 = Menu::create(item6, NULL);
	itemp6->setPosition(Vec2::ZERO);
	this->addChild(itemp6, 5);

	auto item7 = MenuItemImage::create(
		"equipment/ring.png",
		"equipment/ring.png",
		CC_CALLBACK_1(StoreLayer::item7, this));
	item7->setPosition(Vec2(748, 375));
	auto itemp7 = Menu::create(item7, NULL);
	itemp7->setPosition(Vec2::ZERO);
	this->addChild(itemp7, 5);

	auto item8 = MenuItemImage::create(
		"equipment/stone.png",
		"equipment/stone.png",
		CC_CALLBACK_1(StoreLayer::item8, this));
	item8->setPosition(Vec2(748, 316));
	auto itemp8 = Menu::create(item8, NULL);
	itemp8->setPosition(Vec2::ZERO);
	this->addChild(itemp8, 5);

	auto itemd1 = Label::createWithTTF("Health Potion", "fonts/Marker Felt.ttf", 30);
	itemd1->setPosition(900,730);
	itemd1->setColor(ccc3(75, 0, 130));
	this->addChild(itemd1);

	auto itemd2 = Label::createWithTTF("Magic Potion", "fonts/Marker Felt.ttf", 30);
	itemd2->setPosition(900, 670);
	itemd2->setColor(ccc3(75, 0, 130));
	this->addChild(itemd2);

	auto itemd3 = Label::createWithTTF("Ancient Helmet", "fonts/Marker Felt.ttf", 30);
	itemd3->setPosition(900, 611);
	itemd3->setColor(ccc3(75, 0, 130));
	this->addChild(itemd3);

	auto itemd4 = Label::createWithTTF("Armour of Varian", "fonts/Marker Felt.ttf", 30);
	itemd4->setPosition(900, 552);
	itemd4->setColor(ccc3(75, 0, 130));
	this->addChild(itemd4);

	auto itemd5 = Label::createWithTTF("Bow of Windrunner", "fonts/Marker Felt.ttf", 30);
	itemd5->setPosition(900, 493);
	itemd5->setColor(ccc3(75, 0, 130));
	this->addChild(itemd5);

	auto itemd6 = Label::createWithTTF("Wind Blade", "fonts/Marker Felt.ttf", 30);
	itemd6->setPosition(900, 434);
	itemd6->setColor(ccc3(75, 0, 130));
	this->addChild(itemd6);

	auto itemd7 = Label::createWithTTF("Ring of Protector", "fonts/Marker Felt.ttf", 30);
	itemd7->setPosition(900, 375);
	itemd7->setColor(ccc3(75, 0, 130));
	this->addChild(itemd7);

	auto itemd8 = Label::createWithTTF("Hearthstone", "fonts/Marker Felt.ttf", 30);
	itemd8->setPosition(900, 316);
	itemd8->setColor(ccc3(75, 0, 130));
	this->addChild(itemd8);

	price = 0;
	schedule(schedule_selector(StoreLayer::price_get), 1.0f);
	//auto pPriceTTF = Label::create(CCString::createWithFormat("PRICE:%i", price)->getCString(), "fonts/Marker Felt.ttf", 30);
	//pPriceTTF->setPosition(1125, 350);
	//pPriceTTF->setColor(ccc3(220,20,60));
	//pPriceTTF->setName("PRICE");
	//this->addChild(pPriceTTF, 2);

	return bl;
}

// Scene的入口，通过该函数进入Layer
StoreLayer* StoreLayer::createLayer()
{
	auto storeLayer = StoreLayer::create();
	return storeLayer;
}
void StoreLayer::buyit(cocos2d::Ref* pSender)
{
	int gold1 = getgold;
	if (gold1 > price) 
	{

        if (itemkey == 1)
		{
			itemupdate = 1;
			auto itemget1 = Sprite::create("equipment/Red_Potion.png");
			itemget1->setPosition(1120, 700);
			addChild(itemget1);
			//scheduleOnce(schedule_selector(StoreLayer::upload), 1.0f);
		}
		if (itemkey == 2)
		{
			itemupdate = 2;
			auto itemget2 = Sprite::create("equipment/Blue_Potion.png");
			itemget2->setPosition(1180, 700);
			addChild(itemget2);
			//scheduleOnce(schedule_selector(StoreLayer::upload), 1.0f);
		}
		if (itemkey == 3)
		{
			itemupdate = 3;
			auto itemget3 = Sprite::create("equipment/head.png");
			itemget3->setPosition(1240, 700);
			addChild(itemget3);
			//scheduleOnce(schedule_selector(StoreLayer::upload), 1.0f);
		}
		if (itemkey == 4)
		{
			itemupdate = 4;
			auto itemget4 = Sprite::create("equipment/armour.png");
			itemget4->setPosition(1300, 700);
			addChild(itemget4);
			//scheduleOnce(schedule_selector(StoreLayer::upload), 1.0f);
		}
		if (itemkey == 5)
		{
			itemupdate = 5;
			auto itemget5 = Sprite::create("equipment/Crossbow.png");
			itemget5->setPosition(1120, 640);
			addChild(itemget5);
			//scheduleOnce(schedule_selector(StoreLayer::upload), 1.0f);
		}
		if (itemkey == 6)
		{
			itemupdate = 6;
			auto itemget6 = Sprite::create("equipment/knife.png");
			itemget6->setPosition(1180, 640);
			addChild(itemget6);
			//scheduleOnce(schedule_selector(StoreLayer::upload), 1.0f);
		}
		if (itemkey == 7)
		{
			itemupdate = 7;
			auto itemget7 = Sprite::create("equipment/ring.png");
			itemget7->setPosition(1240, 640);
			addChild(itemget7);
			//scheduleOnce(schedule_selector(StoreLayer::upload), 1.0f);
		}
		if (itemkey == 8)
		{
			itemupdate = 8;
			auto itemget8 = Sprite::create("equipment/stone.png");
			itemget8->setPosition(1300, 640);
			addChild(itemget8);
			//scheduleOnce(schedule_selector(StoreLayer::upload), 1.0f);
		}
	}
		
	
}
void StoreLayer::price_get(float)
{
	this->removeChildByName("price");
	auto pPriceTTF = Label::create(CCString::createWithFormat("PRICE:%i", price)->getCString(), "fonts/Marker Felt.ttf", 30);
	pPriceTTF->setName("price");
	pPriceTTF->setPosition(1150, 350);
	pPriceTTF->setColor(ccc3(220, 20, 60));
	this->addChild(pPriceTTF, 2);
}
void StoreLayer::item1(cocos2d::Ref* pSender)
{
	itemkey = 1;
	price = 50;
}
void StoreLayer::item2(cocos2d::Ref* pSender)
{
	itemkey = 2;
	price = 60;
}
void StoreLayer::item3(cocos2d::Ref* pSender)
{
	itemkey = 3;
	price = 200;
}
void StoreLayer::item4(cocos2d::Ref* pSender)
{
	itemkey = 4;
	price = 300;
}
void StoreLayer::item5(cocos2d::Ref* pSender)
{
	itemkey = 5;
	price = 400;
}
void StoreLayer::item6(cocos2d::Ref* pSender)
{
	itemkey = 6;
	price = 500;
}
void StoreLayer::item7(cocos2d::Ref* pSender)
{
	itemkey = 7;
	price = 550;
}
void StoreLayer::item8(cocos2d::Ref* pSender)
{
	itemkey = 8;
	price = 600;
}
//void StoreLayer::give_gold(int num)
//{
	//getgold = num;
//}
//void upload(float)
//{
	
//}
//void StoreLayer::gold_get(float)
//{
	//gold = getgold;
	//this->removeChildByName("gold");
	//auto pGoldTTF = Label::create(CCString::createWithFormat("GOLD:%i", gold)->getCString(), "fonts/Marker Felt.ttf", 40);
	//pGoldTTF->setName("gold");
	//pGoldTTF->setPosition(1500, 900);
	//this->addChild(pGoldTTF, 2);
//}