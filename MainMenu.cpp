#include "MainMenu.h"
#include "SimpleAudioEngine.h"
#include "StoreLayer.h"
#include "map.h"
#include "UI.h"

USING_NS_CC;
using namespace CocosDenshion;
Scene* MainMenu::createScene()
{
	return MainMenu::create();
}

// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
	printf("Error while loading: %s\n", filename);
	printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

// on "init" you need to initialize your instance
bool MainMenu::init()
{
	//////////////////////////////
	// 1. super init first
	if (!Scene::init())
	{
		return false;
	}
	auto audioengine = SimpleAudioEngine::getInstance();
	audioengine->setEffectsVolume(0.7);
	audioengine->playBackgroundMusic("sounds/menu.mp3", true);
	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	/////////////////////////////
	// 2. add a menu item with "X" image, which is clicked to quit the program
	//    you may modify it.

	// add a "close" icon to exit the progress. it's an autorelease object
	auto beginGame = MenuItemImage::create(
		"begin.png",
		"begin.png",
		CC_CALLBACK_1(MainMenu::begin, this));
	auto closeItem = MenuItemImage::create(
		"Close.png",
		"Close.png",
		CC_CALLBACK_1(MainMenu::menuCloseCallback, this));
	if (beginGame == nullptr ||
		beginGame->getContentSize().width <= 0 ||
		beginGame->getContentSize().height <= 0)
	{
		problemLoading("'button.png' and 'buttonSelected.png'");
	}
	else
	{
		//float x = origin.x + visibleSize.width - beginGame->getContentSize().width / 3;
		//float y = origin.y + beginGame->getContentSize().height / 3;
		beginGame->setPosition(Vec2(300, 800));
	}
	// create menu, it's an autorelease object
	auto begin = Menu::create(beginGame, NULL);
	begin->setPosition(Vec2::ZERO);
	this->addChild(begin, 1);
	if (closeItem == nullptr ||
		closeItem->getContentSize().width <= 0 ||
		closeItem->getContentSize().height <= 0)
	{
		problemLoading("'CloseNormal.png' and 'CloseSelected.png'");
	}
	else
	{
		//float x = origin.x + visibleSize.width - closeItem->getContentSize().width / 2;
		//float y = origin.y + closeItem->getContentSize().height / 2;
		closeItem->setPosition(Vec2(300, 600));
	}

	// create menu, it's an autorelease object
	auto menu = Menu::create(closeItem, NULL);
	menu->setPosition(Vec2::ZERO);
	this->addChild(menu, 1);

	/////////////////////////////
	// 3. add your codes below...

	// add a label shows "Hello World"
	// create and initialize a label

	auto label = Label::createWithTTF("CYBERPUNK 2019", "fonts/Marker Felt.ttf", 70);
	if (label == nullptr)
	{
		problemLoading("'fonts/Marker Felt.ttf'");
	}
	else
	{
		// position the label on the center of the screen
		label->setPosition(Vec2(origin.x + visibleSize.width / 2,
			origin.y + visibleSize.height/2 + 200 - label->getContentSize().height));

		// add the label as a child to this layer
		this->addChild(label, 1);
	}
	auto listener1 = EventListenerTouchOneByOne::create();
	listener1->onTouchBegan = [](Touch* t, Event* e) {
		if (e->getCurrentTarget()->getBoundingBox().containsPoint(t->getLocation())) {
			log("cake");
		}
		return true; // if you are consuming it
	};
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener1, label);
	// add "HelloWorld" splash screen"
	auto sprite = Sprite::create("welcome.png");
	if (sprite == nullptr)
	{
		problemLoading("'welcome.png'");
	}
	else
	{
		// position the sprite on the center of the screen
		sprite->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

		// add the sprite as a child to this layer
		this->addChild(sprite, 0);
	}
	
	return true;
}


void MainMenu::begin(Ref* pSender)
{
	Director::getInstance()->replaceScene(map::createScene());
	//auto layer = StoreLayer::createScene();
	//this->addChild(layer);
}
void MainMenu::menuCloseCallback(Ref* pSender)
{
	Director::getInstance()->end();
}