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
				Playerone->setPosition(Vec2(300, 300));
				Playerone->pos = Vec2(300, 300);
				Playerone->setTag(tag);
				hero_choices["player_one"] = 1;
				this->addChild(Playerone);
				//return Playerone;
			}
			else if (character == 2)
			{
				SpriteNighttide* Playerone = SpriteNighttide::getInstance();
				Playerone->setPosition(Vec2(300, 300));
				Playerone->pos = Vec2(300, 300);
				Playerone->setTag(tag);
				hero_choices["player_one"] = 2;
				this->addChild(Playerone);
				//return Playerone;
			}
			else if (character == 3)
			{
				SpriteRaider* Playerone = SpriteRaider::getInstance();
				Playerone->setPosition(Vec2(300, 300));
				Playerone->pos = Vec2(300, 300);
				Playerone->setTag(tag);
				hero_choices["player_one"] = 3;
				this->addChild(Playerone);
			}
			else if (character == 4)
			{
				SpritePecola* Playerone = SpritePecola::getInstance();
				Playerone->setPosition(Vec2(300, 300));
				Playerone->pos = Vec2(300, 300);
				Playerone->setTag(tag);
				hero_choices["player_one"] = 4;
				this->addChild(Playerone);
			}
			else
				return;

		}
		else if (player == 2)
		{
			player2_tag = tag;
			if (character == 1)
			{
				//SpriteCatherine* Playertwo = SpriteCatherine::createWithSpriteFrameName("snow10_0.png");
				SpriteCatherine* Playertwo = SpriteCatherine::getInstance();
				Playertwo->setPosition(Vec2(1500, 150));
				Playertwo->pos = Vec2(300, 300);
				Playertwo->setTag(tag);
				hero_choices["player_two"] = 1;
				this->addChild(Playertwo);
				//return Playertwo;
			}
			else if (character == 2)
			{
				//SpriteCatherine* Playertwo = SpriteCatherine::createWithSpriteFrameName("snow20_0.png");
				SpriteNighttide* Playertwo = SpriteNighttide::getInstance();
				Playertwo->setPosition(Vec2(1500, 150));
				Playertwo->pos = Vec2(300, 300);
				Playertwo->setTag(tag);
				hero_choices["player_two"] = 2;
				this->addChild(Playertwo);
				//return Playertwo;
			}
			else if (character == 3)
			{
				SpriteRaider* Playertwo = SpriteRaider::getInstance();
				Playertwo->setPosition(Vec2(300, 300));
				Playertwo->pos = Vec2(300, 300);
				Playertwo->setTag(tag);
				hero_choices["player_two"] = 3;
				this->addChild(Playertwo);
			}
			else if (character == 4)
			{
				SpritePecola* Playertwo = SpritePecola::getInstance();
				Playertwo->setPosition(Vec2(300, 300));
				Playertwo->pos = Vec2(300, 300);
				Playertwo->setTag(tag);
				hero_choices["player_two"] = 4;
				this->addChild(Playertwo);
			}
			else
				return;
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
//	if(player1_tag==10100)
//		auto m_sprite = this->getChildByTag(player1_tag);
	int choice_one = hero_choices["player_one"];
	if (choice_one == 1)
	{
		SpriteCatherine* m_sprite = (SpriteCatherine*)this->getChildByTag(player1_tag);
		if (PreventRepeated())
		{

			if (keyCode == EventKeyboard::KeyCode::KEY_Q)
			{
				m_sprite->skillst();
			}
			else if (keyCode == EventKeyboard::KeyCode::KEY_W)
			{
				m_sprite->skillnd(2);
			}
			else if (keyCode == EventKeyboard::KeyCode::KEY_E)
			{
				m_sprite->skillrd();
			}
			else if (keyCode == EventKeyboard::KeyCode::KEY_R)
			{
				Sprite* target = (Sprite*)getChildByTag(m_lockTag);
				if (target != NULL)
					m_sprite->skillth(target);
			}
		}
	}
	else if(choice_one==2)
	{
		SpriteNighttide* m_sprite = (SpriteNighttide*)this->getChildByTag(player1_tag);
		if (PreventRepeated())
		{

			if (keyCode == EventKeyboard::KeyCode::KEY_Q)
			{
				m_sprite->skillst();
			}
			else if (keyCode == EventKeyboard::KeyCode::KEY_W)
			{
				m_sprite->skillnd();
			}
			else if (keyCode == EventKeyboard::KeyCode::KEY_E)
			{
				Sprite* target = (Sprite*)getChildByTag(m_lockTag);
				if (target != NULL)
				m_sprite->skillrd(target);
			}
			else if (keyCode == EventKeyboard::KeyCode::KEY_R)
			{
				Sprite* target = (Sprite*)getChildByTag(m_lockTag);
				if (target != NULL)
					m_sprite->skillth(target);
			}
		}
	}
	else if (choice_one == 3)
	{
		SpriteRaider* m_sprite = (SpriteRaider*)this->getChildByTag(player1_tag);
		if (PreventRepeated())
		{

			if (keyCode == EventKeyboard::KeyCode::KEY_Q)
			{
				m_sprite->skillst(1);
			}
			else if (keyCode == EventKeyboard::KeyCode::KEY_W)
			{
				m_sprite->skillnd();
			}
			else if (keyCode == EventKeyboard::KeyCode::KEY_E)
			{
					m_sprite->skillrd();
			}
			else if (keyCode == EventKeyboard::KeyCode::KEY_R)
			{
				Sprite* target = (Sprite*)getChildByTag(m_lockTag);
				if (target != NULL)
					m_sprite->skillth(target);
			}
		}
	}
	else if (choice_one == 4)
	{
		SpritePecola* m_sprite = (SpritePecola*)this->getChildByTag(player1_tag);
		if (PreventRepeated())
		{

			if (keyCode == EventKeyboard::KeyCode::KEY_Q)
			{
				Sprite* target = (Sprite*)getChildByTag(m_lockTag);
				if (target != NULL)
					m_sprite->skillst(target);
			}
			else if (keyCode == EventKeyboard::KeyCode::KEY_W)
			{
				m_sprite->skillnd();
			}
			else if (keyCode == EventKeyboard::KeyCode::KEY_E)
			{
				m_sprite->skillrd();
			}
			else if (keyCode == EventKeyboard::KeyCode::KEY_R)
			{
				Sprite* target = (Sprite*)getChildByTag(m_lockTag);
				if (target != NULL)
					m_sprite->skillth(target);
			}
		}
	}
}


