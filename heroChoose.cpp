#include "heroChoose.h"
#include "SimpleAudioEngine.h"
#include "enemyChoose.h"



USING_NS_CC;
using namespace CocosDenshion;
Scene* HeroChoose::createScene()
{
	return HeroChoose::create();
}
static void problemLoading(const char* filename)
{
	printf("Error while loading: %s\n", filename);
	printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

// on "init" you need to initialize your instance
bool HeroChoose::init()
{
	//////////////////////////////
	// 1. super init first
	if (!Scene::init())
	{
		return false;
	}
	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	auto sprite = Sprite::create("choose2.PNG");
	if (sprite == nullptr)
	{
		problemLoading("'choose2.PNG'");
	}
	else
	{
		sprite->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

		this->addChild(sprite, 0);
	}
	auto beginGame1 = MenuItemImage::create(
		"Archer.png",
		"Archer.png",
		CC_CALLBACK_1(HeroChoose::begin1, this));
	beginGame1->setPosition(Vec2(1300,550));
	auto begin1 = Menu::create(beginGame1, NULL);
	begin1->setPosition(Vec2::ZERO);
	this->addChild(begin1, 1);

	auto beginGame2 = MenuItemImage::create(
		"Warlock.png",
		"Warlock.png",
		CC_CALLBACK_1(HeroChoose::begin2, this));
	beginGame2->setPosition(Vec2(600,550));
	auto begin2 = Menu::create(beginGame2, NULL);
	begin2->setPosition(Vec2::ZERO);
	this->addChild(begin2, 1);

	auto beginGame3 = MenuItemImage::create(
		"Murloc.png",
		"Murloc.png",
		CC_CALLBACK_1(HeroChoose::begin3, this));
	beginGame3->setPosition(Vec2(950,300));
	auto begin3 = Menu::create(beginGame3, NULL);
	begin3->setPosition(Vec2::ZERO);
	this->addChild(begin3, 1);

	auto beginGame4 = MenuItemImage::create(
		"warrior.png",
		"warrior.png",
		CC_CALLBACK_1(HeroChoose::begin4, this));
	beginGame4->setPosition(Vec2(950,800));
	auto begin4 = Menu::create(beginGame4, NULL);
	begin4->setPosition(Vec2::ZERO);
	this->addChild(begin4, 1);

	return true;
}


void HeroChoose::begin1(Ref* pSender)
{
	Director::getInstance()->replaceScene(EnemyChoose::createScene(4));
}
void HeroChoose::begin2(Ref* pSender)
{
	Director::getInstance()->replaceScene(EnemyChoose::createScene(1));
}
void HeroChoose::begin3(Ref* pSender)
{
	Director::getInstance()->replaceScene(EnemyChoose::createScene(2));
}
void HeroChoose::begin4(Ref* pSender)
{
	Director::getInstance()->replaceScene(EnemyChoose::createScene(3));
}