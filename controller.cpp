#include "controller.h"


USING_NS_CC;


void m_controller::chose_character(int player,int character)
{
	int tag = player*10000+character*100;
	//int condition = static_cast<int>(Player::one);

		if (player==1)
		{
			player1_tag = tag;
			if (character == 1)
			{
				//SpriteCatherine* Playerone = SpriteCatherine::createWithSpriteFrameName("snow10_0.png");
				SpriteCatherine* Playerone = SpriteCatherine::getInstance();
			//	Playerone->setPosition(Vec2(100, 100));
			//	Playerone->setTag(tag);
				this->addChild(Playerone);
			}	
			else if (character == 2)
			{
				//SpriteCatherine* Playerone = SpriteCatherine::createWithSpriteFrameName("snow20_0.png");
				SpriteCatherine* Playerone = SpriteCatherine::getInstance();
			//	Playerone->setPosition(Vec2(100, 100));
				Playerone->setTag(tag);
				this->addChild(Playerone);
			}
		}
		else if (player == 2)
		{
			player2_tag = tag;
			if (character == 1)
			{
				//SpriteCatherine* Playertwo = SpriteCatherine::createWithSpriteFrameName("snow10_0.png");
				SpriteCatherine* Playertwo = SpriteCatherine::getInstance();
			//	Playertwo->setPosition(Vec2(100, 100));
				Playertwo->setTag(tag);
				this->addChild(Playertwo);
			}
			else if (character == 2)
			{
				//SpriteCatherine* Playertwo = SpriteCatherine::createWithSpriteFrameName("snow20_0.png");
				SpriteCatherine* Playertwo = SpriteCatherine::getInstance();
			//	Playertwo->setPosition(Vec2(100, 100));
				Playertwo->setTag(tag);
				this->addChild(Playertwo);
			}
		}
}








// Implementation of the keyboard event callback function prototype
void m_controller::reexecute(float)
{
	sptime = 0;
	this->unschedule(schedule_selector(m_controller::reexecute));
}

bool m_controller::PreventRepeated()
{
//	float spt = Catherine->isexecute(-1);
	/*
	 if(sptime == 0)
	 {
		 float spt= Catherine->isexecute(-1);
		 if (spt == 1)
		 {
			 float interval = Castinterval;
			 sptime=1;
			 Catherine->schedule(schedule_selector(m_controller::reexecute), interval, 1, 0);
			 return false;
		 }
		 else if(spt!=0)
		 {
			 sptime = 1;
			 Catherine->scheduleOnce(schedule_selector(m_controller::reexecute), spt);
			 return false;
		 } 
		 else
			 return true;
	 }
	 else if (sptime == 1)
	 {
		 return false;
	 }*/
	return true;
}