void m_controller::onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event)
{


	if (!PreventRepeated())
		return;
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
	int choice_one = hero_choices["player_one"];
	if (choice_one == 1)
	{
		SpriteCatherine* m_sprite = (SpriteCatherine*)this->getChildByTag(player1_tag);
		m_sprite->pos = Vec2(touch->getLocation().x - map_skewing.x, touch->getLocation().y - map_skewing.y);
	}
	else if (choice_one == 2)
	{
		SpriteNighttide* m_sprite = (SpriteNighttide*)this->getChildByTag(player1_tag);
		m_sprite->pos = Vec2(touch->getLocation().x - map_skewing.x, touch->getLocation().y - map_skewing.y);
	}
	else if (choice_one == 3)
	{
		SpriteRaider* m_sprite = (SpriteRaider*)this->getChildByTag(player1_tag);
		m_sprite->pos = Vec2(touch->getLocation().x - map_skewing.x, touch->getLocation().y - map_skewing.y);
	}
	else if (choice_one == 4)
	{
		SpritePecola* m_sprite = (SpritePecola*)this->getChildByTag(player1_tag);
		m_sprite->pos = Vec2(touch->getLocation().x - map_skewing.x, touch->getLocation().y - map_skewing.y);
	}
	
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
//	if (!PreventRepeated())
//		return;
	// to illustrate the event....
	EventMouse* e = (EventMouse*)event;
	int choice_one = hero_choices["player_one"];
	if (choice_one == 1)
	{
		SpriteCatherine* m_sprite = (SpriteCatherine*)this->getChildByTag(player1_tag);
		if (m_lockTag_now == m_lockTag && m_lockTag != 0)
			m_sprite->normal_attack(0);
	}
	else if (choice_one == 2)
	{
		SpriteNighttide* m_sprite = (SpriteNighttide*)this->getChildByTag(player1_tag);
		if (m_lockTag_now == m_lockTag && m_lockTag != 0)
			m_sprite->normal_attack(0);
	}
	else if (choice_one == 3)
	{
		SpriteRaider* m_sprite = (SpriteRaider*)this->getChildByTag(player1_tag);
		if (m_lockTag_now == m_lockTag && m_lockTag != 0)
			m_sprite->normal_attack(0);
	}
	else if (choice_one == 4)
	{
		SpritePecola* m_sprite = (SpritePecola*)this->getChildByTag(player1_tag);
		if (m_lockTag_now == m_lockTag && m_lockTag != 0)
			m_sprite->normal_attack(0);
	}
}



