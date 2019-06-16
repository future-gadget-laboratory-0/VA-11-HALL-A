#include "hero_Raider.h"



SpriteRaider* SpriteRaider::instance1 = NULL;
SpriteRaider* SpriteRaider::instance2 = NULL;
SpriteRaider* SpriteRaider::instance3 = NULL;
SpriteRaider* SpriteRaider::instance4 = NULL;
SpriteRaider* SpriteRaider::instance5 = NULL;
SpriteRaider* SpriteRaider::instance6 = NULL;
SpriteRaider* SpriteRaider::instance7 = NULL;
SpriteRaider* SpriteRaider::instance8 = NULL;
SpriteRaider* SpriteRaider::instance9 = NULL;
SpriteRaider* SpriteRaider::instance10 = NULL;

SpriteRaider::SpriteRaider()
{

}
/*
SpriteCatherine* SpriteCatherine::getInstance()
{
	if (instance == NULL)
	{
		instance = new SpriteCatherine();
		instance->init();
	}
	return instance;
}
*/
SpriteRaider* SpriteRaider::getInstance()
{
	if (instance1 == NULL)
	{
		instance1 = new SpriteRaider();
		instance1->init();
		return instance1;
	}
	if (instance2 == NULL)
	{
		instance2 = new SpriteRaider();
		instance2->init();
		return instance2;
	}
	if (instance3 == NULL)
	{
		instance3 = new SpriteRaider();
		instance3->init();
		return instance3;
	}
	if (instance4 == NULL)
	{
		instance4 = new SpriteRaider();
		instance4->init();
		return instance4;
	}
	if (instance5 == NULL)
	{
		instance5 = new SpriteRaider();
		instance5->init();
		return instance5;
	}
	if (instance6 == NULL)
	{
		instance6 = new SpriteRaider();
		instance6->init();
		return instance6;
	}
	if (instance7 == NULL)
	{
		instance7 = new SpriteRaider();
		instance7->init();
		return instance7;
	}
	if (instance8 == NULL)
	{
		instance8 = new SpriteRaider();
		instance8->init();
		return instance8;
	}
	if (instance9 == NULL)
	{
		instance9 = new SpriteRaider();
		instance9->init();
		return instance9;
	}
	if (instance10 == NULL)
	{
		instance10 = new SpriteRaider();
		instance10->init();
		return instance10;
	}
}

/*
BulletSprite* SpriteCatherine::bulletmaking(int number,int kind)
{
	if (number == 0)
	{
		if(bpdamage())
			bullet0->changeproperty(2*createdamage(0),"ATK");
		else
			bullet0->changeproperty(createdamage(0), "ATK");
		if(!this->getChildByName("bullet0"))
			this->addChild(bullet0);
	}
	else if (number == 1)
	{
		if (bpdamage())
			bullet1->changeproperty(2 * createdamage(0), "ATK");
		else
			bullet1->changeproperty(createdamage(0), "ATK");
		if (!this->getChildByName("bullet1"))
			this->addChild(bullet1);
	}
	else if (number == 2)
	{
		if (bpdamage())
			bullet2->changeproperty(2 * createdamage(0), "ATK");
		else
			bullet2->changeproperty(createdamage(0), "ATK");
		if (!this->getChildByName("bullet2"))
			this->addChild(bullet2);
	}
}*/

