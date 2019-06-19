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


#include "map_one.h"
#include "SimpleAudioEngine.h"
int ID1;
int ID2;

USING_NS_CC;

Scene* MapScene::createScene(int id1,int id2)
{
	ID1 = id1;
	ID2 = id2;
    return MapScene::create();
}



// Implementation of the keyboard event callback function prototype
/*
void HelloWorld::onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event)
{
	//Catherine->stop_rb();
	//Catherine->move_rb();
	//this->addChild(Catherine);
	//Catherine->setPosition(Point(Vec2(100, 200)));
	if (keyCode == EventKeyboard::KeyCode::KEY_Q)
	{
		//Catherine->move_rb();
		Catherine->skillst();
	}
	else if (keyCode == EventKeyboard::KeyCode::KEY_W)
	{
		//Catherine->move_lb();
		Catherine->skillnd(2);
	}
	else if (keyCode == EventKeyboard::KeyCode::KEY_E)
	{
		//Catherine->move_lf();
		Catherine->skillrd();
	}
	else if (keyCode == EventKeyboard::KeyCode::KEY_R)
	{
		//Catherine->move_rf();
		Catherine->skillth();
	}

}


void HelloWorld::onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event)
{
	//log("Key with keycode %d released", keyCode);
	//Catherine->stop_lf();
	//this->addChild(Catherine);
	if (keyCode == EventKeyboard::KeyCode::KEY_Q)
	{
		//Catherine->stop_rb();
	}
	else if (keyCode == EventKeyboard::KeyCode::KEY_W)
	{
		//Catherine->stop_lb();
	}
	else if (keyCode == EventKeyboard::KeyCode::KEY_E)
	{
		//Catherine->stop_lf();
	}
	else if (keyCode == EventKeyboard::KeyCode::KEY_R)
	{
		//Catherine->stop_rf();
	}

}

bool HelloWorld::onTouchBegan(Touch* touch, Event* event)
{
	Catherine->pos= touch->getLocation();	
	//Catherine->move();
	return true;
}
void HelloWorld::onTouchMoved(Touch* touch, Event* event)
{
	//Catherine->move();
//	Catherine->pos = touch->getLocation();
}
void HelloWorld::onTouchEnded(Touch* touch, Event* event)
{
	//Catherine->pos = touch->getLocation();
//	Catherine->pos = touch->getLocation();

}

*/


void MapScene::onMouseDown(Event *event)
{
//	CCLOG("here");
	// to illustrate the event....
	EventMouse* e = (EventMouse*)event;
	//string str = "Mouse Down detected, Key: ";
	//str += tostr(e->getMouseButton());
//	Catherine->pos = e->getLocation();
	//Catherine->pos = convertToNodeSpace(Catherine->pos);
	//Catherine->move();
}



void MapScene::onMouseUp(Event *event)
{
	// to illustrate the event....
	EventMouse* e = (EventMouse*)event;
	//string str = "Mouse Up detected, Key: ";
	//str += tostr(e->getMouseButton());
//	Catherine->pos = e->getLocation();
}

void MapScene::onMouseMove(Event *event)
{
	EventMouse* e = (EventMouse*)event;
	another_sprite->setPosition(e->getCursorX(), e->getCursorY());

//	CCLOG("here");
	// to illustrate the event....
//	EventMouse* e = (EventMouse*)event;
	//scene_move(Point(e->getCursorX(), e->getCursorY()));
	scene_move(e->getLocation());
	//string str = "MousePosition X:";
	//str = str + tostr(e->getCursorX()) + " Y:" + tostr(e->getCursorY());
//	Catherine->pos = e->getLocation();
}

void MapScene::onMouseScroll(Event *event)
{
	// to illustrate the event....
	EventMouse* e = (EventMouse*)event;
	//string str = "Mouse Scroll detected, X: ";
	//str = str + tostr(e->getScrollX()) + " Y: " + tostr(e->getScrollY());
//	Catherine->pos = e->getLocation();
}