void m_controller::onMouseUp(Event *event)
{
	EventMouse* e = (EventMouse*)event;
}

void m_controller::onMouseMove(Event *event)
{
	EventMouse* e = (EventMouse*)event;


	int choice_one = hero_choices["player_one"];
	if (choice_one == 1)
	{
		SpriteCatherine* m_sprite = (SpriteCatherine*)this->getChildByTag(player1_tag);
		m_sprite->mouse_pos = Point(e->getCursorX() - map_skewing.x, e->getCursorY() - map_skewing.y);
	}
	else if (choice_one == 2)
	{
		SpriteNighttide* m_sprite = (SpriteNighttide*)this->getChildByTag(player1_tag);
		m_sprite->mouse_pos = Point(e->getCursorX() - map_skewing.x, e->getCursorY() - map_skewing.y);
	}
	else if (choice_one == 3)
	{
		SpriteRaider* m_sprite = (SpriteRaider*)this->getChildByTag(player1_tag);
		m_sprite->mouse_pos = Point(e->getCursorX() - map_skewing.x, e->getCursorY() - map_skewing.y);
	}
	else if (choice_one == 4)
	{
		SpritePecola* m_sprite = (SpritePecola*)this->getChildByTag(player1_tag);
		m_sprite->mouse_pos = Point(e->getCursorX() - map_skewing.x, e->getCursorY() - map_skewing.y);
	}
	mouse_sprite->setPosition(e->getCursorX()- map_skewing.x, e->getCursorY()-map_skewing.y);
	
}

void m_controller::onMouseScroll(Event *event)
{

	EventMouse* e = (EventMouse*)event;
	//string str = "Mouse Scroll detected, X: ";
	//str = str + tostr(e->getScrollX()) + " Y: " + tostr(e->getScrollY());
//	Catherine->pos = e->getLocation();
}