BulletSprite* SpriteRaider::bulletmaking(int kind)
{
	if (!this->getChildByName("bullet0"))
	{
		if (kind == 0)
		{
			if (bpdamage())
				bullet0->changeproperty(2 * createdamage(0), "ATK");
			else
				bullet0->changeproperty(createdamage(0), "ATK");
		}
		else if (kind == 1)
		{
			bullet0->changeproperty(createdamage(1), "ATKM");
		}
		else
			bullet0->changeproperty(createdamage(2), "ATKS");
		this->addChild(bullet0);
		return bullet0;
	}
	else if (!this->getChildByName("bullet1"))
	{
		if (kind == 0)
		{
			if (bpdamage())
				bullet1->changeproperty(2 * createdamage(0), "ATK");
			else
				bullet1->changeproperty(createdamage(0), "ATK");
		}
		else if (kind == 1)
		{
			bullet1->changeproperty(createdamage(1), "ATKM");
		}
		else
			bullet1->changeproperty(createdamage(2), "ATKS");
		this->addChild(bullet1);
		return bullet1;
	}
	else if (!this->getChildByName("bullet2"))
	{
		if (kind == 0)
		{
			if (bpdamage())
				bullet2->changeproperty(2 * createdamage(0), "ATK");
			else
				bullet2->changeproperty(createdamage(0), "ATK");
		}
		else if (kind == 1)
		{
			bullet2->changeproperty(createdamage(1), "ATKM");
		}
		else
			bullet2->changeproperty(createdamage(2), "ATKS");
		this->addChild(bullet2);
		return bullet2;
	}
	else if (!this->getChildByName("bullet3"))
	{
		if (kind == 0)
		{
			if (bpdamage())
				bullet3->changeproperty(2 * createdamage(0), "ATK");
			else
				bullet3->changeproperty(createdamage(0), "ATK");
		}
		else if (kind == 1)
		{
			bullet3->changeproperty(createdamage(1), "ATKM");
		}
		else
			bullet3->changeproperty(createdamage(2), "ATKS");
		this->addChild(bullet3);
		return bullet3;
	}
	else if (!this->getChildByName("bullet4"))
	{
		if (kind == 0)
		{
			if (bpdamage())
				bullet4->changeproperty(2 * createdamage(0), "ATK");
			else
				bullet4->changeproperty(createdamage(0), "ATK");
		}
		else if (kind == 1)
		{
			bullet4->changeproperty(createdamage(1), "ATKM");
		}
		else
			bullet4->changeproperty(createdamage(2), "ATKS");
		this->addChild(bullet4);
		return bullet4;
	}
	else if (!this->getChildByName("bullet5"))
	{
		if (kind == 0)
		{
			if (bpdamage())
				bullet5->changeproperty(2 * createdamage(0), "ATK");
			else
				bullet5->changeproperty(createdamage(0), "ATK");
		}
		else if (kind == 1)
		{
			bullet5->changeproperty(createdamage(1), "ATKM");
		}
		else
			bullet5->changeproperty(createdamage(2), "ATKS");
		this->addChild(bullet5);
		return bullet5;
	}
	else if (!this->getChildByName("bullet6"))
	{
		if (kind == 0)
		{
			if (bpdamage())
				bullet6->changeproperty(2 * createdamage(0), "ATK");
			else
				bullet6->changeproperty(createdamage(0), "ATK");
		}
		else if (kind == 1)
		{
			bullet6->changeproperty(createdamage(1), "ATKM");
		}
		else
			bullet6->changeproperty(createdamage(2), "ATKS");
		this->addChild(bullet6);
		return bullet6;
	}
	else if (!this->getChildByName("bullet7"))
	{
		if (kind == 0)
		{
			if (bpdamage())
				bullet7->changeproperty(2 * createdamage(0), "ATK");
			else
				bullet7->changeproperty(createdamage(0), "ATK");
		}
		else if (kind == 1)
		{
			bullet7->changeproperty(createdamage(1), "ATKM");
		}
		else
			bullet7->changeproperty(createdamage(2), "ATKS");
		this->addChild(bullet7);
		return bullet7;
	}
	else if (!this->getChildByName("bullet8"))
	{
		if (kind == 0)
		{
			if (bpdamage())
				bullet8->changeproperty(2 * createdamage(0), "ATK");
			else
				bullet8->changeproperty(createdamage(0), "ATK");
		}
		else if (kind == 1)
		{
			bullet8->changeproperty(createdamage(1), "ATKM");
		}
		else
			bullet8->changeproperty(createdamage(2), "ATKS");
		this->addChild(bullet8);
		return bullet8;
	}
	else return NULL;
}



SpriteRaider * SpriteRaider::create(const char *filename)
{
	SpriteRaider *sprite = new SpriteRaider();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}

SpriteRaider *  SpriteRaider::createWithSpriteFrameName(const char *filename)
{
	SpriteRaider *sprite = new SpriteRaider();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}
/*
float SpriteCatherine::isexecute(int change)
{
	if (change == 1)
		spell_judge = 1;
	else if (change == 0)
		spell_judge = 0;
	return spell_judge;
}

void SpriteCatherine::reexecute()
{
		spell_judge = 0;
}
*/

