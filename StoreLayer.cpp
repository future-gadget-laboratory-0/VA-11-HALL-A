#include "StoreLayer.h"
#include "SimpleAudioEngine.h"

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
	auto sprite = Sprite::create("store.png");
	if (sprite == nullptr)
	{
		problemLoading("'store.png'");
	}
	else
	{
		// position the sprite on the center of the screen
		sprite->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

		// add the sprite as a child to this layer
		this->addChild(sprite, 0);
	}
	// 加入内容
	return bl;
}

// Scene的入口，通过该函数进入Layer
Scene* StoreLayer::createScene()
{
	auto scene = Scene::create();
	auto layer = StoreLayer::create();
	scene->addChild(layer);
	return scene;
}