bool m_controller::onContactBegin (PhysicsContact& contact) 
{
	auto bodyA = (UnitsSprite*)(contact.getShapeA()->getBody()->getNode());
	auto bodyB = (UnitsSprite*)(contact.getShapeB()->getBody()->getNode());
	if (!bodyA || !bodyB)
		return false;
	int tagA = bodyA->getTag();
	int tagB = bodyB->getTag();
	if (tagA == tagB && tagA == 100001)
		return false ;
	if (tagA == tagB && tagA == 100002)
		return false;
	if (tagA == tagB && tagA == 100003)
		return false;
	if (tagA == tagB && tagA == 100004)
		return false;
	if (tagA == tagB && tagA == 100101)
		return false;
	if (tagA == tagB && tagA == 100102)
		return false;
	if (tagA == tagB && tagA == 100103)
		return false;
	if (tagA == tagB && tagA == 100104)
		return false;
	
	if (tagA == 100001&&(tagB!= 10100|| tagB != 10200||tagB!= 10300 || tagB != 10400))
	{
		if(tagB==20100||tagB== 20200 || tagB == 20300||tagB == 20400||tagB == 10000007|| tagB == 10000013||tagB== 100)
		{ 
			int Hp = bodyB->get().HP ;
			if (Hp <= 0)
			{
				mouse_sprite->setTexture("mouse.png");
				return false;
			}
			int dam = bodyB->receivetotaldamage(bodyA->get(), 0, 0, 0,0);
			bodyB->changeproperty(Hp-dam,"HP");
			if (/* tagB == m_lockTag&&*/ Hp <=dam)
				mouse_sprite->setTexture("mouse.png");
			bodyA->removeFromParentAndCleanup(true);
		//bodyA->setVisible(true);
		}
	}
	if (tagA == 100002 &&(tagB != 10100 || tagB != 10200 || tagB != 10300 || tagB != 10400))
	{
		if (tagB == 20100 || tagB == 20200 || tagB == 20300 || tagB == 20400 || tagB == 10000007 || tagB == 10000013 || tagB == 100)
		{
			int Hp = bodyB->get().HP;
			if (Hp <= 0)
			{
				mouse_sprite->setTexture("mouse.png");
				return false;
			}
			int dam = bodyB->receivetotaldamage(bodyA->get(), 0, 0, 0, 0);
			
			dam=dam /5;
			bodyB->temporary_property(10, -dam, "RHP");
		//	bodyB->addproperty(- dam, "HP");
			if (m_lockTag == m_lockTag_now &&Hp <= dam)
				mouse_sprite->setTexture("mouse.png");
			//bodyA->removeFromParentAndCleanup(true);
		}
	}
	if (tagA == 100101 && (tagB != 20100 || tagB != 20200 || tagB != 20300 || tagB != 20400))
	{
		if (tagB == 10100 || tagB == 10200 || tagB == 10300 || tagB == 10400 || tagB == 10000000 || tagB == 10000012 || tagB == 100)
		{
			int Hp = bodyB->get().HP;
			if (Hp <= 0)
			{
				mouse_sprite->setTexture("mouse.png");
				return false;
			}
			int dam = bodyB->receivetotaldamage(bodyA->get(), 0, 0, 0, 0);
			bodyB->changeproperty(Hp - dam, "HP");
			if (/* tagB == m_lockTag&&*/ Hp <= dam)
				mouse_sprite->setTexture("mouse.png");
			bodyA->removeFromParentAndCleanup(true);
			//bodyA->setVisible(true);
		}
	}
	if (tagA == 100102 && (tagB != 20100 || tagB != 20200 || tagB != 20300 || tagB != 20400))
	{
		if (tagB == 10100 || tagB == 10200 || tagB == 10300 || tagB == 10400 || tagB == 10000000 || tagB == 10000012 || tagB == 100)
		{
			int Hp = bodyB->get().HP;
			if (Hp <= 0)
			{
				mouse_sprite->setTexture("mouse.png");
				return false;
			}
			int dam = bodyB->receivetotaldamage(bodyA->get(), 0, 0, 0, 0);

			dam = dam / 5;
			bodyB->temporary_property(10, -dam, "RHP");
			//	bodyB->addproperty(- dam, "HP");
			if (m_lockTag == m_lockTag_now && Hp <= dam)
				mouse_sprite->setTexture("mouse.png");
			//bodyA->removeFromParentAndCleanup(true);
		}
	}
/*
	if (tagA == 100001&& (tagB == 20100 || tagB == 20200))
	{
	//	bodyB->removeFromParentAndCleanup(true);
		//bodyB->removeFromParent();
		bodyB->get().HP - 700;
			if(tagB== m_lockTag && bodyB->get().HP <= 0)
				mouse_sprite->setTexture("mouse.png");
		bodyA->setVisible(true);
		
	}*/


	if (tagB == 100001&& (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100))
	{
		int Hp = bodyA->get().HP; 
		if (Hp <= 0)
		{
			mouse_sprite->setTexture("mouse.png");
			return false;
		}	//CCLOG("%d", bodyA->get().ATK);
		int dam = bodyA->receivetotaldamage(bodyB->get(),0,0,0, 0);
		bodyA->changeproperty(Hp - dam, "HP");
		if (/* tagB == m_lockTag&&*/ Hp <= dam)
			mouse_sprite->setTexture("mouse.png");
		bodyB->removeFromParentAndCleanup(true);
	}
	if (tagB == 100002 && (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100))
	{
		int Hp = bodyA->get().HP;
		if (Hp <= 0)
		{
			mouse_sprite->setTexture("mouse.png");
			return false;
		}	//CCLOG("%d", bodyA->get().ATK);
		int dam = bodyA->receivetotaldamage(bodyB->get(), 0, 0, 0, 0);
		dam = dam / 5;
		bodyA->temporary_property(10, -dam, "RHP");
		if (m_lockTag == m_lockTag_now && Hp <= dam)
			mouse_sprite->setTexture("mouse.png");
	//	bodyB->removeFromParentAndCleanup(true);
	}
	if (tagB == 100101 && (tagA == 10100 || tagA == 10200 || tagA == 10300 || tagA == 10400 || tagA == 10000000 || tagA == 10000012 || tagA == 100))
	{
		int Hp = bodyA->get().HP;
		if (Hp <= 0)
		{
			mouse_sprite->setTexture("mouse.png");
			return false;
		}	//CCLOG("%d", bodyA->get().ATK);
		int dam = bodyA->receivetotaldamage(bodyB->get(), 0, 0, 0, 0);
		bodyA->changeproperty(Hp - dam, "HP");
		if (/* tagB == m_lockTag&&*/ Hp <= dam)
			mouse_sprite->setTexture("mouse.png");
		bodyB->removeFromParentAndCleanup(true);
	}
	if (tagB == 100102 && (tagA == 10100 || tagA == 10200 || tagA == 10300 || tagA == 10400 || tagA == 10000000 || tagA == 10000012 || tagA == 100))
	{
		int Hp = bodyA->get().HP;
		if (Hp <= 0)
		{
			mouse_sprite->setTexture("mouse.png");
			return false;
		}	//CCLOG("%d", bodyA->get().ATK);
		int dam = bodyA->receivetotaldamage(bodyB->get(), 0, 0, 0, 0);
		dam = dam / 5;
		bodyA->temporary_property(10, -dam, "RHP");
		if (m_lockTag == m_lockTag_now && Hp <= dam)
			mouse_sprite->setTexture("mouse.png");
		//	bodyB->removeFromParentAndCleanup(true);
	}
	/*
	if (tagA == 1000000 && (tagB == 20100 || tagB == 20200|| tagB == 10000007 || tagB == 10000013))
	{
		if (bodyB->get().HP > 0)
		{
			m_lockTag = tagB;
			Catherine->target = (UnitsSprite*)getChildByTag(m_lockTag);
			m_lockTag_now = m_lockTag;
			mouse_sprite->setTexture("mouse_attack.png");
			if(tagB== 10000007 || tagB == 10000013)
				Catherine->target = (UnitsSprite*)this->getParent()->getChildByTag(m_lockTag);
		}
	}
	if (tagB == 1000000 && (tagA == 20100 || tagA == 20200|| tagA == 10000007 || tagA == 10000013))
	{
		if (bodyA->get().HP > 0)
		{
			m_lockTag = tagA;
			mouse_sprite->setTexture("mouse_attack.png");
			m_lockTag_now = m_lockTag;
			Catherine->target = (UnitsSprite*)getChildByTag(m_lockTag);
			if (tagA == 10000007 || tagA == 10000013)
				Catherine->target = (UnitsSprite*)this->getParent()->getChildByTag(m_lockTag);
		}
	}*/
	if (hero_choices["player_one"] == 1)
	{
		SpriteCatherine* player_one = (SpriteCatherine*)this->getChildByTag(player1_tag);
		if (tagA == 1000000 && (tagB == 20100 || tagB == 20200 || tagB == 20300 || tagB == 20400 || tagB == 10000007 || tagB == 10000013 || tagB == 100))
		{
			if (bodyB->get().HP > 0)
			{
				m_lockTag = tagB;
				player_one->target = (UnitsSprite*)getChildByTag(m_lockTag);
				m_lockTag_now = m_lockTag;
				mouse_sprite->setTexture("mouse_attack.png");
				if (tagB == 10000007 || tagB == 10000013)
					player_one->target = (UnitsSprite*)this->getParent()->getChildByTag(m_lockTag);
			}
		}
		if (tagB == 1000000 && (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100))
		{
			if (bodyA->get().HP > 0)
			{
				m_lockTag = tagA;
				mouse_sprite->setTexture("mouse_attack.png");
				m_lockTag_now = m_lockTag;
				player_one->target = (UnitsSprite*)getChildByTag(m_lockTag);
				if (tagA == 10000007 || tagA == 10000013)
					player_one->target = (UnitsSprite*)this->getParent()->getChildByTag(m_lockTag);
			}
		}
	}
	else if (hero_choices["player_one"] == 2)
	{
		SpriteNighttide* player_one = (SpriteNighttide*)this->getChildByTag(player1_tag);
		if (tagA == 1000000 && (tagB == 20100 || tagB == 20200 || tagB == 20300 || tagB == 20400 || tagB == 10000007 || tagB == 10000013 || tagB == 100))
		{
			if (bodyB->get().HP > 0)
			{
				m_lockTag = tagB;
				player_one->target = (UnitsSprite*)getChildByTag(m_lockTag);
				m_lockTag_now = m_lockTag;
				mouse_sprite->setTexture("mouse_attack.png");
				if (tagB == 10000007 || tagB == 10000013)
					player_one->target = (UnitsSprite*)this->getParent()->getChildByTag(m_lockTag);
			}
		}
		if (tagB == 1000000 && (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100))
		{
			if (bodyA->get().HP > 0)
			{
				m_lockTag = tagA;
				mouse_sprite->setTexture("mouse_attack.png");
				m_lockTag_now = m_lockTag;
				player_one->target = (UnitsSprite*)getChildByTag(m_lockTag);
				if (tagA == 10000007 || tagA == 10000013)
					player_one->target = (UnitsSprite*)this->getParent()->getChildByTag(m_lockTag);
			}
		}
	}
	else if (hero_choices["player_one"] == 3)
	{
		SpriteRaider* player_one = (SpriteRaider*)this->getChildByTag(player1_tag);
		if (tagA == 1000000 && (tagB == 20100 || tagB == 20200 || tagB == 20300 || tagB == 20400 || tagB == 10000007 || tagB == 10000013 || tagB == 100))
		{
			if (bodyB->get().HP > 0)
			{
				m_lockTag = tagB;
				player_one->target = (UnitsSprite*)getChildByTag(m_lockTag);
				m_lockTag_now = m_lockTag;
				mouse_sprite->setTexture("mouse_attack.png");
				if (tagB == 10000007 || tagB == 10000013)
					player_one->target = (UnitsSprite*)this->getParent()->getChildByTag(m_lockTag);
			}
		}
		if (tagB == 1000000 && (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100))
		{
			if (bodyA->get().HP > 0)
			{
				m_lockTag = tagA;
				mouse_sprite->setTexture("mouse_attack.png");
				m_lockTag_now = m_lockTag;
				player_one->target = (UnitsSprite*)getChildByTag(m_lockTag);
				if (tagA == 10000007 || tagA == 10000013)
					player_one->target = (UnitsSprite*)this->getParent()->getChildByTag(m_lockTag);
			}
		}
	}
	else if (hero_choices["player_one"] == 4)
	{
		SpritePecola* player_one = (SpritePecola*)this->getChildByTag(player1_tag);
		if (tagA == 1000000 && (tagB == 20100 || tagB == 20200 || tagB == 20300 || tagB == 20400 || tagB == 10000007 || tagB == 10000013 || tagB == 100))
		{
			if (bodyB->get().HP > 0)
			{
				m_lockTag = tagB;
				player_one->target = (UnitsSprite*)getChildByTag(m_lockTag);
				m_lockTag_now = m_lockTag;
				mouse_sprite->setTexture("mouse_attack.png");
				if (tagB == 10000007 || tagB == 10000013)
					player_one->target = (UnitsSprite*)this->getParent()->getChildByTag(m_lockTag);
			}
		}
		if (tagB == 1000000 && (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100))
		{
			if (bodyA->get().HP > 0)
			{
				m_lockTag = tagA;
				mouse_sprite->setTexture("mouse_attack.png");
				m_lockTag_now = m_lockTag;
				player_one->target = (UnitsSprite*)getChildByTag(m_lockTag);
				if (tagA == 10000007 || tagA == 10000013)
					player_one->target = (UnitsSprite*)this->getParent()->getChildByTag(m_lockTag);
			}
		}
	}





	//CCLOG("%d", bodyA->getPosition().x);
	//CCLOG("%d", bodyB->getPosition().x);
	return true;
}
/*
bool m_controller::onContactPreSolve(PhysicsContact& contact, PhysicsContactPreSolve& solve)
{
	auto bodyA = (UnitsSprite*)(contact.getShapeA()->getBody()->getNode());
	auto bodyB = (UnitsSprite*)(contact.getShapeB()->getBody()->getNode());
	int tagA = bodyA->getTag();
	int tagB = bodyB->getTag();
	if (tagA == 1000000 && (tagB == 20100 || tagB == 20200))
	{
		if(bodyB->get().HP<=0)
			mouse_sprite->setTexture("mouse.png");
	}
	if (tagB == 1000000 && (tagA == 20100 || tagA == 20200))
	{
		if (bodyA->get().HP <= 0)
			mouse_sprite->setTexture("mouse.png");
	}
	return true;
}*/