bool SpriteRaider::init()
{
	if (!UnitsSprite::init())
	{
		return false;
	}
	auto winSize = Director::getInstance()->getWinSize();

	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("raider.plist");
	//SpriteFrameCache::getInstance()->addSpriteFramesWithFile("magi.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("raidermagic.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("raiderattack.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("raiderdeath.plist");
	Animation* animation0 = Anima::createWithSingleFrameName("raider0_", 0.1f, -1);
	Animation* animation1 = Anima::createWithSingleFrameName("raider1_", 0.1f, -1);
	Animation* animation2 = Anima::createWithSingleFrameName("raider2_", 0.1f, -1);
	Animation* animation3 = Anima::createWithSingleFrameName("raider3_", 0.1f, -1);
	Animation* animation4 = Anima::createWithSingleFrameName("raidermagic0_", 0.1f, 1);
	Animation* animation5 = Anima::createWithSingleFrameName("raidermagic1_", 0.1f, 1);
	Animation* animation6 = Anima::createWithSingleFrameName("raidermagic2_", 0.1f, 1);
	Animation* animation7 = Anima::createWithSingleFrameName("raidermagic3_", 0.1f, 1);
	Animation* animation8 = Anima::createWithSingleFrameName("raiderattack0_", 0.1f, 1);
	Animation* animation9 = Anima::createWithSingleFrameName("raiderattack1_", 0.1f, 1);
	Animation* animation10 = Anima::createWithSingleFrameName("raiderattack2_", 0.1f, 1);
	Animation* animation11 = Anima::createWithSingleFrameName("raiderdeath0_", 0.1f, 1);

	AnimationCache::getInstance()->addAnimation(animation0, "raider_lf");
	AnimationCache::getInstance()->addAnimation(animation1, "raider_rf");
	AnimationCache::getInstance()->addAnimation(animation2, "raider_rb");
	AnimationCache::getInstance()->addAnimation(animation3, "raider_lb");
	AnimationCache::getInstance()->addAnimation(animation4, "raider_st");
	AnimationCache::getInstance()->addAnimation(animation5, "raider_nd");
	AnimationCache::getInstance()->addAnimation(animation6, "raider_rd");
	AnimationCache::getInstance()->addAnimation(animation7, "raider_th");
	AnimationCache::getInstance()->addAnimation(animation8, "raiderattack_f");
	AnimationCache::getInstance()->addAnimation(animation9, "raiderattack_b");
	AnimationCache::getInstance()->addAnimation(animation10, "raiderattack_s");
	AnimationCache::getInstance()->addAnimation(animation11, "raiderdeath");

	this->setTexture("raider0_0.png");
	HP_bar = Sprite::create("bar.png");
	MP_bar = Sprite::create("bar.png");
	HP_bar->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height + HP_bar->getContentSize().height*0.15);
	MP_bar->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height);
	HP_bar->setAnchorPoint(Vec2(0.5, 0.5));
	MP_bar->setAnchorPoint(Vec2(0.5, 0.5));
	auto hp_bar = Sprite::create("Hp.png");
	auto mp_bar = Sprite::create("Mp.png");
	Hp_progress = ProgressTimer::create(hp_bar);
	Hp_progress->setType(ProgressTimer::Type::BAR);
	Hp_progress->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height + HP_bar->getContentSize().height*0.15);
	Hp_progress->setMidpoint(Point(0, 0.5));
	Hp_progress->setBarChangeRate(Point(1, 0));
	Hp_progress->setTag(1000000 + m_tag);
	Mp_progress = ProgressTimer::create(mp_bar);
	Mp_progress->setType(ProgressTimer::Type::BAR);
	Mp_progress->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height);
	Mp_progress->setMidpoint(Point(0, 0.5));
	Mp_progress->setBarChangeRate(Point(1, 0));
	Mp_progress->setTag(2000000 + m_tag);
	HP_bar->setScale(0.15);
	MP_bar->setScale(0.15);
	Hp_progress->setScale(0.15);
	Mp_progress->setScale(0.15);
	this->addChild(Hp_progress, 1);
	this->addChild(Mp_progress, 1);
	this->addChild(HP_bar, 0);
	this->addChild(MP_bar, 0);
	actor_property my_propertystruct;
	my_propertystruct.HP = 600;
	my_propertystruct.MP = 350;
	my_propertystruct.STA = 100;
	my_propertystruct.MHP = 600;
	my_propertystruct.MMP = 350;
	my_propertystruct.MSTA = 100;
	my_propertystruct.RHP = 1;
	my_propertystruct.RMP = 1;
	my_propertystruct.RSTA = 2;
	my_propertystruct.EVA = 0;
	my_propertystruct.SPE = 395;
	my_propertystruct.ACC = 0;
	my_propertystruct.ATK = 35;
	my_propertystruct.ATKM = 2;
	my_propertystruct.ATKS = 5;
	my_propertystruct.DEF = 0;
	my_propertystruct.RES = 0;
	my_propertystruct.RDR = 0;
	my_propertystruct.BP = 0;
	my_propertystruct.ATR = 100;
	my_propertystruct.ATRS = 200;
	my_propertystruct.ATRN = 200;
	my_propertystruct.ATRR = 100;
	my_propertystruct.ATRT = 200;
	my_propertystruct.MCS = 30;
	my_propertystruct.MCN = 5;
	my_propertystruct.MCR = 75;
	my_propertystruct.MCT = 150;
	my_propertystruct.ATS = 0.5;
	my_propertystruct.RET = 10;
	my_propertystruct.TYPE = 1;
	my_propertystruct.CDS = 15;
	my_propertystruct.CDN = 5;
	my_propertystruct.CDR = 10;
	my_propertystruct.CDF = 60;
	my_propertystruct.CDA = 0.5;
	my_propertystruct.LEVEL = 1;
	my_propertystruct.EXP = 0;
	setproperty(my_propertystruct);


	bullet0->setanimation("sword0_0.png", "sword_one");
	//bullet1->setanimation("magi0_0.png", "fly_one");
	//bullet2->setanimation("magi0_0.png", "fly_one");
	//bullet3->setanimation("magi0_0.png", "fly_one");
	//bullet4->setanimation("magi0_0.png", "fly_one");
	//this->addChild(bullet0);
	//this->addChild(bullet1);
	//this->addChild(bullet2);
	//this->addChild(bullet3);
	//this->addChild(bullet4);
	bullet0->setName("bullet0");
	bullet1->setName("bullet1");
	bullet2->setName("bullet2");
	bullet3->setName("bullet3");
	bullet4->setName("bullet4");
	bullet5->setName("bullet5");
	bullet6->setName("bullet6");
	bullet7->setName("bullet7");
	bullet8->setName("bullet8");
	bullet9->setName("bullet9");
	//bullett->setName("bullet10");

	this->setPosition(Point(winSize.width / 2, winSize.height*0.8));
	CaBody = PhysicsBody::createBox(this->getContentSize(), PHYSICSBODY_MATERIAL_DEFAULT);
	//m_hero->setPhysicsBody(CaBody);
	//CaBody->setContactTestBitmask(0xFFFFFFFF);
	CaBody->setRotationEnable(false);
	CaBody->setCategoryBitmask(0x01);
	CaBody->setCollisionBitmask(0x00000000);
	CaBody->setContactTestBitmask(0x01);
	this->setPhysicsBody(CaBody);

	//m_hero = Sprite::createWithSpriteFrameName("snow0_0.png");
	//animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lf"));
	//m_hero->runAction(RepeatForever::create(animate));


	//auto birdbody = PhysicsBody::create();
	//auto birdshape = PhysicsShapeCircle::create(BIRD_RADIUS);
	//birdbody->addShape(birdshape);
	//birdbody->setDynamic(true);
	//birdbody->setLinearDamping(0.7f);
	//birdbody->setGravityEnable(false);
	//birdbody->setCategoryBitmask(1);
	//birdbody->setCollisionBitmask(-1);
	//birdbody->setContactTestBitmask(-1);
	//m_bird->setPhysicsBody(birdbody);
	this->setAnchorPoint(Point(0.5, 0.2));
	//	this->addChild(m_hero);
	this->schedule(schedule_selector(SpriteRaider::move), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpriteRaider::death), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpriteRaider::restore), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpriteRaider::levelup), 1.0f, kRepeatForever, 0);
	//this->schedule(schedule_selector(SpriteCatherine::levelup), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpriteRaider::property_refresh), 0.01f, kRepeatForever, 0);
	//this->schedule(schedule_selector(SpriteCatherine::shock), time, kRepeatForever, 0);
	return true;
}
/*
void SpriteCatherine::setPosition(Vec2 loc)
{
	this->setPosition(loc);
}*/

