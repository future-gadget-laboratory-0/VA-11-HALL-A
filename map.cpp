#include "map.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene* map::createScene()
{
	return map::create();
}

// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
	printf("Error while loading: %s\n", filename);
	printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

// on "init" you need to initialize your instance
bool map::init()
{
	//////////////////////////////
	// 1. super init first
	if (!Scene::init())
	{
		return false;
	}


	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	Scene::initWithPhysics();
	PhysicsWorld* world = getPhysicsWorld();
	world->setGravity(Vec2(0, 0));
	Sprite *edgeSp;
	edgeSp = Sprite::create();//创建一个精灵
	auto boundBody = PhysicsBody::createEdgeBox(visibleSize, PhysicsMaterial(0.0f, 1.0f, 0.0f), 3);//edgebox是不受刚体碰撞影响的一种刚体，我们用它来设置物理世界的边界
	edgeSp->setPosition(0, 0);//位置设置在屏幕中央
	edgeSp->setPhysicsBody(boundBody);//将精灵容纳的刚体设置为boundbody。注意这里不能确定刚体和精灵是不是父子节点的关系。有兴趣的朋友请自行研究。
	addChild(edgeSp);//加入渲染树
	_tileMap = TMXTiledMap::create("map_new.tmx");
	_tileMap->setScale(7);
	_tileMap->setPosition(0, 0);
	addChild(_tileMap, -1);
	_player = Sprite::create("Player.png");
	_player->setScale(3);
	_player->setPosition(250, 250);
	addChild(_player, 1);
	this->addChild(m_control, 1);
	auto listener = EventListenerTouchOneByOne::create();
	listener->onTouchBegan = CC_CALLBACK_2(map::onTouchBegan, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	return true;
}


void map::menuCloseCallback(Ref* pSender)
{
	//Close the cocos2d-x game scene and quit the application
	Director::getInstance()->end();

	/*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() as given above,instead trigger a custom event created in RootViewController.mm as below*/

	//EventCustom customEndEvent("game_scene_close_event");
	//_eventDispatcher->dispatchEvent(&customEndEvent);


}
bool map::onTouchBegan(Touch *touch, Event *unused_event)
 {
    //获取触屏位置（坐标）
    Point pos = touch->getLocation();
    _player->setPosition(pos);//把点击屏幕的触摸点（坐标）给赋值给精灵2
	log("TouchBegan");
    return true;
 }