bool m_controller::onContactSeparate(PhysicsContact& contact)
{
	auto bodyA = (UnitsSprite*)(contact.getShapeA()->getBody()->getNode());
	auto bodyB = (UnitsSprite*)(contact.getShapeB()->getBody()->getNode());
	int tagA = bodyA->getTag();
	int tagB = bodyB->getTag();
	if (tagA == 1000000 && (tagB == 20100 || tagB == 20200 || tagB == 20300 || tagB == 20400 || tagB == 10000007 || tagB == 10000013 || tagB == 100))
	{
		m_lockTag_now = 0;
		mouse_sprite->setTexture("mouse.png");
	}
	if (tagB == 1000000 && (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100))
	{
		m_lockTag_now = 0;
		mouse_sprite->setTexture("mouse.png");
	}
	return true;
}

Vec2 m_controller::getmouseloc()
{
	return mouse_sprite->getPosition();
}

void m_controller::setscale(float size)
{
	//Catherine->setScale(size);
	//Catherine2->setScale(size);

	if (hero_choices["player_one"] == 1)
	{
		SpriteCatherine* player_one = (SpriteCatherine*)this->getChildByTag(player1_tag);
		player_one->setScale(size);
	}
	else if (hero_choices["player_one"] == 2)
	{
		SpriteNighttide* player_one = (SpriteNighttide*)this->getChildByTag(player1_tag);
		player_one->setScale(size);
	}
	else if (hero_choices["player_one"] == 3)
	{
		SpriteRaider* player_one = (SpriteRaider*)this->getChildByTag(player1_tag);
		player_one->setScale(size);
	}
	else if (hero_choices["player_one"] == 4)
	{
		SpritePecola* player_one = (SpritePecola*)this->getChildByTag(player1_tag);
		player_one->setScale(size);
	}
	if (hero_choices["player_two"] == 1)
	{
		SpriteCatherine* player_two = (SpriteCatherine*)this->getChildByTag(player2_tag);
		player_two->setScale(size);
	}
	else if (hero_choices["player_two"] == 2)
	{
		SpriteNighttide* player_two = (SpriteNighttide*)this->getChildByTag(player2_tag);
		player_two->setScale(size);
	}
	else if (hero_choices["player_two"] == 3)
	{
		SpriteRaider* player_two = (SpriteRaider*)this->getChildByTag(player2_tag);
		player_two->setScale(size);
	}
	else if (hero_choices["player_two"] == 4)
	{
		SpritePecola* player_two = (SpritePecola*)this->getChildByTag(player2_tag);
		player_two->setScale(size);
	}
}