void SpriteRaider::settag(int ta)
{
	this->setTag(ta);
}
void  SpriteRaider::setbody(int ca, int co, int ct)
{
	CaBody->setCategoryBitmask(ca);
	CaBody->setCollisionBitmask(co);
	CaBody->setContactTestBitmask(ct);
}



void SpriteRaider::move_lf()
{
	//auto pos = m_hero->getPosition();
//	m_hero->stopAllActions();
	//m_hero = Sprite::createWithSpriteFrameName("snow0_0.png");
//	m_hero->setTexture("snow0_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("raider_lf"));
	this->runAction(RepeatForever::create(animate));
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteRaider::move_rf()
{
	//auto pos = m_hero->getPosition();
//	m_hero->setTexture("snow1_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("raider_rf"));
	this->runAction(RepeatForever::create(animate));
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteRaider::move_rb()
{
	//auto pos = m_hero->getPosition();
//	m_hero->setTexture("snow2_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("raider_rb"));
	this->runAction(RepeatForever::create(animate));
	//	m_hero->setPosition(Point(pos));
	//	this->addChild(m_hero);
}
void SpriteRaider::move_lb()
{
	//auto pos = m_hero->getPosition();
//	m_hero->setTexture("snow3_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("raider_lb"));
	this->runAction(RepeatForever::create(animate));
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteRaider::stop_lf()
{
	//	auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this);
	this->setTexture("raider0_0.png");
	//_rect.size = m_hero->getContentSize();
	this->setTextureRect(CCRectMake(0.5, 0.2, 100, 100));
	move_judge = 0;
	//free(actionManager);
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteRaider::stop_rf()
{
	//	auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this);
	this->setTexture("raider1_0.png");
	this->setTextureRect(CCRectMake(0.5, 0.2, 100, 100));
	move_judge = 0;
	//free(actionManager);
//	m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteRaider::stop_rb()
{
	//auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this);
	//m_hero = Sprite::createWithSpriteFrameName("snow2_0.png");
	this->setTexture("raider2_0.png");
	this->setTextureRect(CCRectMake(0.5, 0.2, 100, 100));
	move_judge = 0;
	//free(actionManager);
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteRaider::stop_lb()
{
	//	auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this);
	//m_hero = Sprite::createWithSpriteFrameName("snow3_0.png");
	this->setTexture("raider3_0.png");
	this->setTextureRect(CCRectMake(0.5, 0.2, 100, 100));
	move_judge = 0;
	//	free (actionManager);
		//m_hero->setPosition(Point(pos));
	//	this->addChild(m_hero);
}

void SpriteRaider::move(float)
{
	stop_judge = 0;
	int devia = deviation;
	Vec2 move_vec;
	Vec2 true_vec;
	//int sped = get().SPE;
	int sped = 300;
	true_vec.y = pos.y;
	true_vec.x = pos.x;
	double denominator = sqrt(pow((true_vec.y - old_pos.y), 2) + pow(true_vec.x - old_pos.x, 2));
	move_vec.y = (true_vec.y - old_pos.y) * sped / denominator / move_rate;
	move_vec.x = (true_vec.x - old_pos.x) * sped / denominator / move_rate;
	if (pos != touch_pos)
	{
		touch_pos = pos;
		touch_judge = true;
	}
	else
	{
		touch_judge = false;
	}
	if (old_pos == Point(-100, -100))
	{
		old_pos = this->getPosition();
	}
	else if ((true_vec == old_pos) ||
		((((true_vec.x + devia) > old_pos.x) && ((true_vec.y + devia) > old_pos.y) && ((true_vec.x - devia) < old_pos.x) && ((true_vec.y - devia) < old_pos.y))))
	{
		stop_judge = 1;
		if (move_judge == 1)
		{
			stop_rb();
		}
		else if (move_judge == 2)
		{
			stop_rf();
		}
		else if (move_judge == 3)
		{
			stop_lb();
		}
		else if (move_judge == 4)
		{
			stop_lf();
		}
		return;
	}
	else if (true_vec.x >= old_pos.x&&true_vec.y >= old_pos.y)
	{
		old_pos.x = old_pos.x + move_vec.x;//pos
		old_pos.y = old_pos.y + move_vec.y;//pos
		this->setPosition(old_pos);
		if (touch_judge == true && move_judge != 1)
		{
			actionManager->removeAllActionsFromTarget(this);
			move_judge = 1;
			move_rb();
		}
	}
	else if (true_vec.x >= old_pos.x&&true_vec.y < old_pos.y)
	{
		old_pos.x = old_pos.x + move_vec.x;//pos
		old_pos.y = old_pos.y + move_vec.y;//pos
		this->setPosition(old_pos);
		if (touch_judge == true && move_judge != 2)
		{
			actionManager->removeAllActionsFromTarget(this);
			move_judge = 2;
			move_rf();
		}
	}
	else if (true_vec.x < old_pos.x&&true_vec.y >= old_pos.y)
	{
		old_pos.x = old_pos.x + move_vec.x;//pos
		old_pos.y = old_pos.y + move_vec.y;//pos
		this->setPosition(old_pos);
		if (touch_judge == true && move_judge != 3)
		{
			actionManager->removeAllActionsFromTarget(this);
			move_judge = 3;
			move_lb();
		}
	}
	else if (true_vec.x < old_pos.x&&true_vec.y < old_pos.y)
	{
		old_pos.x = old_pos.x + move_vec.x;//pos
		old_pos.y = old_pos.y + move_vec.y;//pos
		this->setPosition(old_pos);
		if (touch_judge == true && move_judge != 4)
		{
			actionManager->removeAllActionsFromTarget(this);
			move_judge = 4;
			move_lf();
		}
	}
}

void SpriteRaider::skillst()
{

	cooldowning_compare = 1;
	if (!state_estimation(1, 0, 1))
		return;
	if (!Mana_cost(1))
	{
		return;
	}
	cooldowning1 = 1;
	spell_judge = 1;
	
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("raider_st"));
	if (stop_judge == 0)
	{
		actionManager->removeAllActionsFromTarget(this);
		if (move_judge == 1)//rbrflblf
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_rb"));
		}
		else if (move_judge == 2)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_rf"));
		}
		else if (move_judge == 3)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_lb"));
		}
		else if (move_judge == 4)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_lf"));
		}
		this->runAction(Sequence::create(Repeat::create(animate, 1), Repeat::create(animate_one, 1000), nullptr));
	}
	else
		this->runAction(Repeat::create(animate, 1));
	//m_hero->runAction(Repeat::create(animate, 1));
	//m_hero->scheduleOnce(schedule_selector(SpriteCatherine::judge_action), Repeat::create(animate, 1)->getDuration());
//	m_hero->runAction(Repeat::create(animate, 1));
}
void SpriteRaider::skillnd()//want
{

	cooldowning_compare = 2;
	if (!state_estimation(1, 0, 1))
		return;
	if (!Mana_cost(2))
	{
		return;
	}
	cooldowning2 = 1;
	spell_judge = 1;
	//action_judge = 0;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("raider_nd"));
	if (stop_judge == 0)
	{
		actionManager->removeAllActionsFromTarget(this);
		if (move_judge == 1)//rbrflblf
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_rb"));
		}
		else if (move_judge == 2)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_rf"));
		}
		else if (move_judge == 3)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_lb"));
		}
		else if (move_judge == 4)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_lf"));
		}
		this->runAction(Sequence::create(Repeat::create(animate, 1), Repeat::create(animate_one, 1000), nullptr));
	}
	else
		this->runAction(Repeat::create(animate, 1));
	if (target == NULL || target->get().HP <= 0|| !Inrange(2))
		self_strengthen(2, 50, "SPE");
	else
	{
		this->setPosition(target->getPosition());
		target->addproperty(-this->get().ATKS, "HP");
	}	
	//m_hero->runAction(RepeatForever::create(animate));
}
void SpriteRaider::skillrd()//want
{

	cooldowning_compare = 3;
	if (!state_estimation(1, 0, 1))
		return;
	if (!Mana_cost(3))
	{
		return;
	}
	cooldowning3 = 1;
	spell_judge = 1;
	//this->schedule(schedule_selector(SpriteCatherine::move), 0.01f, kRepeatForever, 0);
	//action_judge = 2;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("raider_rd"));
	if (stop_judge == 0)
	{
		actionManager->removeAllActionsFromTarget(this);
		if (move_judge == 1)//rbrflblf
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_rb"));
		}
		else if (move_judge == 2)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_rf"));
		}
		else if (move_judge == 3)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_lb"));
		}
		else if (move_judge == 4)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_lf"));
		}
		this->runAction(Sequence::create(Repeat::create(animate, 1), Repeat::create(animate_one, 1000), nullptr));
	}
	else
		this->runAction(Repeat::create(animate, 1));

	auto bullet = bulletmaking(1);
	bullet->changeproperty(0, "ATK");
	bullet->changeproperty(0, "ATKM");
	bullet->changeproperty(0, "ATKS");
	if (this->getTag() > 20000)
		bullet->setTag(100102);
	bullet->Durable(this->getContentSize() / 2, Vec2(0, 0), 0.1, 5, 1);	
	bullet->setanimation("Evation0_0.png", "Evation_one");
	this->self_strengthen(5, 80, "EVA");
}
void SpriteRaider::skillth(Sprite* m_target)//want
{
	target = (UnitsSprite*)m_target;

	if (Inrange(4) == false)
	{
		pos = pos_should;
		return;
	}
	cooldowning_compare = 4;
	if (!state_estimation(1, 0, 1))
		return;
	if (!Mana_cost(4))
	{
		return;
	}
	cooldowning4 = 1;
	spell_judge = 1;
	//this->pauseTarget(schedule_selector(SpriteCatherine::move), true);
	//this->unschedule(schedule_selector(SpriteCatherine::move));
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("raider_th"));
	if (stop_judge == 0)
	{
		actionManager->removeAllActionsFromTarget(this);
		if (move_judge == 1)//rbrflblf
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_rb"));
		}
		else if (move_judge == 2)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_rf"));
		}
		else if (move_judge == 3)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_lb"));
		}
		else if (move_judge == 4)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("raider_lf"));
		}
		this->runAction(Sequence::create(Repeat::create(animate, 1), Repeat::create(animate_one, 1000), nullptr));
	}
	else
		this->runAction(Repeat::create(animate, 1));
	auto bullet = bulletmaking(1);
	bullet->changeproperty(bullet->get().ATK * 2+100 , "ATK");
	bullet->Durable(this->getContentSize() / 2, Vec2(0, 0), 0.1,3, 1);
	if (this->getTag() > 20000)
		bullet->setTag(100102);
	bullet->setanimation("sword0_0.png", "sword_one");
	this->setPosition(m_target->getPosition());
	this->self_strengthen(3, -300, "SPE");
	

	//schedule(CC_SCHEDULE_SELECTOR(HelloWorld::unpause), 3);
	//m_hero->runAction(RepeatForever::create(animate));
}

