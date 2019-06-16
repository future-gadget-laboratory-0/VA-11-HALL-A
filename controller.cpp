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
				Playertwo->setPosition(Vec2(2500, 150));
				Playertwo->pos = Vec2(2500, 150);
				Playertwo->setTag(tag);
				hero_choices["player_two"] = 1;
				this->addChild(Playertwo);
				//return Playertwo;
			}
			else if (character == 2)
			{
				//SpriteCatherine* Playertwo = SpriteCatherine::createWithSpriteFrameName("snow20_0.png");
				SpriteNighttide* Playertwo = SpriteNighttide::getInstance();
				Playertwo->setPosition(Vec2(2500, 150));
				Playertwo->pos = Vec2(2500, 150);
				Playertwo->setTag(tag);
				hero_choices["player_two"] = 2;
				this->addChild(Playertwo);
				//return Playertwo;
			}
			else if (character == 3)
			{
				SpriteRaider* Playertwo = SpriteRaider::getInstance();
				Playertwo->setPosition(Vec2(2500, 150));
				Playertwo->pos = Vec2(2500, 150);
				Playertwo->setTag(tag);
				hero_choices["player_two"] = 3;
				this->addChild(Playertwo);
			}
			else if (character == 4)
			{
				SpritePecola* Playertwo = SpritePecola::getInstance();
				Playertwo->setPosition(Vec2(2500, 150));
				Playertwo->pos = Vec2(2500, 150);
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
	
	if (tagA == 100001&&(tagB!= 10100|| tagB != 10200||tagB!= 10300 || tagB != 10400|| tagB != 11000 || tagB != 12000 || tagB != 13000))
	{
		if(tagB==20100||tagB== 20200 || tagB == 20300||tagB == 20400||tagB == 10000007|| tagB == 10000013||tagB== 100|| tagB == 21000 || tagB == 22000 || tagB == 23000)
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
	if (tagA == 100002 &&(tagB != 10100 || tagB != 10200 || tagB != 10300 || tagB != 10400 || tagB != 11000 || tagB != 12000 || tagB != 13000))
	{
		if (tagB == 20100 || tagB == 20200 || tagB == 20300 || tagB == 20400 || tagB == 10000007 || tagB == 10000013 || tagB == 100 || tagB == 21000 || tagB == 22000 || tagB == 23000)
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
	if (tagA == 100101 && (tagB != 20100 || tagB != 20200 || tagB != 20300 || tagB != 20400 || tagB != 21000 || tagB != 22000 || tagB != 23000))
	{
		if (tagB == 10100 || tagB == 10200 || tagB == 10300 || tagB == 10400 || tagB == 10000000 || tagB == 10000012 || tagB == 100 || tagB == 11000 || tagB == 12000 || tagB == 13000)
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
	if (tagA == 100102 && (tagB != 20100 || tagB != 20200 || tagB != 20300 || tagB != 20400 || tagB != 21000 || tagB != 22000 || tagB != 23000))
	{
		if (tagB == 10100 || tagB == 10200 || tagB == 10300 || tagB == 10400 || tagB == 10000000 || tagB == 10000012 || tagB == 100 || tagB == 11000 || tagB == 12000 || tagB == 13000)
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


	if (tagB == 100001&& (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100  || tagA == 21000 || tagA == 22000 || tagA == 23000))
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
	if (tagB == 100002 && (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100 || tagA == 21000 || tagA == 22000 || tagA == 23000))
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
	if (tagB == 100101 && (tagA == 10100 || tagA == 10200 || tagA == 10300 || tagA == 10400 || tagA == 10000000 || tagA == 10000012 || tagA == 100 || tagA == 11000 || tagA == 12000 || tagA == 13000))
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
	if (tagB == 100102 && (tagA == 10100 || tagA == 10200 || tagA == 10300 || tagA == 10400 || tagA == 10000000 || tagA == 10000012 || tagA == 100 || tagA == 11000 || tagA == 12000 || tagA == 13000))
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
		if (tagA == 1000000 && (tagB == 20100 || tagB == 20200 || tagB == 20300 || tagB == 20400 || tagB == 10000007 || tagB == 10000013 || tagB == 100 || tagB == 21000 || tagB == 22000 || tagB == 23000))
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
		if (tagB == 1000000 && (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100 || tagA == 21000 || tagA == 22000 || tagA == 23000))
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
		if (tagA == 1000000 && (tagB == 20100 || tagB == 20200 || tagB == 20300 || tagB == 20400 || tagB == 10000007 || tagB == 10000013 || tagB == 100 || tagB == 21000 || tagB == 22000 || tagB == 23000))
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
		if (tagB == 1000000 && (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100 || tagA == 21000 || tagA == 22000 || tagA == 23000))
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
		if (tagA == 1000000 && (tagB == 20100 || tagB == 20200 || tagB == 20300 || tagB == 20400 || tagB == 10000007 || tagB == 10000013 || tagB == 100|| tagB == 21000 || tagB == 22000 || tagB == 23000))
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
		if (tagB == 1000000 && (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100 || tagA == 21000 || tagA == 22000 || tagA == 23000))
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
		if (tagA == 1000000 && (tagB == 20100 || tagB == 20200 || tagB == 20300 || tagB == 20400 || tagB == 10000007 || tagB == 10000013 || tagB == 100 || tagB == 21000 || tagB == 22000 || tagB == 23000))
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
		if (tagB == 1000000 && (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100 || tagA == 21000 || tagA == 22000 || tagA == 23000))
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
void m_controller::m_ai(float)
{
	if (BT_DES == false)
	{
		UnitsSprite* BTS = (UnitsSprite*)this->getParent()->getChildByTag(10000007);
		if (BTS->get().HP < 0)
			BT_DES = true;
	}
	if (BC_DES == false)
	{
		UnitsSprite* BCS = (UnitsSprite*)this->getParent()->getChildByTag(10000013);
		if (BCS->get().HP < 0)
			BC_DES = true;
	}
	if (RT_DES == false)
	{
		UnitsSprite* RTS = (UnitsSprite*)this->getParent()->getChildByTag(10000000);
		if (RTS->get().HP < 0)
			RT_DES = true;
	}
	if (RC_DES == false)
	{
		UnitsSprite* RCS = (UnitsSprite*)this->getParent()->getChildByTag(10000012);
		if (RCS->get().HP < 0)
			RC_DES = true;
	}

	SpriteCatherine* player_one = (SpriteCatherine*)this->getChildByTag(player1_tag);
	SpriteCatherine* player_two_ca = (SpriteCatherine*)this->getChildByTag(player2_tag);
	//SpriteNighttide* player_two_nt = (SpriteNighttide*)this->getChildByTag(player2_tag);
	//SpriteRaider* player_two_ra = (SpriteRaider*)this->getChildByTag(player2_tag);
	//SpritePecola* player_two_pe= (SpritePecola*)this->getChildByTag(player2_tag);
	Vec2 range = player_one->old_pos - player_two_ca->old_pos;

	if (player2_AI)
	{
		if (inmoverange(range))
		{
			if (inattackrange(range, player_two_ca->get().ATR))
			{
				player_two_ca->target = (UnitsSprite*)player_one;
				if (!RT_DES)
				{
					if (player_one->get().HP <= player_two_ca->get().ATK*1.5 || player_one->get().HP <= player_two_ca->get().ATKM * 1 || player_one->get().HP <= player_two_ca->get().ATKS * 1 && ai_safe())
						ai_normalattak();
					else if (inattackrange(player_two_ca->pos - RT_pos, 300))
						player_two_ca->pos = BT_pos - Vec2(300, 0);
					else if (player_one->get().HP > 0)
						ai_normalattak();
				}
				if (!RC_DES)
				{
					if (player_one->get().HP <= player_two_ca->get().ATK*1.5 || player_one->get().HP <= player_two_ca->get().ATKM * 1 || player_one->get().HP <= player_two_ca->get().ATKS * 1 && ai_safe())
						ai_normalattak();
					else if (inattackrange(player_two_ca->pos - RC_pos, 300))
						player_two_ca->pos = RT_pos - Vec2(300, 0);
					else if (player_one->get().HP > 0)
					{
						ai_normalattak();
					}
				}
			}
			else if (!ai_getmoney(player_two_ca->old_pos))
			{
				if (!RT_DES)
				{
					if (!inattackrange(player_one->pos - RT_pos, 300))
					{
						player_two_ca->pos = player_one->pos;
					}
					else if (player_one->get().HP <= player_two_ca->get().ATK*1.5 || player_one->get().HP <= player_two_ca->get().ATKM * 1 || player_one->get().HP <= player_two_ca->get().ATKS * 1 && ai_safe())
					{
						player_two_ca->pos = player_one->pos;
					}
				}
				else if (!RC_DES)
				{
					if (!inattackrange(player_one->pos - RC_pos, 300))
					{
						player_two_ca->pos = player_one->pos;
					}
					else if (player_one->get().HP <= player_two_ca->get().ATK*1.5 || player_one->get().HP <= player_two_ca->get().ATKM * 1 || player_one->get().HP <= player_two_ca->get().ATKS * 1 && ai_safe())
					{
						player_two_ca->pos = player_one->pos;
					}
				}

			}
			else if (ai_getmoney(player_two_ca->old_pos))
			{
				if (dogface2->get().HP > 0)
					player_two_ca->target = dogface2;
				else if (dogface1->get().HP > 0)
					player_two_ca->target = dogface1;
				else if (dogface3->get().HP > 0)
					player_two_ca->target = dogface3;
				ai_normalattak();
			}
			else
			{
				if (!RT_DES)
					player_two_ca->pos = Vec2(1450, 500);
				else
					player_two_ca->pos = Vec2(900, 500);

			}
		}
		else if (ai_safe())
		{
			if (!RT_DES)
				player_two_ca->target = (UnitsSprite*)this->getParent()->getChildByTag(10000000);
			else
				player_two_ca->target = (UnitsSprite*)this->getParent()->getChildByTag(10000012);
			ai_normalattak();
		}
		else if (ai_getmoney(player_two_ca->old_pos))
		{
			if (dogface2->get().HP > 0)
				player_two_ca->target = dogface2;
			else if (dogface1->get().HP > 0)
				player_two_ca->target = dogface1;
			else if (dogface3->get().HP > 0)
				player_two_ca->target = dogface3;
			ai_normalattak();
		}
		else
		{
			if (!RT_DES)
				player_two_ca->pos = Vec2(1450, 500);
			else
				player_two_ca->pos = Vec2(900, 500);
		}
	}
	for (int i = 1; i <= 3; i++)
	{
		Spritedogface* dogface;
		if (i == 1)
			dogface = dogface1;
		else if (i == 2)
			dogface = dogface2;
		else if (i == 3)
			dogface = dogface3;
		else if (i == 4)
			dogface = dogface4;
		else if (i == 5)
			dogface = dogface5;
		else if (i == 6)
			dogface = dogface6;
		int dog_range = dogface->get().ATR;
		int enemy_kind;
		if (dogface->getTag() > 20000)
			enemy_kind = 1;
		else
			enemy_kind = 2;
		if (enemy_kind == 2)
		{
			if (ai_getmoney(dogface->pos, dog_range, enemy_kind))
			{
				dogface->pos = dogface->old_pos;
				if (inattackrange(dogface->pos - dogface5->pos, dog_range))
					dogface->target = (UnitsSprite*)dogface5;
				else if (inattackrange(dogface1->pos - dogface4->pos, dog_range))
					dogface->target = (UnitsSprite*)dogface4;
				else if (inattackrange(dogface1->pos - dogface6->pos, dog_range))
					dogface->target = (UnitsSprite*)dogface6;
				if (dogface->attackable)
					dogface->normal_attack(0);
			}
			else if (inattackrange(BT_pos - dogface->pos, dog_range) && !BT_DES)
			{
				dogface->pos = dogface->old_pos;
				dogface->target = (UnitsSprite*)this->getParent()->getChildByTag(10000007);
				if (dogface->attackable)
					dogface->normal_attack(0);
			}
			else if (inattackrange(player_two_ca->pos - dogface->pos, dogface->get().ATR + 100))
			{
				dogface->target = (UnitsSprite*)player_two_ca;
				if (inattackrange(player_two_ca->pos - dogface->pos, dogface->get().ATR))
					dogface->normal_attack(0);
				else 
					dogface->pos = player_two_ca->pos;
			}	
			else if (!BT_DES)
			{
				dogface->pos = BT_pos;
			}
			else if (inattackrange(BC_pos - dogface->pos, dog_range) && BT_DES)
			{
				dogface->pos = dogface->old_pos;
				dogface->target = (UnitsSprite*)this->getParent()->getChildByTag(10000013);
				if (dogface->attackable)
					dogface->normal_attack(0);
			}
			else
			{
				dogface->pos = BC_pos;
			}
		}
		else
		{
			if (ai_getmoney(dogface->pos, dog_range, enemy_kind))
			{
				dogface->pos = dogface->old_pos;
				if (inattackrange(dogface->pos - dogface2->pos, dog_range))
					dogface->target = (UnitsSprite*)dogface2;
				else if (inattackrange(dogface1->pos - dogface1->pos, dog_range))
					dogface->target = (UnitsSprite*)dogface1;
				else if (inattackrange(dogface1->pos - dogface3->pos, dog_range))
					dogface->target = (UnitsSprite*)dogface3;
				dogface->normal_attack(0);
			}
			else if (inattackrange(RT_pos - dogface->pos, dog_range) && !RT_DES)
			{
				dogface->pos = dogface->old_pos;
				dogface->target = (UnitsSprite*)this->getParent()->getChildByTag(10000000);
				if (dogface->attackable)
					dogface->normal_attack(0);
			}
			else if (inattackrange(player_one->pos - dogface->pos, dogface->get().ATR + 100))
			{
				dogface->target = (UnitsSprite*)player_one;
				if (inattackrange(player_one->pos - dogface->pos, dogface->get().ATR))
					dogface->normal_attack(0);
				else
					dogface->pos = player_one->pos;
			}
			else if (!RT_DES)
			{
				dogface->pos = RT_pos;
			}
			else if (inattackrange(RC_pos - dogface->pos, dog_range) && RT_DES)
			{
				dogface->pos = dogface->old_pos;
				dogface->target = (UnitsSprite*)this->getParent()->getChildByTag(10000012);
				if (dogface->attackable)
					dogface->normal_attack(0);
			}
			else
			{
				dogface->pos = RC_pos;
			}
		}

	}

	/*
	Spritetower*  tower_red= (Spritetower*)this->getParent()->getChildByTag(10000007);
	Spritetower*  tower_blue = (Spritetower*)this->getParent()->getChildByTag(10000000);
	Spritetower*  crystal_red = (Spritetower*)this->getParent()->getChildByTag(10000012);
	Spritetower*  crystal_blue = (Spritetower*)this->getParent()->getChildByTag(10000013);
	if (inattackrange(RT_pos - player_one->pos, 300)&& inattackrange(RT_pos - player_two_ca->pos, 300))
	{
		if (inattackrange(RT_pos - dogface4->pos, 300) || inattackrange(RT_pos - dogface5->pos, 300) || inattackrange(RT_pos - dogface6->pos, 300))
		{
			if (player_two_ca->target == (UnitsSprite*)player_one)
				tower_red->target = (UnitsSprite*)player_two_ca;
			else if(inattackrange(RT_pos - dogface5->pos, 300))
				tower_red->target = (UnitsSprite*)dogface5;
			else if (inattackrange(RT_pos - dogface4->pos, 300))
				tower_red->target = (UnitsSprite*)dogface4;
			else if (inattackrange(RT_pos - dogface6->pos, 300))
				tower_red->target = (UnitsSprite*)dogface6;
		}
		else 
		{
			tower_red->target = (UnitsSprite*)player_two_ca;
		}
		if (tower_red->attackable)
			tower_red->normal_attack(0);
	}
	else if (inattackrange(RT_pos - player_two_ca->pos, 300))
	{
		if (inattackrange(RT_pos - dogface4->pos, 300) || inattackrange(RT_pos - dogface5->pos, 300) || inattackrange(RT_pos - dogface6->pos, 300))
		{
			if (inattackrange(RT_pos - dogface5->pos, 300))
				tower_red->target = (UnitsSprite*)dogface5;
			else if (inattackrange(RT_pos - dogface4->pos, 300))
				tower_red->target = (UnitsSprite*)dogface4;
			else if (inattackrange(RT_pos - dogface6->pos, 300))
				tower_red->target = (UnitsSprite*)dogface6;
		}
		else
		{
			tower_red->target = (UnitsSprite*)player_two_ca;
		}
		if (tower_red->attackable)
			tower_red->normal_attack(0);
	}
	else
	{
		if (inattackrange(RT_pos - dogface4->pos, 300) || inattackrange(RT_pos - dogface5->pos, 300) || inattackrange(RT_pos - dogface6->pos, 300))
		{
			if (inattackrange(RT_pos - dogface5->pos, 300))
				tower_red->target = (UnitsSprite*)dogface5;
			else if (inattackrange(RT_pos - dogface4->pos, 300))
				tower_red->target = (UnitsSprite*)dogface4;
			else if (inattackrange(RT_pos - dogface6->pos, 300))
				tower_red->target = (UnitsSprite*)dogface6;
			if (tower_red->attackable)
				tower_red->normal_attack(0);
		}
	}
*/


	if (inattackrange(RT_pos - player_one->pos, 300) && inattackrange(RT_pos - player_two_ca->pos, 300))
	{
		
		if (inattackrange(RT_pos - dogface4->pos, 300) || inattackrange(RT_pos - dogface5->pos, 300) || inattackrange(RT_pos - dogface6->pos, 300))
		{
			if (player_two_ca->target == (UnitsSprite*)player_one&&player_two_ca->get().HP > 0)
				red_tower_target = (UnitsSprite*)player_two_ca;
			else if (inattackrange(RT_pos - dogface5->pos, 300) && dogface5->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface5;
			else if (inattackrange(RT_pos - dogface4->pos, 300) && dogface4->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface4;
			else if (inattackrange(RT_pos - dogface6->pos, 300) && dogface6->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface6;
		}
		else if(player_two_ca->get().HP > 0)
		{
			red_tower_target = (UnitsSprite*)player_two_ca;
		}
		
	}
	else if (inattackrange(RT_pos - player_two_ca->pos, 300))
	{
		if (inattackrange(RT_pos - dogface4->pos, 300) || inattackrange(RT_pos - dogface5->pos, 300) || inattackrange(RT_pos - dogface6->pos, 300))
		{
			if (inattackrange(RT_pos - dogface5->pos, 300) && dogface5->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface5;
			else if (inattackrange(RT_pos - dogface4->pos, 300) && dogface4->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface4;
			else if (inattackrange(RT_pos - dogface6->pos, 300) && dogface6->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface6;
		}
		else if(player_two_ca->get().HP > 0)
		{
			red_tower_target = (UnitsSprite*)player_two_ca;
		}
	}
	else
	{
		if (inattackrange(RT_pos - dogface4->pos, 300) || inattackrange(RT_pos - dogface5->pos, 300) || inattackrange(RT_pos - dogface6->pos, 300))
		{
			if (inattackrange(RT_pos - dogface5->pos, 300) && dogface5->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface5;
			else if (inattackrange(RT_pos - dogface4->pos, 300) && dogface4->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface4;
			else if (inattackrange(RT_pos - dogface6->pos, 300) && dogface6->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface6;
		}
	}
	////////

	if (inattackrange(RC_pos - player_one->pos, 300) && inattackrange(RC_pos - player_two_ca->pos, 300))
	{
		if (inattackrange(RC_pos - dogface4->pos, 300) || inattackrange(RC_pos - dogface5->pos, 300) || inattackrange(RC_pos - dogface6->pos, 300))
		{
			if (player_two_ca->target == (UnitsSprite*)player_one&&player_two_ca->get().HP > 0)
				red_tower_target = (UnitsSprite*)player_two_ca;
			else if (inattackrange(RC_pos - dogface5->pos, 300) && dogface5->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface5;
			else if (inattackrange(RC_pos - dogface4->pos, 300) && dogface4->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface4;
			else if (inattackrange(RC_pos - dogface6->pos, 300) && dogface6->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface6;
		}
		else if(player_two_ca->get().HP > 0)
		{
			red_tower_target = (UnitsSprite*)player_two_ca;
		}

	}
	else if (inattackrange(RC_pos - player_two_ca->pos, 300))
	{
		if (inattackrange(RC_pos - dogface4->pos, 300) || inattackrange(RC_pos - dogface5->pos, 300) || inattackrange(RC_pos - dogface6->pos, 300))
		{
			if (inattackrange(RC_pos - dogface5->pos, 300) && dogface5->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface5;
			else if (inattackrange(RC_pos - dogface4->pos, 300) && dogface4->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface4;
			else if (inattackrange(RC_pos - dogface6->pos, 300) && dogface6->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface6;
		}
		else if( player_two_ca->get().HP > 0)
		{
			red_tower_target = (UnitsSprite*)player_two_ca;
		}
	}
	else
	{
		if (inattackrange(RC_pos - dogface4->pos, 300) || inattackrange(RC_pos - dogface5->pos, 300) || inattackrange(RC_pos - dogface6->pos, 300))
		{
			if (inattackrange(RC_pos - dogface5->pos, 300) && dogface5->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface5;
			else if (inattackrange(RC_pos - dogface4->pos, 300) && dogface4->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface4;
			else if (inattackrange(RC_pos - dogface6->pos, 300) && dogface6->get().HP > 0)
				red_tower_target = (UnitsSprite*)dogface6;
		}
	}
	/////
	if (inattackrange(BC_pos - player_one->pos, 300) && inattackrange(BC_pos - player_two_ca->pos, 300))
	{
		if (inattackrange(BC_pos - dogface1->pos, 300) || inattackrange(BC_pos - dogface2->pos, 300) || inattackrange(BC_pos - dogface3->pos, 300))
		{
			if (player_one->target == (UnitsSprite*)player_two_ca&& player_one->get().HP > 0)
				blue_tower_target = (UnitsSprite*)player_one;
			else if (inattackrange(BC_pos - dogface2->pos, 300) && dogface2->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface2;
			else if (inattackrange(BC_pos - dogface1->pos, 300) && dogface1->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface1;
			else if (inattackrange(BC_pos - dogface3->pos, 300) && dogface3->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface3;
		}
		else if(player_one->get().HP > 0)
		{
			blue_tower_target = (UnitsSprite*)player_one;
		}

	}
	else if (inattackrange(BC_pos - player_one->pos, 300))
	{
		if (inattackrange(BC_pos - dogface1->pos, 300) || inattackrange(BC_pos - dogface2->pos, 300) || inattackrange(BC_pos - dogface3->pos, 300))
		{
			if (inattackrange(BC_pos - dogface2->pos, 300) && dogface2->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface2;
			else if (inattackrange(BC_pos - dogface1->pos, 300) && dogface1->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface1;
			else if (inattackrange(BC_pos - dogface3->pos, 300) && dogface3->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface3;
		}
		else if(player_one->get().HP > 0)
		{
			blue_tower_target = (UnitsSprite*)player_one;
		}
	}
	else
	{
		if (inattackrange(BC_pos - dogface1->pos, 300) || inattackrange(BC_pos - dogface2->pos, 300) || inattackrange(BC_pos - dogface3->pos, 300))
		{
			if (inattackrange(BC_pos - dogface2->pos, 300) && dogface2->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface2;
			else if (inattackrange(BC_pos - dogface1->pos, 300) && dogface1->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface1;
			else if (inattackrange(BC_pos - dogface3->pos, 300) && dogface3->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface3;
		}
	}
	////
	if (inattackrange(BT_pos - player_one->pos, 300) && inattackrange(BT_pos - player_two_ca->pos, 300))
	{
		if (inattackrange(BT_pos - dogface1->pos, 300) || inattackrange(BT_pos - dogface2->pos, 300) || inattackrange(BT_pos - dogface3->pos, 300))
		{
			if (player_one->target == (UnitsSprite*)player_two_ca&& player_one->get().HP > 0)
				blue_tower_target = (UnitsSprite*)player_one;
			else if (inattackrange(BT_pos - dogface2->pos, 300) && dogface2->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface2;
			else if (inattackrange(BT_pos - dogface1->pos, 300) && dogface1->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface1;
			else if (inattackrange(BT_pos - dogface3->pos, 300) && dogface3->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface3;
		}
		else if(player_one->get().HP > 0)
		{
			blue_tower_target = (UnitsSprite*)player_one;
		}

	}
	else if (inattackrange(BT_pos - player_one->pos, 300))
	{
		
		if (inattackrange(BT_pos - dogface1->pos, 300) || inattackrange(BT_pos - dogface2->pos, 300) || inattackrange(BT_pos - dogface3->pos, 300))
		{
			if (inattackrange(BT_pos - dogface2->pos, 300) && dogface2->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface2;
			else if (inattackrange(BT_pos - dogface1->pos, 300) && dogface1->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface1;
			else if (inattackrange(BT_pos - dogface3->pos, 300) && dogface3->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface3;
		}
		else if(player_one->get().HP > 0)
		{
			blue_tower_target = (UnitsSprite*)player_one;
		}
	}
	else
	{
		if (inattackrange(BT_pos - dogface1->pos, 300) || inattackrange(BT_pos - dogface2->pos, 300) || inattackrange(BT_pos - dogface3->pos, 300))
		{
			if (inattackrange(BT_pos - dogface2->pos, 300)&& dogface2->get().HP>0)
				blue_tower_target = (UnitsSprite*)dogface2;
			else if (inattackrange(BT_pos - dogface1->pos, 300) && dogface1->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface1;
			else if (inattackrange(BT_pos - dogface3->pos, 300) && dogface3->get().HP > 0)
				blue_tower_target = (UnitsSprite*)dogface3;
		}
	}



	
	this->schedule(schedule_selector(m_controller::tower_attack), 0.10, 1, 0);


}

void m_controller::tower_attack(float)
{
	if(red_tower_target != NULL)
	if (red_tower_target->getTag() > 20000 && (inattackrange(RT_pos - red_tower_target->getPosition(), 300)|| inattackrange(RC_pos - red_tower_target->getPosition(), 300)))
	{
		if(red_tower_target ==old_red_tower_target)
			red_tower_target->addproperty(-30, "HP");
		else
			red_tower_target->addproperty(-10, "HP");
		old_red_tower_target = red_tower_target;
	}

	if (blue_tower_target != NULL)
	if (blue_tower_target->getTag() < 20000 && inattackrange(BT_pos - blue_tower_target->getPosition(), 300 || inattackrange(BC_pos - blue_tower_target->getPosition(), 300)))
	{
		if (blue_tower_target == old_blue_tower_target)
			blue_tower_target->addproperty(-30, "HP");
		else
			blue_tower_target->addproperty(-10, "HP");
		old_blue_tower_target = blue_tower_target;
	}
		
}

void m_controller::ai_normalattak()
{
	SpriteCatherine* player_two_ca = (SpriteCatherine*)this->getChildByTag(player2_tag);
	SpriteNighttide* player_two_nt = (SpriteNighttide*)this->getChildByTag(player2_tag);
	SpriteRaider* player_two_ra = (SpriteRaider*)this->getChildByTag(player2_tag);
	SpritePecola* player_two_pe = (SpritePecola*)this->getChildByTag(player2_tag);
	if (hero_choices["player_two"] == 1 && attackable)
	{
		player_two_ca->normal_attack(0);
		attackable = false;
		this->schedule(schedule_selector(m_controller::ai_attack), 1 / player_two_ca->get().ATS + 0.2, 1, 0);
	}
	else if (hero_choices["player_two"] == 2 && attackable)
	{
		player_two_nt->normal_attack(0);
		attackable = false;
		this->schedule(schedule_selector(m_controller::ai_attack), 1 / player_two_nt->get().ATS + 0.2, 1, 0);
	}
	else if (hero_choices["player_two"] == 3 && attackable)
	{
		player_two_ra->normal_attack(0);
		attackable = false;
		this->schedule(schedule_selector(m_controller::ai_attack), 1 / player_two_ra->get().ATS + 0.2, 1, 0);
	}
	else if (attackable)
	{
		player_two_pe->normal_attack(0);
		attackable = false;
		this->schedule(schedule_selector(m_controller::ai_attack), 1 / player_two_pe->get().ATS + 0.2, 1, 0);
	}
}

void m_controller::ai_attack(float)
{
	attackable = true;
}

bool  m_controller::ai_safe()
{
	int health1 = dogface4->get().HP;
	int health2 = dogface5->get().HP;
	int health3 = dogface6->get().HP;
	if (inattackrange(dogface4->old_pos - RT_pos,300) &&  inattackrange(dogface6->old_pos - RC_pos, 300) && inattackrange(dogface5->old_pos - RC_pos, 300) && !RT_DES&&(health1>0|| health2>0|| health3>0))
	{
		return true;
	}
	else if (inattackrange(dogface4->old_pos - RC_pos, 300)&& inattackrange(dogface6->old_pos - RC_pos, 300)&& inattackrange(dogface5->old_pos - RC_pos, 300) && RT_DES && (health1 > 0 || health2 > 0 || health3 > 0))
	{
		return true;
	}
	else
		return false;
}
bool  m_controller::ai_getmoney(Vec2 pos_now)
{
	int health1 = dogface1->get().HP;
	int health2 = dogface2->get().HP;
	int health3 = dogface3->get().HP;
	if ((inattackrange(dogface1->old_pos - pos_now,300)&& health1>0)||(inattackrange(dogface2->old_pos - pos_now, 300) && health2 > 0) || (inattackrange(dogface3->old_pos - pos_now, 300) && health3 > 0))
		return true;
	else
		return false;
}
bool  m_controller::ai_getmoney(Vec2 pos_now,int range,int kind)
{
	if (kind == 1)
	{
	int health1 = dogface1->get().HP;
	int health2 = dogface2->get().HP;
	int health3 = dogface3->get().HP;
	if ((inattackrange(dogface1->old_pos - pos_now, range) && health1 > 0) || (inattackrange(dogface2->old_pos - pos_now, range) && health2 > 0) || (inattackrange(dogface3->old_pos - pos_now, range) && health3 > 0))
		return true;
	else
		return false;
	}
	else
	{
		int health4 = dogface4->get().HP;
		int health5= dogface5->get().HP;
		int health6 = dogface6->get().HP;
		if ((inattackrange(dogface4->old_pos - pos_now, range) && health4 > 0) || (inattackrange(dogface5->old_pos - pos_now, range) && health5 > 0) || (inattackrange(dogface6->old_pos - pos_now, range) && health6 > 0))
			return true;
		else
			return false;
	}

}


bool m_controller::inmoverange(Vec2 distance)
{
	int range = ai_moverange;
	if (distance.x*distance.x + distance.y*distance.y > range)
		return false;
	else
		return true;
}
bool m_controller::inattackrange(Vec2 distance,int length)
{
	if (distance.x*distance.x + distance.y*distance.y > (length*length))
		return false;
	else
		return true;
}


int m_controller::gettag(__String name)
{
	 std::string str = name.getCString();
	 if (str == "player1")
		 return player1_tag;
	 else if (str == "player2")
		 return player2_tag;
	 else if (str == "player3")
		 return player3_tag;
	 else if (str == "player4")
		 return player4_tag;
	 else if (str == "player5")
		 return player5_tag;
	 else if (str == "player6")
		 return player6_tag;
	 else if (str == "player7")
		 return player7_tag;
	 else if (str == "player8")
		 return player8_tag;
	 else if (str == "player9")
		 return player9_tag;
	 else if (str == "player10")
		 return player10_tag;
}


bool m_controller::onContactSeparate(PhysicsContact& contact)
{
	auto bodyA = (UnitsSprite*)(contact.getShapeA()->getBody()->getNode());
	auto bodyB = (UnitsSprite*)(contact.getShapeB()->getBody()->getNode());
	int tagA = bodyA->getTag();
	int tagB = bodyB->getTag();
	if (tagA == 1000000 && (tagB == 20100 || tagB == 20200 || tagB == 20300 || tagB == 20400 || tagB == 10000007 || tagB == 10000013 || tagB == 100|| tagB == 21000 || tagB == 22000 || tagB == 23000))
	{
		m_lockTag_now = 0;
		mouse_sprite->setTexture("mouse.png");
	}
	if (tagB == 1000000 && (tagA == 20100 || tagA == 20200 || tagA == 20300 || tagA == 20400 || tagA == 10000007 || tagA == 10000013 || tagA == 100 || tagA == 21000 || tagA == 22000 || tagA == 23000))
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


	//chose_character(1, 4);
	//chose_character(2, 2);
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

	dogface1 = Spritedogface::getInstance();
	dogface2 = Spritedogface::getInstance();
	dogface3 = Spritedogface::getInstance();
	dogface4 = Spritedogface::getInstance();
	dogface5 = Spritedogface::getInstance();
	dogface6 = Spritedogface::getInstance();
	dogface1->setkind(0);
	dogface2->setkind(1);
	dogface3->setkind(2);
	dogface4->setkind(3);
	dogface5->setkind(4);
	dogface6->setkind(5);
	this->addChild(dogface1);
	this->addChild(dogface2);
	this->addChild(dogface3);
	this->addChild(dogface4);
	this->addChild(dogface5);
	this->addChild(dogface6);

	this->schedule(schedule_selector(m_controller::m_ai), 0.15f, kRepeatForever, 0);
	return true;
}
/*
void m_controller::clockon()
{

}*/