void MapScene::scene_move(Vec2 loc)
{
//	_tileMap->setPosition(Vec2(-900, 0));
	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	int range = mousemoverange;
	/*if (loc.x + range >= visibleSize.width&&loc.x + range >= visibleSize.width)
		_tileMap->setPosition(Vec2(_tileMap->getPosition().x- range,_tileMap->getPosition().y - range));
	if (loc.x  <= range&&loc.x + range >= visibleSize.width)
		_tileMap->setPosition(Vec2(_tileMap->getPosition().x + range, _tileMap->getPosition().y - range));
	if (loc.x + range >= visibleSize.width&&loc.x + range <= range)
		_tileMap->setPosition(Vec2(_tileMap->getPosition().x - range, _tileMap->getPosition().y + range));
	if (loc.x + range <= range &&loc.x + range <= range)
		_tileMap->setPosition(Vec2(_tileMap->getPosition().x + range, _tileMap->getPosition().y + range));
	//	_tileMap->setPosition(500,500);*/
	/*
	if (loc.x + range >= visibleSize.width&&loc.y + range <= visibleSize.height&&loc.y  >=range)
		_tileMap->setPosition(Vec2(_tileMap->getPosition().x - range, _tileMap->getPosition().y ));
	else if(loc.y + range >= visibleSize.height&&loc.x + range <= visibleSize.width&&loc.x  >=range)
		_tileMap->setPosition(Vec2(_tileMap->getPosition().x , _tileMap->getPosition().y- range));
	else if (loc.x  >= range&&loc.y + range <= visibleSize.height&&loc.y >= range)
		_tileMap->setPosition(Vec2(_tileMap->getPosition().x + range, _tileMap->getPosition().y));
	else if (loc.y + range >= visibleSize.height&&loc.x + range <= visibleSize.width&&loc.x >= range)
		_tileMap->setPosition(Vec2(_tileMap->getPosition().x, _tileMap->getPosition().y + range));
*/

	if (loc.x + range >= visibleSize.width&&loc.y + range <= visibleSize.height&&loc.y >= range)
	{
		if (_tileMap->getPosition().x - range > visibleSize.width - _tileMap->getContentSize().width)
		{
			map_skewing.x -= range;
			_tileMap->setPosition(Vec2(_tileMap->getPosition().x - range, _tileMap->getPosition().y ));
		}	
		else
		{
			map_skewing.x = visibleSize.width - _tileMap->getContentSize().width;
			_tileMap->setPosition(Vec2(visibleSize.width -_tileMap->getContentSize().width, _tileMap->getPosition().y));
		}	
	}
	else if (loc.y + range >= visibleSize.height&&loc.x + range <= visibleSize.width&&loc.x >= range)
	{
		if (_tileMap->getPosition().y + range < 0)
		{
			map_skewing.y += range;
			_tileMap->setPosition(Vec2(_tileMap->getPosition().x , _tileMap->getPosition().y+ range));
		}
		else
		{
			map_skewing.y = 0;
			_tileMap->setPosition(Vec2(_tileMap->getPosition().x, 0));
		}
	}
		
	else if (loc.x <= range && loc.y + range <= visibleSize.height&&loc.y >= range)
	{
		if (_tileMap->getPosition().x + range < 0)
		{
			map_skewing.x += range;
			_tileMap->setPosition(Vec2(_tileMap->getPosition().x + range, _tileMap->getPosition().y));
		}
		else
		{
			map_skewing.x = 0;
			_tileMap->setPosition(Vec2(0,_tileMap->getPosition().y));
		}
	}
		
	else if (loc.y <= range && loc.x + range <= visibleSize.width&&loc.x >= range)
	{
		if (_tileMap->getPosition().y + range < visibleSize.height - _tileMap->getContentSize().height)
		{
			map_skewing.y += range;
			_tileMap->setPosition(Vec2(_tileMap->getPosition().x, _tileMap->getPosition().y - range));
		}
		else
		{
			map_skewing.y = visibleSize.height - _tileMap->getContentSize().height;
			_tileMap->setPosition(Vec2(_tileMap->getPosition().x, visibleSize.height -_tileMap->getContentSize().height));
		}
	}
	m_control->map_skewing= map_skewing;
}

actor_property MapScene::propertyget(int playerid)
{
	return m_control->getproperty(1);
}



// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

// on "init" you need to initialize your instance
bool MapScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Scene::init() )
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

	_tileMap = TMXTiledMap::create("map_2.tmx");
	//_tileMap->setScale(7);
	_tileMap->setPosition(0, 0);

	this->addChild(_tileMap, -1);

	Scene::initWithPhysics();
	PhysicsWorld* world = getPhysicsWorld();
	world->setGravity(Vec2(0, 0));
