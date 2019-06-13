#include "hero_Pecola.h"



SpritePecola* SpritePecola::instance1 = NULL;
SpritePecola* SpritePecola::instance2 = NULL;
SpritePecola* SpritePecola::instance3 = NULL;
SpritePecola* SpritePecola::instance4 = NULL;
SpritePecola* SpritePecola::instance5 = NULL;
SpritePecola* SpritePecola::instance6 = NULL;
SpritePecola* SpritePecola::instance7 = NULL;
SpritePecola* SpritePecola::instance8 = NULL;
SpritePecola* SpritePecola::instance9 = NULL;
SpritePecola* SpritePecola::instance10 = NULL;

SpritePecola::SpritePecola()
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
SpritePecola* SpritePecola::getInstance()
{
	if (instance1 == NULL)
	{
		instance1 = new SpritePecola();
		instance1->init();
		return instance1;
	}
	if (instance2 == NULL)
	{
		instance2 = new SpritePecola();
		instance2->init();
		return instance2;
	}
	if (instance3 == NULL)
	{
		instance3 = new SpritePecola();
		instance3->init();
		return instance3;
	}
	if (instance4 == NULL)
	{
		instance4 = new SpritePecola();
		instance4->init();
		return instance4;
	}
	if (instance5 == NULL)
	{
		instance5 = new SpritePecola();
		instance5->init();
		return instance5;
	}
	if (instance6 == NULL)
	{
		instance6 = new SpritePecola();
		instance6->init();
		return instance6;
	}
	if (instance7 == NULL)
	{
		instance7 = new SpritePecola();
		instance7->init();
		return instance7;
	}
	if (instance8 == NULL)
	{
		instance8 = new SpritePecola();
		instance8->init();
		return instance8;
	}
	if (instance9 == NULL)
	{
		instance9 = new SpritePecola();
		instance9->init();
		return instance9;
	}
	if (instance10 == NULL)
	{
		instance10 = new SpritePecola();
		instance10->init();
		return instance10;
	}
}

BulletSprite* SpritePecola::bulletmaking(int kind)
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
	else if (!this->getChildByName("bullet9"))
	{
	if (kind == 0)
	{
		if (bpdamage())
			bullet9->changeproperty(2 * createdamage(0), "ATK");
		else
			bullet9->changeproperty(createdamage(0), "ATK");
	}
	else if (kind == 1)
	{
		bullet9->changeproperty(createdamage(1), "ATKM");
	}
	else
		bullet9->changeproperty(createdamage(2), "ATKS");
	this->addChild(bullet9);
	return bullet9;
	}
	else if (!this->getChildByName("bullet10"))
	{
	if (kind == 0)
	{
		if (bpdamage())
			bullet10->changeproperty(2 * createdamage(0), "ATK");
		else
			bullet10->changeproperty(createdamage(0), "ATK");
	}
	else if (kind == 1)
	{
		bullet10->changeproperty(createdamage(1), "ATKM");
	}
	else
		bullet10->changeproperty(createdamage(2), "ATKS");
	this->addChild(bullet10);
	return bullet10;
	}
	else return NULL;
}



SpritePecola * SpritePecola::create(const char *filename)
{
	SpritePecola *sprite = new SpritePecola();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}

SpritePecola *  SpritePecola::createWithSpriteFrameName(const char *filename)
{
	SpritePecola *sprite = new SpritePecola();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}