void SpriteRaider::skillst(float time)//want
{

	cooldowning_compare = 1;
	if (!state_estimation(0, 0, 1))
		return;
	if (!Mana_cost(1))
	{
		return;
	}
	cooldowning1 = 1;
	//	spell_judge = time;
	//	CCDelayTime* delayTime = CCDelayTime::create(time);
	//	CCCallFunc *callFunND = CCCallFun::create(CC_CALLBACK_1(callfunc_selector(SpriteCatherine::skill),this ));
	shock(time);
	pos.x = old_pos.x;
	pos.y = old_pos.y;//- this->getContentSize().height*0.3;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("raider_st"));
	int times = time / Repeat::create(animate, 1)->getDuration() + 1;
	this->runAction(Repeat::create(animate, times));
	auto bullet = bulletmaking(0);
	bullet->setanimation("sword0_0.png", "sword_one");
	bullet->Fixed(this->getPosition(), mouse_pos, this->get().ATRN);
	if (this->getTag() > 20000)
		bullet->setTag(100101);
}
void SpriteRaider::skillnd(float time)
{

	cooldowning_compare = 2;
	if (!state_estimation(0, 0, 1))
		return;
	if (!Mana_cost(2))
	{
		return;
	}
	cooldowning2 = 1;
	//	spell_judge = time;
	shock(time);
	pos.x = old_pos.x;
	pos.y = old_pos.y; //- this->getContentSize().height*0.3;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("raider_nd"));
	int times = time / Repeat::create(animate, 1)->getDuration() + 1;
	this->runAction(Repeat::create(animate, times));
	
	//bullet0->Fixed(Vec2(m_hero->getPosition().x,m_hero->getPosition().y + m_hero->getContentSize().height*0.5), Vec2(mouse_pos.x,mouse_pos.y+ m_hero->getContentSize().height));
//	bullet0->Fixed(this->getPosition(), mouse_pos,200);
}
void SpriteRaider::skillrd(float time)
{

	cooldowning_compare = 3;
	if (!state_estimation(0, 0, 1))
		return;
	if (!Mana_cost(3))
	{
		return;
	}
	cooldowning3 = 1;
	//	spell_judge = time;
	shock(time);
	pos.x = old_pos.x;
	pos.y = old_pos.y; //- this->getContentSize().height*0.3;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("raider_ed"));
	int times = time / Repeat::create(animate, 1)->getDuration() + 1;
	this->runAction(Repeat::create(animate, times));
}
void SpriteRaider::skillth(float time)
{

	cooldowning_compare = 4;
	if (!state_estimation(0, 0, 1))
		return;
	if (!Mana_cost(4))
	{
		return;
	}
	cooldowning4 = 1;
	//	spell_judge = time;
	shock(time);
	pos.x = old_pos.x;
	pos.y = old_pos.y; //- this->getContentSize().height*0.3;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("raider_th"));
	int times = time / Repeat::create(animate, 1)->getDuration() + 1;
	this->runAction(Repeat::create(animate, times));
}
bool SpriteRaider::Mana_cost(int kind)
{
	int mana_cost;
	if (kind == 1)
		mana_cost = this->get().MCS;
	else if (kind == 2)
		mana_cost = this->get().MCN;
	else if (kind == 3)
		mana_cost = this->get().MCR;
	else if (kind == 4)
		mana_cost = this->get().MCT;
	if (this->get().MP >= mana_cost)
	{
		this->changeproperty(this->get().MP - mana_cost, "MP");
		return true;
	}
	else
	{
		return false;
	}


}