//	this->getPhysicsWorld()->setDebugDrawMask(PhysicsWorld::DEBUGDRAW_ALL);
/*	Sprite *edgeSp;
	edgeSp = Sprite::create();//创建一个精灵
	auto boundBody = PhysicsBody::createEdgeBox(visibleSize, PhysicsMaterial(0.0f, 1.0f, 0.0f), 3);//edgebox是不受刚体碰撞影响的一种刚体，我们用它来设置物理世界的边界
	edgeSp->setPosition(visibleSize.width/2, visibleSize.height / 2);//位置设置在屏幕中央
	//edgeSp->setAnchorPoint(Vec2(0, 0));
	edgeSp->setPhysicsBody(boundBody);//将精灵容纳的刚体设置为boundbody。注意这里不能确定刚体和精灵是不是父子节点的关系。有兴趣的朋友请自行研究。
	addChild(edgeSp);//加入渲染树
	/*
	auto listener = EventListenerKeyboard::create();
	listener->onKeyPressed = CC_CALLBACK_2(HelloWorld::onKeyPressed, this);
	listener->onKeyReleased = CC_CALLBACK_2(HelloWorld::onKeyReleased, this);

	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	*/
	auto _mouseListener1 = EventListenerMouse::create();
	_mouseListener1->onMouseMove = CC_CALLBACK_1(MapScene::onMouseMove, this);
	_mouseListener1->onMouseUp = CC_CALLBACK_1(MapScene::onMouseUp, this);
	_mouseListener1->onMouseDown = CC_CALLBACK_1(MapScene::onMouseDown, this);
	_mouseListener1->onMouseScroll = CC_CALLBACK_1(MapScene::onMouseScroll, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(_mouseListener1, this);
	/*
	_eventDispatcher->addEventListenerWithSceneGraphPriority(_mouseListener, this);
	//this->setTouchEnabled(true);
	auto listener2 = EventListenerTouchOneByOne::create();
	listener2->setSwallowTouches(true);
	listener2->onTouchBegan = CC_CALLBACK_2(MapScene::onTouchBegan, this);
	listener2->onTouchMoved = CC_CALLBACK_2(MapScene::onTouchMoved, this);
	listener2->onTouchEnded = CC_CALLBACK_2(MapScene::onTouchEnded, this);
	//listener1->onTouchCancelled = CC_CALLBACK_2(HelloWorld::onTouchesCancelled, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener2, this);

	*/
	m_control->setscale(1);




    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(MapScene::menuCloseCallback, this));

    if (closeItem == nullptr ||
        closeItem->getContentSize().width <= 0 ||
        closeItem->getContentSize().height <= 0)
    {
        problemLoading("'CloseNormal.png' and 'CloseSelected.png'");
    }
    else
    {
        float x = origin.x + visibleSize.width - closeItem->getContentSize().width/2;
        float y = origin.y + closeItem->getContentSize().height/2;
        closeItem->setPosition(Vec2(x,y));
    }

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 2);
	//mouse_sprite->setScale(0.5f);
	//ShowCursor(FALSE);
	//mouse_sprite->setAnchorPoint(Point(mouse_sprite->getContentSize().width,mouse_sprite->getContentSize().height));
	//mouse_sprite->setAnchorPoint(Point(0,-1.1));
	//this->addChild(mouse_sprite,2);