actor_property m_controller::getproperty(int id)
{
	if (id == 1)
	{
		if (hero_choices["player_one"] == 1)
		{
			SpriteCatherine* player_one = (SpriteCatherine*)this->getChildByTag(player1_tag);
			return player_one->get();
		}
		else if (hero_choices["player_one"] == 2)
		{
			SpriteNighttide* player_one = (SpriteNighttide*)this->getChildByTag(player1_tag);
			return player_one->get();
		}
		else if (hero_choices["player_one"] == 3)
		{
			SpriteRaider* player_one = (SpriteRaider*)this->getChildByTag(player1_tag);
			return player_one->get();
		}
		else if (hero_choices["player_one"] == 4)
		{
			SpritePecola* player_one = (SpritePecola*)this->getChildByTag(player1_tag);
			return player_one->get();
		}
	}
	else if (id == 2)
		if (hero_choices["player_two"] == 1)
		{
			SpriteCatherine* player_two = (SpriteCatherine*)this->getChildByTag(player2_tag);
			return player_two->get();
		}
		else if (hero_choices["player_two"] == 2)
		{
			SpriteNighttide* player_two = (SpriteNighttide*)this->getChildByTag(player2_tag);
			return player_two->get();
		}
		else if (hero_choices["player_two"] == 3)
		{
			SpriteRaider* player_two = (SpriteRaider*)this->getChildByTag(player2_tag);
			return player_two->get();
		}
		else if (hero_choices["player_two"] == 4)
		{
			SpritePecola* player_two = (SpritePecola*)this->getChildByTag(player2_tag);
			return player_two->get();
		}
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
	//evContact->onContactPreSolve = CC_CALLBACK_2(m_controller::onContactPreSolve, this);
	evContact->onContactSeparate = CC_CALLBACK_1(m_controller::onContactSeparate, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(evContact, this);
	//mouse_sprite->setScale(0.5f);
	//ShowCursor(FALSE);
	//mouse_sprite->setAnchorPoint(Point(mouse_sprite->getContentSize().width,mouse_sprite->getContentSize().height));
	mouse_sprite->setAnchorPoint(Point(0,1));
	this->addChild(mouse_sprite, 5);
	
	auto mouse_Body = PhysicsBody::createBox(this->getContentSize(), PHYSICSBODY_MATERIAL_DEFAULT);
	//m_hero->setPhysicsBody(CaBody);
	//CaBody->setContactTestBitmask(0xFFFFFFFF);
	mouse_Body->setRotationEnable(false);
	mouse_Body->setCategoryBitmask(0x01);
	mouse_Body->setCollisionBitmask(0x00000000);
	mouse_Body->setContactTestBitmask(0x01);
	mouse_sprite->setPhysicsBody(mouse_Body);
	mouse_sprite->setTag(1000000);
	//Catherine->setPosition(80, 80);
	//this->addChild(Catherine, 1);
	
//	Catherine_test->setPosition(Vec2(visibleSize.width / 2, visibleSize.height*0.3));
//	Catherine_test->pos = Vec2(120, 120);
//	this->addChild(Catherine_two, 1);


	//static auto m_sprite = chose_character(1, 1);
/*	Catherine = chose_character(1, 1);
	Catherine2 = chose_character(2, 1);
	Catherine->setPosition(300, 300);
	Catherine->pos = Vec2(300,300);
	Catherine2->setPosition(2500, 150);
	Catherine2->pos=Vec2(2500, 150);*/


	chose_character(1, 3);
	chose_character(2, 1);
	/*
	if (hero_choices["player_one"] == 1)
	{
		SpriteCatherine* player_one = (SpriteCatherine*)this->getChildByTag(player1_tag);
		player_one->setPosition(300, 300);
		player_one->pos = Vec2(300, 300);
		
	}
	else if (hero_choices["player_one"] == 2)
	{
		SpriteNighttide* player_one = (SpriteNighttide*)this->getChildByTag(player1_tag);
		player_one->setPosition(300, 300);
		player_one->pos = Vec2(300, 300);
	}
	if (hero_choices["player_two"] == 1)
	{
		SpriteCatherine* player_two = (SpriteCatherine*)this->getChildByTag(player2_tag);
		player_two->setPosition(2500, 150);
		player_two->pos = Vec2(2500, 150);
	}
	else if (hero_choices["player_two"] == 2)
	{
		SpriteNighttide* player_two = (SpriteNighttide*)this->getChildByTag(player2_tag);
		player_two->setPosition(2500, 150);
		player_two->pos = Vec2(2500, 150);
	}*/

	/*
	auto tower = Sprite::create("def_tower_right.png");
	tower->setPosition(Vec2(400, 400));
	this->addChild(tower, 1);*/

	return true;

}
/*
void m_controller::clockon()
{

}*/