void SpriteRaider::normal_attack(float ats)
{
	if (shock_judge)
		return;
	if (Inrange(0) == false)
	{
		pos = pos_should;
		return;
	}

	if (ats == 0)
		ats = this->get().ATS;
	if (!state_estimation(1, 0, 0))
		return;
	if (normal_attacked == 0)
	{
		normal_attacked = 1;
	}
	if (normal_attacked == 1)
	{
		actionManager->removeAllActionsFromTarget(this);
	}
	float time = attackspeed;
	time = time / ats;
	this->schedule(schedule_selector(SpriteRaider::doattack), time, 1, 0);
	//if (!state_estimation(0, 0, 1))
	//	return;
//	cooldowning5 = 1;
	//	spell_judge = time;
	//shock(time);
	pos.x = old_pos.x;
	pos.y = old_pos.y; //- this->getContentSize().height*0.3;
	attack_pos = pos;
	if(target->getPosition().y<this->getPosition().y)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("raiderattack_f"));
	else if (target->getPosition().y > this->getPosition().y)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("raiderattack_b"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("raiderattack_s"));
	int times = time / Repeat::create(animate, 1)->getDuration();
	if (times == 0)
		times = 1;
	this->runAction(Repeat::create(animate, times));
}
void SpriteRaider::doattack(float)
{
	if (shock_judge)
		return;
	if (attack_pos != pos)
		return;
	normal_attacked = 0;
	int dam =target->receivetotaldamage(this->get(), 0, 0, 0, 0);
	target->addproperty(-dam, "HP");
	actionManager->removeAllActionsFromTarget(this);
	this->setTexture("raider0_0.png");
}
bool SpriteRaider::Inrange(int kind)
{
	int distance;
	if (kind == 0)
		distance = this->get().ATR;
	else if (kind == 1)
		distance = this->get().ATRS;
	else if (kind == 2)
		distance = this->get().ATRN;
	else if (kind == 3)
		distance = this->get().ATRR;
	else if (kind == 4)
		distance = this->get().ATRT;
	int m_x = this->getPosition().x;
	int m_y = this->getPosition().y;
	int ta_x = target->getPosition().x;
	int ta_y = target->getPosition().y;
	double denominator = sqrt(pow((ta_y - m_y), 2) + pow(ta_x - m_x, 2));
	if (denominator > distance)
	{
		pos_should.x = m_x + (ta_x - m_x) / denominator * distance;
		pos_should.y = m_y + (ta_y - m_y) / denominator * distance;
		return false;
	}
	else
		return true;
}