bool SpritePecola::init()
{
	if (!UnitsSprite::init())
	{
		return false;
	}
	auto winSize = Director::getInstance()->getWinSize();

	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("hana.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("hanaattack.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("swift.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("pecola.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("pecolamagic.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("pecolaattack.plist");
	Animation* animation0 = Anima::createWithSingleFrameName("hana0_", 0.1f, -1);
	Animation* animation1 = Anima::createWithSingleFrameName("hana1_", 0.1f, -1);
	Animation* animation2 = Anima::createWithSingleFrameName("hana2_", 0.1f, -1);
	Animation* animation3 = Anima::createWithSingleFrameName("hana3_", 0.1f, -1);
	Animation* animation4 = Anima::createWithSingleFrameName("pecola0_", 0.1f, -1);
	Animation* animation5 = Anima::createWithSingleFrameName("pecola1_", 0.1f, -1);
	Animation* animation6 = Anima::createWithSingleFrameName("pecola2_", 0.1f, -1);
	Animation* animation7 = Anima::createWithSingleFrameName("pecola3_", 0.1f, -1);
	Animation* animation8 = Anima::createWithSingleFrameName("swift0_", 0.1f, -1);
	Animation* animation9 = Anima::createWithSingleFrameName("hanaattack0_", 0.1f, -1);
	Animation* animation10 = Anima::createWithSingleFrameName("hanaattack1_", 0.1f, -1);
	Animation* animation11 = Anima::createWithSingleFrameName("pecolaattack0_", 0.1f, 1);
	Animation* animation12 = Anima::createWithSingleFrameName("pecolaattack1_", 0.1f, 1);
	Animation* animation13 = Anima::createWithSingleFrameName("pecolaattack2_", 0.1f, 1);
	Animation* animation14 = Anima::createWithSingleFrameName("pecolaattack3_", 0.1f, 1);
	Animation* animation15 = Anima::createWithSingleFrameName("pecolamagic0_", 0.1f, 1);
	Animation* animation16 = Anima::createWithSingleFrameName("pecolamagic1_", 0.1f, 1);
	//Animation* animation8 = Anima::createWithSingleFrameName("magi0_", 0.1f, -1);
	AnimationCache::getInstance()->addAnimation(animation0, "hana_lf");
	AnimationCache::getInstance()->addAnimation(animation1, "hana_rf");
	AnimationCache::getInstance()->addAnimation(animation2, "hana_rb");
	AnimationCache::getInstance()->addAnimation(animation3, "hana_lb");
	AnimationCache::getInstance()->addAnimation(animation4, "pecola_lf");
	AnimationCache::getInstance()->addAnimation(animation5, "pecola_rf");
	AnimationCache::getInstance()->addAnimation(animation6, "pecola_rb");
	AnimationCache::getInstance()->addAnimation(animation7, "pecola_lb");
	AnimationCache::getInstance()->addAnimation(animation8, "swift");
	AnimationCache::getInstance()->addAnimation(animation9, "hanaattack");
	AnimationCache::getInstance()->addAnimation(animation10, "hanamagic");
	AnimationCache::getInstance()->addAnimation(animation11, "pecolaattack_lf");
	AnimationCache::getInstance()->addAnimation(animation12, "pecolaattack_rf");
	AnimationCache::getInstance()->addAnimation(animation13, "pecolaattack_rb");
	AnimationCache::getInstance()->addAnimation(animation14, "pecolaattack_lb");
	AnimationCache::getInstance()->addAnimation(animation15, "pecola_st");
	AnimationCache::getInstance()->addAnimation(animation16, "pecola_nd");

	this->setTexture("hana0_0.png");
	HP_bar = Sprite::create("bar.png");
	MP_bar = Sprite::create("bar.png");
	HP_bar->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height + HP_bar->getContentSize().height*0.15);
	MP_bar->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height);
	HP_bar->setAnchorPoint(Vec2(0.5, 0.5));
	MP_bar->setAnchorPoint(Vec2(0.5, 0.5));
	auto hp_bar = Sprite::create("Hp.png");
	auto mp_bar = Sprite::create("Hp.png");
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
	my_propertystruct.HP = 400;
	my_propertystruct.MP = 0;
	my_propertystruct.STA = 100;
	my_propertystruct.MHP = 400;
	my_propertystruct.MMP = 0;
	my_propertystruct.MSTA = 100;
	my_propertystruct.RHP = 5;
	my_propertystruct.RMP = 0;
	my_propertystruct.RSTA = 2;
	my_propertystruct.EVA = 0;
	my_propertystruct.SPE = 400;
	my_propertystruct.ACC = 0;
	my_propertystruct.ATK = 20;
	my_propertystruct.ATKM = 20;
	my_propertystruct.ATKS = 20;
	my_propertystruct.DEF = 0;
	my_propertystruct.RES = 0;
	my_propertystruct.RDR = 5;
	my_propertystruct.BP = 5;
	my_propertystruct.ATR = 500;
	my_propertystruct.ATRS = 500;
	my_propertystruct.ATRN = 500;
	my_propertystruct.ATRR = 500;
	my_propertystruct.ATRT = 500;
	my_propertystruct.MCS = 50;
	my_propertystruct.MCN = 50;
	my_propertystruct.MCR = 50;
	my_propertystruct.MCT = 200;
	my_propertystruct.ATS = 0.5;
	my_propertystruct.RET = 10;
	my_propertystruct.TYPE = 1;
	my_propertystruct.CDS = 10;
	my_propertystruct.CDN = 5;
	my_propertystruct.CDR = 20;
	my_propertystruct.CDF = 50;
	my_propertystruct.CDA = 0.8;
	my_propertystruct.LEVEL = 1;
	my_propertystruct.EXP = 0;
	setproperty(my_propertystruct);

	bullet0->setanimation("magi0_0.png", "fly_one");
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
	bullet10->setName("bullet10");

	this->setPosition(Point(winSize.width / 2, winSize.height*0.8));
	CaBody = PhysicsBody::createBox(this->getContentSize(), PHYSICSBODY_MATERIAL_DEFAULT);
	CaBody->setRotationEnable(false);
	CaBody->setCategoryBitmask(0x01);
	CaBody->setCollisionBitmask(0x00000000);
	CaBody->setContactTestBitmask(0x01);
	this->setPhysicsBody(CaBody);

	//m_hero = Sprite::createWithSpriteFrameName("snow0_0.png");
	//animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lf"));
	//m_hero->runAction(RepeatForever::create(animate));

	special_hint->setVisible(FALSE);
	this->addChild(special_hint);
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
	this->schedule(schedule_selector(SpritePecola::move), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpritePecola::death), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpritePecola::restore), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpritePecola::levelup), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpritePecola::swift_judge), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpritePecola::property_refresh), 0.01f, kRepeatForever, 0);
	//this->schedule(schedule_selector(SpriteCatherine::shock), time, kRepeatForever, 0);
	return true;
}