//	this->addChild(Catherine,1);
	_tileMap->addChild(m_control, 3);

	tower1->setPosition(1800, 500);
	_tileMap->addChild(tower1, 1);
	tower2->setPosition(2400, 500);
	_tileMap->addChild(tower2, 1);
	tower3->setPosition(1100, 500);
	_tileMap->addChild(tower3, 1);
	tower4->setPosition(500, 500);
	_tileMap->addChild(tower4, 1);
	tower4->changeproperty(500, "RHP");
	tower2->changeproperty(500, "RHP");
	m_control->chose_character(1, ID1);
	m_control->chose_character(2, ID2);

	another_sprite = Sprite::create("another_mouse.png");
	this->addChild(another_sprite,15);
	auto CaBody = PhysicsBody::createBox(Size(700, 600), PHYSICSBODY_MATERIAL_DEFAULT);
	CaBody->setRotationEnable(false);
	CaBody->setCategoryBitmask(0x01);
	CaBody->setCollisionBitmask(0x00000000);
	CaBody->setContactTestBitmask(0x01);
	//CaBody->setDynamic(false);
	auto CbBody = PhysicsBody::createBox(Size(700, 600), PHYSICSBODY_MATERIAL_DEFAULT);
	CbBody->setRotationEnable(false);
	CbBody->setCategoryBitmask(0x01);
	CbBody->setCollisionBitmask(0x00000000);
	CbBody->setContactTestBitmask(0x01);
	//CbBody->setDynamic(false);


	tower1->setTexture("tower_blue.png");
	tower2->setTexture("crystal_blue.png");
	tower3->setTexture("tower_red.png");
	tower4->setTexture("crystal_red.png");
	tower1->setScale(0.5);
	tower2->setScale(0.5);
	tower3->setScale(0.5);
	tower4->setScale(0.5);
	tower2->setPhysicsBody(CaBody);
	tower4->setPhysicsBody(CbBody);
	tower2->HP_bar->setPosition(Vec2(150,650));
	tower2->Hp_progress->setPosition(Vec2(150,650 ));
	tower4->HP_bar->setPosition(Vec2(700, 650));
	tower4->Hp_progress->setPosition(Vec2(700, 650));
	//10000000 red tower 10000012 red crystal 10000007 blue tower 10000013 blue crystal
	tower1->settag(10000007);
	tower2->settag(10000013);
	tower3->settag(10000000);
	tower4->settag(10000012);



	/**/
	auto wall1 = Sprite::create("boundary.png");
	auto Cc1Body = PhysicsBody::createBox(Size(2500, 300), PHYSICSBODY_MATERIAL_DEFAULT);
	Cc1Body->setRotationEnable(false);
	Cc1Body->setCategoryBitmask(0x01);
	Cc1Body->setCollisionBitmask(0x00000001);
	Cc1Body->setContactTestBitmask(0x01);
	Cc1Body->setDynamic(false);
	wall1->setPhysicsBody(Cc1Body);
	wall1->setPosition(Vec2(1200,150));
	_tileMap->addChild(wall1, 1);

	auto wall2 = Sprite::create("boundary.png");
	auto Cc2Body = PhysicsBody::createBox(Size(2500, 300), PHYSICSBODY_MATERIAL_DEFAULT);
	Cc2Body->setRotationEnable(false);
	Cc2Body->setCategoryBitmask(0x01);
	Cc2Body->setCollisionBitmask(0x00000001);
	Cc2Body->setContactTestBitmask(0x01);
	Cc2Body->setDynamic(false);
	wall2->setPhysicsBody(Cc2Body);
	wall2->setPosition(Vec2(1920, 955));
	_tileMap->addChild(wall2, 1);

	auto wall3 = Sprite::create("boundary.png");
	auto Cc3Body = PhysicsBody::createBox(Size(1000, 300), PHYSICSBODY_MATERIAL_DEFAULT);
	Cc3Body->setRotationEnable(false);
	Cc3Body->setCategoryBitmask(0x01);
	Cc3Body->setCollisionBitmask(0x00000001);
	Cc3Body->setContactTestBitmask(0x01);
	Cc3Body->setDynamic(false);
	wall3->setPhysicsBody(Cc3Body);
	wall3->setPosition(Vec2(500, 1050));
	_tileMap->addChild(wall3, 1);

	auto wall4 = Sprite::create("boundary.png");
	auto Cc4Body = PhysicsBody::createBox(Size(100, 300), PHYSICSBODY_MATERIAL_DEFAULT);
	Cc4Body->setRotationEnable(false);
	Cc4Body->setCategoryBitmask(0x01);
	Cc4Body->setCollisionBitmask(0x00000001);
	Cc4Body->setContactTestBitmask(0x01);
	Cc4Body->setDynamic(false);
	wall4->setPhysicsBody(Cc4Body);
	wall4->setPosition(Vec2(2400, 50));
	_tileMap->addChild(wall4, 1);

	auto wall5 = Sprite::create("boundary.png");
	auto Cc5Body = PhysicsBody::createBox(Size(180, 180), PHYSICSBODY_MATERIAL_DEFAULT);
	Cc5Body->setRotationEnable(false);
	Cc5Body->setCategoryBitmask(0x01);
	Cc5Body->setCollisionBitmask(0x00000001);
	Cc5Body->setContactTestBitmask(0x01);
	Cc5Body->setDynamic(false);
	wall5->setPhysicsBody(Cc5Body);
	wall5->setPosition(Vec2(620, 530));
	_tileMap->addChild(wall5, 1);

	auto wall6 = Sprite::create("boundary.png");
	auto Cc6Body = PhysicsBody::createBox(Size(180, 180), PHYSICSBODY_MATERIAL_DEFAULT);
	Cc6Body->setRotationEnable(false);
	Cc6Body->setCategoryBitmask(0x01);
	Cc6Body->setCollisionBitmask(0x00000001);
	Cc6Body->setContactTestBitmask(0x01);
	Cc6Body->setDynamic(false);
	wall6->setPhysicsBody(Cc6Body);
	wall6->setPosition(Vec2(2300, 530));
	_tileMap->addChild(wall6, 1);

	auto wall7 = Sprite::create("boundary.png");
	auto Cc7Body = PhysicsBody::createBox(Size(180, 180), PHYSICSBODY_MATERIAL_DEFAULT);
	Cc7Body->setRotationEnable(false);
	Cc7Body->setCategoryBitmask(0x01);
	Cc7Body->setCollisionBitmask(0x00000001);
	Cc7Body->setContactTestBitmask(0x01);
	Cc7Body->setDynamic(false);
	tower1->setPhysicsBody(Cc7Body);
	//tower1->setPosition(Vec2(1800, 500));
	//_tileMap->addChild(tower1, 1);

	auto wall8 = Sprite::create("boundary.png");
	auto Cc8Body = PhysicsBody::createBox(Size(180, 180), PHYSICSBODY_MATERIAL_DEFAULT);
	Cc8Body->setRotationEnable(false);
	Cc8Body->setCategoryBitmask(0x01);
	Cc8Body->setCollisionBitmask(0x00000001);
	Cc8Body->setContactTestBitmask(0x01);
	Cc8Body->setDynamic(false);
	tower3->setPhysicsBody(Cc8Body);
	//tower3->setPosition(Vec2(1100, 500));
	//_tileMap->addChild(tower3, 1);


	schedule(schedule_selector(MapScene::victory_judge), 1.0f);

	gold = 100;
	schedule(schedule_selector(MapScene::gold_get), 1.0f);
    pGoldTTF = Label::create(CCString::createWithFormat("GOLD:%i", gold)->getCString(), "fonts/Marker Felt.ttf", 40);
	pGoldTTF->setPosition(1500, 900);
	pGoldTTF->setName("gold");
	this->addChild(pGoldTTF, 2);

	purchase_key = 0;
	bought1 = 0;
	bought2 = 0;
	bought3 = 0;
	bought4 = 0;
	bought5 = 0;
	bought6 = 0;
	bought7 = 0;
	bought8 = 0;
	
	
	level = 1;
	schedule(schedule_selector(MapScene::level_get), 1.0f);
	//pLevelTTF = Label::create(CCString::createWithFormat("LEVEL:%i", level)->getCString(), "fonts/Marker Felt.ttf", 40);
	//pLevelTTF->setPosition(1500, 1000);
	//pLevelTTF->setName("LEVEL");
	//this->addChild(pLevelTTF, 2);

	kills = 0;
	deaths = 0;
	player1_mia = 1;
	player2_mia = 1;
	doge1_mia = 1;
	doge2_mia = 1;
	doge3_mia = 1;
	monster_mia = 1;
	schedule(schedule_selector(MapScene::kda_get), 1.0f);
	pKillsTTF = Label::create(CCString::createWithFormat("KILLS:%i", kills)->getCString(), "fonts/Marker Felt.ttf", 40);
	pKillsTTF->setPosition(1000, 1000);
	pKillsTTF->setName("kills");
	this->addChild(pKillsTTF, 2);
	pDeathsTTF = Label::create(CCString::createWithFormat("DEATHS:%i", deaths)->getCString(), "fonts/Marker Felt.ttf", 40);
	pDeathsTTF->setPosition(1200, 1000);
	pDeathsTTF->setName("deaths");
	this->addChild(pDeathsTTF, 2);

	auto openStore = MenuItemImage::create(
		"store.png",
		"store1.png",
		CC_CALLBACK_1(MapScene::open_store, this));
	openStore->setPosition(Vec2(100, 100));
	auto open = Menu::create(openStore, NULL);
	open->setPosition(Vec2::ZERO);
	this->addChild(open);


	layer->init();
	this->addChild(layer);
	//auto storeLayer = StoreLayer::create();
	//this->addChild(storeLayer);
	this->schedule(schedule_selector(MapScene::update), 0.01f, kRepeatForever, 0);
	return true;
}
void MapScene::menuCloseCallback(Ref* pSender)
{
	//Close the cocos2d-x game scene and quit the application
	Director::getInstance()->end();

}
void MapScene::update(float)
{
	layer->giveHealth(propertyget(1).HP);
	layer->giveMaxHealth(propertyget(1).MHP);
	layer->scheduleBlood();
	//storeLayer->give_gold(gold);
}
void MapScene::victory_judge(float)
{
	int blue_chealth = tower2->get().HP;
	int red_chealth = tower4->get().HP;
	if (blue_chealth <= 0) {
		auto victory = Sprite::create("victory.png");
		victory->setPosition(900, 500);
		this->addChild(victory);
	}
	if (red_chealth <= 0) {
		auto defeat = Sprite::create("defeat.png");
		defeat->setPosition(1100, 500);
		this->addChild(defeat);
	}
}
void MapScene::purchase(float)
{
	purchase_key = storeLayer->itemupdate;
	storeLayer->getgold = gold;
	int num = m_control->hero_choices["player_one"] * 100 + 10000;
	UnitsSprite* player_1 = (UnitsSprite*)m_control->getChildByTag(num);
	if (purchase_key == 1 && bought1 == 0)
	{
		gold -= 50;
		player_1->addproperty(800, "HP");
		purchase_key = 0;
		bought1 = 1;
	}
	if (purchase_key == 2 && bought2 == 0)
	{
		gold -= 60;
		player_1->addproperty(800, "MP");
		purchase_key = 0;
		bought2 = 1;
	}
	if (purchase_key == 3 && bought3 == 0)
	{
		gold -= 200;
		player_1->addproperty(50, "STA");
		purchase_key = 0;
		bought3 = 1;
	}
	if (purchase_key == 4 && bought4 == 0)
	{
		gold -= 300;
		player_1->addproperty(50, "DEF");
		purchase_key = 0;
		bought4 = 1;
	}
	if (purchase_key == 5  && bought5 == 0)
	{
		gold -= 400;
		player_1->addproperty(500, "ATK");
		purchase_key = 0;
		bought5 = 1;
	}
	if (purchase_key == 6 && bought6 == 0)
	{
		gold -= 500;
		player_1->addproperty(500, "ATKM");
		purchase_key = 0;
		bought6 = 1;
	}
	if (purchase_key == 7 && bought7 == 0)
	{
		gold -= 550;
		player_1->addproperty(50, "RHP");
		purchase_key = 0;
		bought7 = 1;
	}
	if (purchase_key == 8 && bought8 == 0)
	{
		gold -= 600;
		player_1->addproperty(50, "RMP");
		purchase_key = 0;
		bought8 = 1;
	}
}
void MapScene::gold_get(float)
{
	gold++;
	this->removeChildByName("gold");
	pGoldTTF = Label::create(CCString::createWithFormat("GOLD:%i", gold)->getCString(), "fonts/Marker Felt.ttf", 40);
	pGoldTTF->setName("gold");
	pGoldTTF->setPosition(1500, 900);
	this->addChild(pGoldTTF, 2);
}
void MapScene::level_get(float)
{
	int num = m_control->hero_choices["player_one"] * 100 + 10000;
	UnitsSprite* player_1 = (UnitsSprite*)m_control->getChildByTag(num);
	level = player_1->get().LEVEL;
	this->removeChildByName("level");
	pLevelTTF = Label::create(CCString::createWithFormat("LEVEL:%i", level)->getCString(), "fonts/Marker Felt.ttf", 40);
	pLevelTTF->setName("level");
	pLevelTTF->setPosition(1500, 1000);
	this->addChild(pLevelTTF, 2);
}
void MapScene::kda_get(float)
{
	int num1 = m_control->hero_choices["player_two"] * 100 + 20000;
	UnitsSprite* player_2 = (UnitsSprite*)m_control->getChildByTag(num1);
	int player2health = player_2->get().HP;
	int num2 = m_control->hero_choices["player_one"] * 100 + 10000;
	UnitsSprite* player_1 = (UnitsSprite*)m_control->getChildByTag(num2);
	int player1health = player_1->get().HP;

	UnitsSprite* mon1 = (UnitsSprite*)m_control->getChildByTag(10000020);
	int mon1health = mon1->get().HP;

	UnitsSprite* doge1 = (UnitsSprite*)m_control->getChildByTag(21000);
	int dog1health = doge1->get().HP;

	UnitsSprite* doge2 = (UnitsSprite*)m_control->getChildByTag(22000);
	int dog2health = doge2->get().HP;

	UnitsSprite* doge3 = (UnitsSprite*)m_control->getChildByTag(23000);
	int dog3health = doge3->get().HP;

	if (player2_mia == 1)
	{
		if (player2health <= 0)
		{
			player2_mia = 0;
			gold += 200;
			kills++;
			player_1->addproperty(500, "EXP");
		}
	}
	if (player2_mia == 0)
	{
		if (player2health > 0)
		{
			player2_mia = 1;
		}
	}
	if (doge1_mia == 1)
	{
		if (dog1health <= 0)
		{
			doge1_mia = 0;
			gold += 20;
			player_1->addproperty(50, "EXP");
		}
	}
	if (doge1_mia == 0)
	{
		if (dog1health > 0)
		{
			doge1_mia = 1;
		}
	}
	if (doge2_mia == 1)
	{
		if (dog2health <= 0)
		{
			doge2_mia = 0;
			gold += 20;
			player_1->addproperty(50, "EXP");
		}
	}
	if (doge2_mia == 0)
	{
		if (dog2health > 0)
		{
			doge2_mia = 1;
		}
	}
	if (doge3_mia == 1)
	{
		if (dog3health <= 0)
		{
			doge3_mia = 0;
			gold += 20;
			player_1->addproperty(50, "EXP");
		}
	}
	if (doge3_mia == 0)
	{
		if (dog3health > 0)
		{
			doge3_mia = 1;
		}
	}
	if (monster_mia == 1)
	{
		if (mon1health <= 0)
		{
			monster_mia = 0;
			gold += 500;
			player_1->addproperty(500, "EXP");
		}
	}
	if (monster_mia == 0)
	{
		if (mon1health > 0)
		{
			monster_mia = 1;
		}
	}
	this->removeChildByName("kills");
	pKillsTTF = Label::create(CCString::createWithFormat("KILLS:%i", kills)->getCString(), "fonts/Marker Felt.ttf", 40);
	pKillsTTF->setName("kills");
	pKillsTTF->setPosition(1000, 1000);
	this->addChild(pKillsTTF, 2);

	if (player1_mia == 1)
	{
		if (player1health <= 0)
		{
			player1_mia = 0;
			deaths++;
		}
	}
	if (player1_mia == 0)
	{
		if (player1health > 0)
		{
			player1_mia = 1;
		}
	}
	this->removeChildByName("deaths");
	pDeathsTTF = Label::create(CCString::createWithFormat("DEATHS:%i", deaths)->getCString(), "fonts/Marker Felt.ttf", 40);
	pDeathsTTF->setName("deaths");
	pDeathsTTF->setPosition(1200, 1000);
	this->addChild(pDeathsTTF, 2);
}
void MapScene::open_store(Ref* pSender)
{
	storeLayer = StoreLayer::create();
	this->addChild(storeLayer);
	storeLayer->setName("storeLayer");
	auto closeStore = MenuItemImage::create(
		"close1.png",
		"close1.png",
		CC_CALLBACK_1(MapScene::close_store, this));
	closeStore->setPosition(Vec2(1350, 850));
	auto close = Menu::create(closeStore, NULL);
	close->setPosition(Vec2::ZERO);
	addChild(close, 5);
	close->setName("close");
	schedule(schedule_selector(MapScene::purchase), 1.0f);
}
void MapScene::close_store(Ref* pSender)
{
	this->unschedule(schedule_selector(MapScene::purchase));
	this->removeChildByName("storeLayer");
	this->removeChildByName("close");
}