void SpriteRaider::self_strengthen(int dur, int val, __String str)
{
	if (instrengthen = 1)
		return;
	else
		instrengthen = 1;
	strength_property_st = str;
	strength_property_st_num = val;
	this->addproperty(strength_property_st_num, strength_property_st);
	this->schedule(schedule_selector(SpriteRaider::strengthen), dur, 1, 0);
}
void SpriteRaider::self_strengthen(int dur, int val1, __String str1, int val2, __String str2)
{
	if (instrengthen = 1)
		return;
	else
		instrengthen = 1;
	strength_property_st = str1;
	strength_property_st_num = val1;
	strength_property_nd = str2;
	strength_property_nd_num = val2;
	this->addproperty(strength_property_st_num, strength_property_st);
	this->addproperty(strength_property_nd_num, strength_property_nd);
	this->schedule(schedule_selector(SpriteRaider::strengthen), dur, 1, 0);
}

void SpriteRaider::self_strengthen(int dur, int val1, __String str1, int val2, __String str2, int val3, __String str3)
{
	if (instrengthen = 1)
		return;
	else
		instrengthen = 1;
	strength_property_st = str1;
	strength_property_st_num = val1;
	strength_property_nd = str2;
	strength_property_nd_num = val2;
	strength_property_rd = str3;
	strength_property_rd_num = val3;
	this->addproperty(strength_property_st_num, strength_property_st);
	this->addproperty(strength_property_nd_num, strength_property_nd);
	this->addproperty(strength_property_rd_num, strength_property_rd);
	this->schedule(schedule_selector(SpriteRaider::strengthen), dur, 1, 0);
}

void SpriteRaider::self_strengthen(int dur, int val1, __String str1, int val2, __String str2, int val3, __String str3, int val4, __String str4)
{
	if (instrengthen = 1)
		return;
	else
		instrengthen = 1;
	strength_property_st = str1;
	strength_property_st_num = val1;
	strength_property_nd = str2;
	strength_property_nd_num = val2;
	strength_property_rd = str3;
	strength_property_rd_num = val3;
	strength_property_th = str4;
	strength_property_th_num = val4;
	this->addproperty(strength_property_st_num, strength_property_st);
	this->addproperty(strength_property_nd_num, strength_property_nd);
	this->addproperty(strength_property_rd_num, strength_property_rd);
	this->addproperty(strength_property_th_num, strength_property_th);
	this->schedule(schedule_selector(SpriteRaider::strengthen), dur, 1, 0);
}

void SpriteRaider::strengthen(float)
{
	instrengthen = 0;
	this->addproperty(-strength_property_st_num, strength_property_st);
	this->addproperty(-strength_property_nd_num, strength_property_nd);
	this->addproperty(-strength_property_rd_num, strength_property_rd);
	this->addproperty(-strength_property_th_num, strength_property_th);
	strength_property_st = "";
	strength_property_nd = "";
	strength_property_rd = "";
	strength_property_th = "";
}



void SpriteRaider::shock(float time)
{
	shock_judge = true;
	spell_judge = time;
	if (move_judge != 0)
		actionManager->removeAllActionsFromTarget(this);
	this->unschedule(schedule_selector(SpriteRaider::move));
	this->schedule(schedule_selector(SpriteRaider::shock_remove), time, 1, 0);
}

void SpriteRaider::shock_remove(float time)
{
	shock_judge = false;
	this->schedule(schedule_selector(SpriteRaider::move), 0.01f, kRepeatForever, 0);
	this->unschedule(schedule_selector(SpriteRaider::shock_remove));
}

void SpriteRaider::death(float time)
{
	death_judge = true;
	if (get().HP <= 0)
	{
		this->unschedule(schedule_selector(SpriteRaider::restore));
		this->actionManager->removeAllActionsFromTarget(this);
		this->shock(this->get().RET);
		//animate = Animate::create(AnimationCache::getInstance()->getAnimation("raiderdeath"));
		//this->runAction(Repeat::create(animate,1));
		this->setTexture("death.png");
		
		//changeproperty(500, "RET");
		this->unschedule(schedule_selector(SpriteRaider::death));
		if (get().RET >= 0)
			this->schedule(schedule_selector(SpriteRaider::revive), get().RET, 1, 0);
		else
			this->schedule(schedule_selector(SpriteRaider::revive), 10, 1, 0);
	}
}