void SpritePecola::settag(int ta)
{
	this->setTag(ta);
	m_tag = ta;
}
void  SpritePecola::setbody(int ca, int co, int ct)
{
	CaBody->setCategoryBitmask(ca);
	CaBody->setCollisionBitmask(co);
	CaBody->setContactTestBitmask(ct);
}

void SpritePecola::swift_judge(float)
{
	if (this->get().LEVEL >= 2 && swifted == false)
	{
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("swift"));
		shock(1.6f);
		this->runAction(Repeat::create(animate, 1));
		swifted = true;
		this->addproperty(200, "HP");
		this->addproperty(10, "ATKS");
		this->addproperty(20, "EVA");
		this->addproperty(0.5, "ATS");
		this->schedule(schedule_selector(SpritePecola::special_attack), 0.1f, kRepeatForever, 0);
	}
	else
		this->unschedule(schedule_selector(SpritePecola::swift_judge));
}
void SpritePecola::special_attack(float)
{
	if (special_times == 3)
	{
		special_times = 0;
		this->self_strengthen(2, 50, "ATK");
		special_hint->setVisible(false);
	}
	else
	{
		special_hint->setVisible(true);
		if (special_times == 0)
			special_hint->setTexture("active_one.png");
		else if((special_times == 1))
			special_hint->setTexture("active_one2.png");
		else if ((special_times == 2))
			special_hint->setTexture("active_one3.png");
		special_hint->setPosition(Vec2(this->getContentSize().width/2, this->getContentSize().height*1.5));
	}

}