void m_controller::onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event)
{
	//Catherine->stop_rb();
	//Catherine->move_rb();
	//this->addChild(Catherine);
	//Catherine->setPosition(Point(Vec2(100, 200)));
	if (PreventRepeated())
	{ 
	
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
}


void m_controller::onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event)
{


	if (!PreventRepeated())
		return;
	/*
	float sptime = Catherine->isexecute(-1);
	if (sptime == 1)
	{
		float interval = Castinterval;
		this->schedule(schedule_selector(m_controller::reexecute), interval, 1, 0);
		return;
	}
	else if (sptime != 0)
	{
		this->schedule(schedule_selector(m_controller::reexecute), sptime, 1, 0);
		return;
	}*/
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

bool m_controller::onTouchBegan(Touch* touch, Event* event)
{
	
	if (!PreventRepeated())
		return true;
	Catherine->pos = touch->getLocation();
	//Catherine->move();
	return true;
}
void m_controller::onTouchMoved(Touch* touch, Event* event)
{
	//Catherine->move();
//	Catherine->pos = touch->getLocation();
}
void m_controller::onTouchEnded(Touch* touch, Event* event)
{
	//Catherine->pos = touch->getLocation();
//	Catherine->pos = touch->getLocation();

}




void m_controller::onMouseDown(Event *event)
{
	if (!PreventRepeated())
		return;
	// to illustrate the event....
	EventMouse* e = (EventMouse*)event;
	//string str = "Mouse Down detected, Key: ";
	//str += tostr(e->getMouseButton());
//	Catherine->pos = e->getLocation();
	//Catherine->pos = convertToNodeSpace(Catherine->pos);
	//Catherine->move();
}



void m_controller::onMouseUp(Event *event)
{
	// to illustrate the event....
	EventMouse* e = (EventMouse*)event;
	//string str = "Mouse Up detected, Key: ";
	//str += tostr(e->getMouseButton());
//	Catherine->pos = e->getLocation();
}

void m_controller::onMouseMove(Event *event)
{
	// to illustrate the event....
	EventMouse* e = (EventMouse*)event;
	Catherine->mouse_pos = Point(e->getCursorX(),e->getCursorY());
	mouse_sprite->setPosition(e->getCursorX(), e->getCursorY());
	//string str = "MousePosition X:";
	//str = str + tostr(e->getCursorX()) + " Y:" + tostr(e->getCursorY());
//	Catherine->pos = e->getLocation();
}

void m_controller::onMouseScroll(Event *event)
{
	// to illustrate the event....
	EventMouse* e = (EventMouse*)event;
	//string str = "Mouse Scroll detected, X: ";
	//str = str + tostr(e->getScrollX()) + " Y: " + tostr(e->getScrollY());
//	Catherine->pos = e->getLocation();
}


bool m_controller::onContactBegin (PhysicsContact& contact) 
{

	auto bodyA = (Sprite*)(contact.getShapeA()->getBody()->getNode());
	auto bodyB = (Sprite*)(contact.getShapeB()->getBody()->getNode());
	if (!bodyA || !bodyB)
		return false;
	int tagA = bodyA->getTag();
	int tagB = bodyB->getTag();
	if (tagA == tagB && tagA == 100001)
		return false ;
	if (tagA == 100001)
	{

		//contact.getShapeA->get();
	//	bodyA->removeFromParentAndCleanup(true);
		bodyA->removeFromParent();
	//	bodyA->setVisible(false);
		
		
	}
	if (tagB == 100001)
	{
	//	bodyB->removeFromParentAndCleanup(true);
		bodyB->removeFromParent();
		//bodyB->setVisible(false);
		
	}
	
	return true;
}



m_controller* m_controller::instance = NULL;
m_controller::m_controller()
{

}

m_controller* m_controller::getInstance()
{
	if (instance == NULL)
	{
		instance = new m_controller();
		instance->init();
	}
	return instance;
}

bool m_controller::init()
{

	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	auto listener = EventListenerKeyboard::create();
	listener->onKeyPressed = CC_CALLBACK_2(m_controller::onKeyPressed, this);
	listener->onKeyReleased = CC_CALLBACK_2(m_controller::onKeyReleased, this);

	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);

	auto _mouseListener = EventListenerMouse::create();
	_mouseListener->onMouseMove = CC_CALLBACK_1(m_controller::onMouseMove, this);
	_mouseListener->onMouseUp = CC_CALLBACK_1(m_controller::onMouseUp, this);
	_mouseListener->onMouseDown = CC_CALLBACK_1(m_controller::onMouseDown, this);
	_mouseListener->onMouseScroll = CC_CALLBACK_1(m_controller::onMouseScroll, this);

	_eventDispatcher->addEventListenerWithSceneGraphPriority(_mouseListener, this);
	//this->setTouchEnabled(true);
	auto listener1 = EventListenerTouchOneByOne::create();
	listener1->setSwallowTouches(true);
	listener1->onTouchBegan = CC_CALLBACK_2(m_controller::onTouchBegan, this);
	listener1->onTouchMoved = CC_CALLBACK_2(m_controller::onTouchMoved, this);
	listener1->onTouchEnded = CC_CALLBACK_2(m_controller::onTouchEnded, this);
	//listener1->onTouchCancelled = CC_CALLBACK_2(HelloWorld::onTouchesCancelled, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener1, this);



	EventListenerPhysicsContact* evContact = EventListenerPhysicsContact::create();
	evContact->onContactBegin = CC_CALLBACK_1(m_controller::onContactBegin, this);
	//evContact->onContactSeparate= [](PhysicsContact& contact){return true;  };
	_eventDispatcher->addEventListenerWithSceneGraphPriority(evContact, this);
	//mouse_sprite->setScale(0.5f);
	//ShowCursor(FALSE);
	//mouse_sprite->setAnchorPoint(Point(mouse_sprite->getContentSize().width,mouse_sprite->getContentSize().height));
	mouse_sprite->setAnchorPoint(Point(0,1));
	this->addChild(mouse_sprite, 2);
	Catherine->setPosition(80, 80);
	this->addChild(Catherine, 1);
	
//	Catherine_test->setPosition(Vec2(visibleSize.width / 2, visibleSize.height*0.3));
//	Catherine_test->pos = Vec2(120, 120);
//	this->addChild(Catherine_two, 1);


	chose_character(1,1);
	
	return true;

}
/*
void m_controller::clockon()
{

}*/