void SpriteRaider::revive(float time)
{
	if (this->getTag() > 20000)
	{
		this->setPosition(Vec2(2500, 150));
		pos = Vec2(2500, 150);
		old_pos = Vec2(2500, 150);
	}

	else
	{
		this->setPosition(Vec2(300, 300));
		pos = Vec2(300, 300);
		old_pos = Vec2(300, 300);
	}
	death_judge = false;
	this->changeproperty(get().MHP, "HP");
	this->setTexture("snow0_0.png");
	this->schedule(schedule_selector(SpriteRaider::death), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpriteRaider::restore), 1.0f, kRepeatForever, 0);
	this->unschedule(schedule_selector(SpriteRaider::revive));
}

void SpriteRaider::restore(float time)
{
	int Hp = this->get().HP;
	int Mp = this->get().MP;
	if (Hp > 0 && this->get().MHP > Hp)
	{
		int Rhp = this->get().RHP;
		if ((Hp + Rhp) < this->get().MHP)
			this->changeproperty((Rhp + Hp), "HP");
		else
			this->changeproperty(this->get().MHP, "HP");
	}
	if (Mp > 0 && this->get().MMP > Mp)
	{
		int Rmp = this->get().RMP;

		if ((Mp + Rmp) < this->get().MMP)
			this->changeproperty((Rmp + Mp), "MP");
		else
			this->changeproperty(this->get().MMP, "MP");
	}
}

void SpriteRaider::levelup(float time)
{

	int level = this->consumeEXP(0, 5);
	if (level == 20)
		this->unschedule(schedule_selector(SpriteRaider::levelup));
}
//bool Inrange(int kind);


/*
bool SpriteCatherine::Back_shake()
{
	if (executeshake == 0)
	{
		if (spell_judge == 1)
		{
			float interval = Castinterval;
			executeshake = 1;
			this->schedule(schedule_selector(SpriteCatherine::Bs_reset), interval, 1, 0);
			return false;
		}
		else if (spell_judge != 0)
		{
			executeshake = 1;
			this->schedule(schedule_selector(SpriteCatherine::Bs_reset), spell_judge, 1, 0);
			return false;
		}
		else
			return true;
	}
	else if (executeshake == 1)
	{
		return false;
	}
}
void SpriteCatherine::Bs_reset(float)
{
	if(executeshake ==1)
	{
		touch_pos = old_pos;
		executeshake = 0;
		spell_judge = 0;
	}
}
*/
bool SpriteRaider::Back_shake()
{
	if (spell_judge == 1)
	{
		float interval = Castinterval;
		spell_judge = -1;
		this->schedule(schedule_selector(SpriteRaider::Bs_reset), interval, 1, 0);
		return false;
	}
	else if (spell_judge == -1)
		return false;
	else if (spell_judge != 0)
	{
		this->schedule(schedule_selector(SpriteRaider::Bs_reset), spell_judge, 1, 0);
		spell_judge = -1;
		return false;
	}
	else
		return true;

}
void SpriteRaider::Bs_reset(float)
{
	spell_judge = 0;
	//	pos.x = old_pos.x;
	//	pos.y = old_pos.y+1;
}


bool SpriteRaider::Spell_cooldown()
{
	if (cooldowning1 == 1 && cooldowning_compare == 1)
	{
		cooldowning1 = -1;
		this->schedule(schedule_selector(SpriteRaider::Sc_reset1), get().CDS, 1, 0);
		return false;
	}
	if (cooldowning2 == 1 && cooldowning_compare == 2)
	{
		cooldowning2 = -1;
		this->schedule(schedule_selector(SpriteRaider::Sc_reset2), get().CDN, 1, 0);
		return false;
	}
	if (cooldowning3 == 1 && cooldowning_compare == 3)
	{
		cooldowning3 = -1;
		this->schedule(schedule_selector(SpriteRaider::Sc_reset3), get().CDR, 1, 0);
		return false;
	}
	if (cooldowning4 == 1 && cooldowning_compare == 4)
	{
		cooldowning4 = -1;
		this->schedule(schedule_selector(SpriteRaider::Sc_reset4), get().CDF, 1, 0);
		return false;
	}
	else if (cooldowning1 == -1 && cooldowning_compare == 1)
		return false;
	else if (cooldowning2 == -1 && cooldowning_compare == 2)
		return false;
	else if (cooldowning3 == -1 && cooldowning_compare == 3)
		return false;
	else if (cooldowning4 == -1 && cooldowning_compare == 4)
		return false;
	else
		return true;

}
void SpriteRaider::Sc_reset1(float)
{
	cooldowning1 = 0;
}
void SpriteRaider::Sc_reset2(float)
{
	cooldowning2 = 0;
}
void SpriteRaider::Sc_reset3(float)
{
	cooldowning3 = 0;
}
void SpriteRaider::Sc_reset4(float)
{
	cooldowning4 = 0;
}


bool SpriteRaider::state_estimation(int shake, int shock, int spell)
{

	if (normal_attacked == 1)
	{
		this->unschedule(schedule_selector(SpriteRaider::doattack));
	}
	if (shake == 1)
		if (!Back_shake())
		{
			//CCLOG("backdef");
			return false;
		}
	//return false;
	if (shock == 1)
		shock = 1;
	if (shock_judge)
		return false;
	if (spell == 1)
		if (!Spell_cooldown())
		{
			//CCLOG("coodef");
			return false;
		}
	//	return false;
	return true;

}



void SpriteRaider::property_refresh(float)
{
	Hp_progress->setPercentage(((float)this->get().HP / this->get().MHP) * 100);
	Mp_progress->setPercentage(((float)this->get().MP / this->get().MMP) * 100);
}