void SpritePecola::move_lf()
{
	//auto pos = m_hero->getPosition();
//	m_hero->stopAllActions();
	//m_hero = Sprite::createWithSpriteFrameName("snow0_0.png");
//	m_hero->setTexture("snow0_0.png");
	if(swifted)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_lf"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hana_lf"));
	this->runAction(RepeatForever::create(animate));
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpritePecola::move_rf()
{
	//auto pos = m_hero->getPosition();
//	m_hero->setTexture("snow1_0.png");
	if (swifted)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_rf"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hana_rf"));
	this->runAction(RepeatForever::create(animate));
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpritePecola::move_rb()
{
	//auto pos = m_hero->getPosition();
//	m_hero->setTexture("snow2_0.png");
	if (swifted)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_rb"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hana_rb"));
	this->runAction(RepeatForever::create(animate));
	//	m_hero->setPosition(Point(pos));
	//	this->addChild(m_hero);
}
void SpritePecola::move_lb()
{
	//auto pos = m_hero->getPosition();
//	m_hero->setTexture("snow3_0.png");
	if (swifted)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_lb"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hana_lb"));
	this->runAction(RepeatForever::create(animate));
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpritePecola::stop_lf()
{
	//	auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this);
	if (swifted)
		this->setTexture("pecola0_0.png");
	else
		this->setTexture("hana0_0.png");
	//_rect.size = m_hero->getContentSize();
	this->setTextureRect(CCRectMake(0.5, 0.2, 100, 100));
	move_judge = 0;
	//free(actionManager);
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpritePecola::stop_rf()
{
	//	auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this);
	if (swifted)
		this->setTexture("pecola1_0.png");
	else
		this->setTexture("hana1_0.png");
	this->setTextureRect(CCRectMake(0.5, 0.2, 100, 100));
	move_judge = 0;
	//free(actionManager);
//	m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpritePecola::stop_rb()
{
	//auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this);
	//m_hero = Sprite::createWithSpriteFrameName("snow2_0.png");
	if (swifted)
		this->setTexture("pecola2_0.png");
	else
		this->setTexture("hana2_0.png");
	this->setTextureRect(CCRectMake(0.5, 0.2, 100, 100));
	move_judge = 0;
	//free(actionManager);
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpritePecola::stop_lb()
{
	//	auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this);
	//m_hero = Sprite::createWithSpriteFrameName("snow3_0.png");
	if (swifted)
		this->setTexture("pecola3_0.png");
	else
		this->setTexture("hana3_0.png");
	this->setTextureRect(CCRectMake(0.5, 0.2, 100, 100));
	move_judge = 0;
	//	free (actionManager);
		//m_hero->setPosition(Point(pos));
	//	this->addChild(m_hero);
}


void SpritePecola::move(float)
{
	stop_judge = 0;
	int devia = deviation;
	Vec2 move_vec;
	Vec2 true_vec;
	//int sped = get().SPE;
	int sped = 300;
	//true_vec.y = pos.y+ m_hero->getContentSize().height*0.3;
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

void SpritePecola::unchoose(float)
{
	this->setTag(m_tag);
}

void SpritePecola::skillst(Sprite* m_target)
{
	target = (UnitsSprite*)m_target;
	cooldowning_compare = 1;
	if (!state_estimation(1, 0, 1))
		return;
	if (!Mana_cost(1))
	{
		return;
	}
	cooldowning1 = 1;
	spell_judge = 1;
	//this->self_strengthen(10, 15, "RMP", this->get().ATKM*0.5, "ATKM");
	if (swifted)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_st"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hanamagic"));
	if (stop_judge == 0)
	{
		actionManager->removeAllActionsFromTarget(this);
		if (move_judge == 1)//rbrflblf
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_rb"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_rb"));
		
		}
		else if (move_judge == 2)
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_rf"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_rf"));
		}
		else if (move_judge == 3)
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_lb"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_lb"));
		}
		else if (move_judge == 4)
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_lf"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_lf"));
		}
		this->runAction(Sequence::create(Repeat::create(animate, 1), Repeat::create(animate_one, 1000), nullptr));
	}
	else
		this->runAction(Repeat::create(animate, 1));
	//m_hero->runAction(Repeat::create(animate, 1));
	//m_hero->scheduleOnce(schedule_selector(SpriteCatherine::judge_action), Repeat::create(animate, 1)->getDuration());
//	m_hero->runAction(Repeat::create(animate, 1));
	if (swifted)
	{
		int dam = target->receivetotaldamage(this->get(), 0, 0, 0, 0);
		target->addproperty(-dam /2,"HP");
		Vec2 t_pos = target->getPosition();
		target->setPosition(this->getPosition());
		this->setPosition(t_pos);
	}
	else
	{
		auto bullet = bulletmaking(0);
		bullet->changeproperty(bullet->get().ATK / 2, "ATK");
		bullet->setanimation("magi0_0.png", "fly_one");
		bullet->Followed((Sprite*)target, 200);
		if (this->getTag() > 20000)
			bullet->setTag(100101);
	}

}
void SpritePecola::skillnd()
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
	if (swifted)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_nd"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hanamagic"));
	if (stop_judge == 0)
	{
		actionManager->removeAllActionsFromTarget(this);
		if (move_judge == 1)//rbrflblf
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_rb"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_rb"));
		}
		else if (move_judge == 2)
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_rf"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_rf"));
		}
		else if (move_judge == 3)
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_lb"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_lb"));
		}
		else if (move_judge == 4)
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_lf"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_lf"));
		}
		this->runAction(Sequence::create(Repeat::create(animate, 1), Repeat::create(animate_one, 1000), nullptr));
	}
	else
		this->runAction(Repeat::create(animate, 1));
	if (swifted)
	{
		SpriteWall* m_wall = SpriteWall::getInstance();
		m_wall->setPosition(mouse_pos);
		m_wall->collopse_time(3);
	}
	else
	{
		if (this->get().RHP < 10)
			this->addproperty(1, "RHP");
	}
	//m_hero->runAction(RepeatForever::create(animate));
}
void SpritePecola::skillrd()
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
	if (swifted)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_st"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hanamagic"));
	if (stop_judge == 0)
	{
		actionManager->removeAllActionsFromTarget(this);
		if (move_judge == 1)//rbrflblf
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_rb"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_rb"));
		}
		else if (move_judge == 2)
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_rf"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_rf"));
		}
		else if (move_judge == 3)
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_lb"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_lb"));
		}
		else if (move_judge == 4)
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_lf"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_lf"));
		}
		this->runAction(Sequence::create(Repeat::create(animate, 1), Repeat::create(animate_one, 1000), nullptr));
	}
	else
		this->runAction(Repeat::create(animate, 1));
	auto bullet = bulletmaking(1);
	bullet->changeproperty(0,"ATKM");
	bullet->changeproperty(0, "ATK");
	bullet->changeproperty(0, "ATKS");
	bullet->Durable(this->getContentSize() / 2, Vec2(0, 0), 0.1, 5, 1);
	if (this->getTag() > 20000)
		bullet->setTag(100102);
	bullet->setanimation("Evation0_0.png", "Evation.plist",1);
	this->setTag(127);
	this->schedule(schedule_selector(SpritePecola::unchoose), 1, 1, 0);
}


void SpritePecola::skillth(Sprite* m_target)
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
	if (swifted)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_nd"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hanamagic"));
	if (stop_judge == 0)
	{
		actionManager->removeAllActionsFromTarget(this);
		if (move_judge == 1)//rbrflblf
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_rb"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_rb"));
		}
		else if (move_judge == 2)
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_rf"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_rf"));
		}
		else if (move_judge == 3)
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_lb"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_lb"));
		}
		else if (move_judge == 4)
		{
			if (swifted)
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_lf"));
			else
				animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("hana_lf"));
		}
		this->runAction(Sequence::create(Repeat::create(animate, 1), Repeat::create(animate_one, 1000), nullptr));
	}
	else
		this->runAction(Repeat::create(animate, 1));
	if (swifted)
	{
		auto bullet = bulletmaking(0);
		bullet->Followed(target, 200);
		bullet->setanimation("chaos0_0.png", "chaos_one", 1);
		bullet->setPosition(target->getPosition() - this->getPosition());
		target->addproperty(-target->get().HP / 2, "HP");
		bullet->setTag(100004);
	}
	else
	{
		auto bullet = bulletmaking(0);
		bullet->changeproperty(bullet->get().ATK * 3, "ATK");
		bullet->setanimation("magi0_0.png", "fly_one");
		bullet->Followed((Sprite*)target, 200);
		if (this->getTag() > 20000)
			bullet->setTag(100101);
	}
	//schedule(CC_SCHEDULE_SELECTOR(HelloWorld::unpause), 3);
	//m_hero->runAction(RepeatForever::create(animate));
}

void SpritePecola::skillst(float time)
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
	if (swifted)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_st"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hanamagic"));
	int times = time / Repeat::create(animate, 1)->getDuration() + 1;
	this->runAction(Repeat::create(animate, times));
}
void SpritePecola::skillnd(float time)
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
	if (swifted)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_nd"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hanamagic"));
	int times = time / Repeat::create(animate, 1)->getDuration() + 1;
	this->runAction(Repeat::create(animate, times));
	auto bullet = bulletmaking(0);
	bullet->setanimation("magi0_0.png", "fly_one");
	bullet->Fixed(this->getPosition(), mouse_pos, this->get().ATRN);
	if (this->getTag() > 20000)
		bullet->setTag(100101);
	//bullet0->Fixed(Vec2(m_hero->getPosition().x,m_hero->getPosition().y + m_hero->getContentSize().height*0.5), Vec2(mouse_pos.x,mouse_pos.y+ m_hero->getContentSize().height));
//	bullet0->Fixed(this->getPosition(), mouse_pos,200);
}
void SpritePecola::skillrd(float time)
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
	if (swifted)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_nd"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hanamagic"));
	int times = time / Repeat::create(animate, 1)->getDuration() + 1;
	this->runAction(Repeat::create(animate, times));
}
void SpritePecola::skillth(float time)
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
	if (swifted)
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecola_st"));
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hanamagic"));
	int times = time / Repeat::create(animate, 1)->getDuration() + 1;
	this->runAction(Repeat::create(animate, times));
}
bool SpritePecola::Mana_cost(int kind)
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
	if (this->get().HP >= mana_cost)
	{
		this->changeproperty(this->get().HP - mana_cost, "HP");
		return true;
	}
	else
	{
		return false;
	}


}


void SpritePecola::normal_attack(float ats)
{
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
	this->schedule(schedule_selector(SpritePecola::doattack), time, 1, 0);
	//if (!state_estimation(0, 0, 1))
	//	return;
//	cooldowning5 = 1;
	//	spell_judge = time;
	//shock(time);
	pos.x = old_pos.x;
	pos.y = old_pos.y; //- this->getContentSize().height*0.3;
	attack_pos = pos;
	if (swifted)
	{
		if (move_judge == 1)//rbrflblf
		{
			animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecolaattack_rb"));
		}
		else if (move_judge == 2)
		{
			animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecolaattack_rf"));
		}
		else if (move_judge == 3)
		{
			animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecolaattack_lb"));
		}
		else if (move_judge == 4)
		{
			animate = Animate::create(AnimationCache::getInstance()->getAnimation("pecolaattack_lf"));
		}
	}
	else
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("hanaattack"));
	int times = time / Repeat::create(animate, 1)->getDuration();
	if (times == 0)
		times = 1;
	this->runAction(Repeat::create(animate, times));
}
void SpritePecola::doattack(float)
{
	if (attack_pos != pos)
		return;
	special_times += 1;
	normal_attacked = 0;
	auto bullet = bulletmaking(0);
	bullet->setanimation("magi0_0.png", "fly_one");
	bullet->Followed(target, 200);
	if (this->getTag() > 20000)
		bullet->setTag(100101);
	bullet->addproperty(this->get().ATKS, "ATKS");
	this->addproperty(this->get().ATKS / 5, "HP");
	actionManager->removeAllActionsFromTarget(this);
	if (swifted)
	{
		if (move_judge == 1)//rbrflblf
		{
			this->setTexture("pecola0_0.png");
		}
		else if (move_judge == 2)
		{
			this->setTexture("pecola1_0.png");
		}
		else if (move_judge == 3)
		{
			this->setTexture("pecola2_0.png");
		}
		else if (move_judge == 4)
		{
			this->setTexture("pecola3_0.png");
		}
	}
	else
		this->setTexture("hana0_0.png");
}
bool SpritePecola::Inrange(int kind)
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

void SpritePecola::self_strengthen(int dur, int val, __String str)
{
	if (instrengthen = 1)
		return;
	else
		instrengthen = 1;
	strength_property_st = str;
	strength_property_st_num = val;
	this->addproperty(strength_property_st_num, strength_property_st);
	this->schedule(schedule_selector(SpritePecola::strengthen), dur, 1, 0);
}
void SpritePecola::self_strengthen(int dur, int val1, __String str1, int val2, __String str2)
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
	this->schedule(schedule_selector(SpritePecola::strengthen), dur, 1, 0);
}

void SpritePecola::self_strengthen(int dur, int val1, __String str1, int val2, __String str2, int val3, __String str3)
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
	this->schedule(schedule_selector(SpritePecola::strengthen), dur, 1, 0);
}

void SpritePecola::self_strengthen(int dur, int val1, __String str1, int val2, __String str2, int val3, __String str3, int val4, __String str4)
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
	this->schedule(schedule_selector(SpritePecola::strengthen), dur, 1, 0);
}

void SpritePecola::strengthen(float)
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



void SpritePecola::shock(float time)
{
	spell_judge = time;
	if (move_judge != 0)
		actionManager->removeAllActionsFromTarget(this);
	this->unschedule(schedule_selector(SpritePecola::move));
	this->schedule(schedule_selector(SpritePecola::shock_remove), time, 1, 0);
}

void SpritePecola::shock_remove(float time)
{
	this->schedule(schedule_selector(SpritePecola::move), 0.01f, kRepeatForever, 0);
	this->unschedule(schedule_selector(SpritePecola::shock_remove));
}

void SpritePecola::death(float time)
{
	death_judge = true;
	if (get().HP <= 0)
	{
		this->unschedule(schedule_selector(SpritePecola::restore));
		this->actionManager->removeAllActionsFromTarget(this);
		this->setTexture("death.png");
		this->unschedule(schedule_selector(SpritePecola::death));
		if (get().RET >= 0)
			this->schedule(schedule_selector(SpritePecola::revive), get().RET, 1, 0);
		else
			this->schedule(schedule_selector(SpritePecola::revive), 10, 1, 0);
	}
}

void SpritePecola::revive(float time)
{
	death_judge = false;
	this->changeproperty(get().MHP, "HP");
	if (swifted)
		this->setTexture("pecola0_0.png");
	else
		this->setTexture("hana0_0.png");
	this->schedule(schedule_selector(SpritePecola::death), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpritePecola::restore), 1.0f, kRepeatForever, 0);
	this->unschedule(schedule_selector(SpritePecola::revive));
}

void SpritePecola::restore(float time)
{
	int Hp = this->get().HP;
	if (Hp > 0 && this->get().MHP > Hp)
	{
		int Rhp = this->get().RHP;
		if ((Hp + Rhp) < this->get().MHP)
			this->changeproperty((Rhp + Hp), "HP");
		else
			this->changeproperty(this->get().MHP, "HP");
	}
}

void SpritePecola::levelup(float time)
{

	int level = this->consumeEXP(0, 5);
	if (level == 20)
		this->unschedule(schedule_selector(SpritePecola::levelup));
}

bool SpritePecola::Back_shake()
{
	if (spell_judge == 1)
	{
		float interval = Castinterval;
		spell_judge = -1;
		this->schedule(schedule_selector(SpritePecola::Bs_reset), interval, 1, 0);
		return false;
	}
	else if (spell_judge == -1)
		return false;
	else if (spell_judge != 0)
	{
		this->schedule(schedule_selector(SpritePecola::Bs_reset), spell_judge, 1, 0);
		spell_judge = -1;
		return false;
	}
	else
		return true;

}
void SpritePecola::Bs_reset(float)
{
	spell_judge = 0;
	//	pos.x = old_pos.x;
	//	pos.y = old_pos.y+1;
}


bool SpritePecola::Spell_cooldown()
{
	if (cooldowning1 == 1 && cooldowning_compare == 1)
	{
		cooldowning1 = -1;
		this->schedule(schedule_selector(SpritePecola::Sc_reset1), get().CDS, 1, 0);
		return false;
	}
	if (cooldowning2 == 1 && cooldowning_compare == 2)
	{
		cooldowning2 = -1;
		this->schedule(schedule_selector(SpritePecola::Sc_reset2), get().CDN, 1, 0);
		return false;
	}
	if (cooldowning3 == 1 && cooldowning_compare == 3)
	{
		cooldowning3 = -1;
		this->schedule(schedule_selector(SpritePecola::Sc_reset3), get().CDR, 1, 0);
		return false;
	}
	if (cooldowning4 == 1 && cooldowning_compare == 4)
	{
		cooldowning4 = -1;
		this->schedule(schedule_selector(SpritePecola::Sc_reset4), get().CDF, 1, 0);
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
void SpritePecola::Sc_reset1(float)
{
	cooldowning1 = 0;
}
void SpritePecola::Sc_reset2(float)
{
	cooldowning2 = 0;
}
void SpritePecola::Sc_reset3(float)
{
	cooldowning3 = 0;
}
void SpritePecola::Sc_reset4(float)
{
	cooldowning4 = 0;
}


bool SpritePecola::state_estimation(int shake, int shock, int spell)
{

	if (normal_attacked == 1)
	{
		this->unschedule(schedule_selector(SpritePecola::doattack));
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
	if (spell == 1)
		if (!Spell_cooldown())
		{
			//CCLOG("coodef");
			return false;
		}
	//	return false;
	return true;

}



void SpritePecola::property_refresh(float)
{
	Hp_progress->setPercentage(((float)this->get().HP / this->get().MHP) * 100);
	Mp_progress->setPercentage(((float)this->get().HP / this->get().MHP) * 100);
}