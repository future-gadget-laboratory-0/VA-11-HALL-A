#include "hero_Catherine.h"



SpriteCatherine* SpriteCatherine::instance1 = NULL;
SpriteCatherine* SpriteCatherine::instance2 = NULL;
SpriteCatherine* SpriteCatherine::instance3 = NULL;
SpriteCatherine* SpriteCatherine::instance4 = NULL;
SpriteCatherine* SpriteCatherine::instance5 = NULL;
SpriteCatherine* SpriteCatherine::instance6 = NULL;
SpriteCatherine* SpriteCatherine::instance7 = NULL;
SpriteCatherine* SpriteCatherine::instance8 = NULL; 
SpriteCatherine* SpriteCatherine::instance9 = NULL;
SpriteCatherine* SpriteCatherine::instance10 = NULL;

SpriteCatherine::SpriteCatherine()
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
SpriteCatherine* SpriteCatherine::getInstance()
{
	if (instance1 == NULL)
	{
		instance1 = new SpriteCatherine();
		instance1->init();
		return instance1;
	}
	if (instance2 == NULL)
	{
		instance2 = new SpriteCatherine();
		instance2->init();
		return instance2;
	}
	if (instance3 == NULL)
	{
		instance3 = new SpriteCatherine();
		instance3->init();
		return instance3;
	}
	if (instance4 == NULL)
	{
		instance4 = new SpriteCatherine();
		instance4->init();
		return instance4;
	}
	if (instance5 == NULL)
	{
		instance5 = new SpriteCatherine();
		instance5->init();
		return instance5;
	}
	if (instance6 == NULL)
	{
		instance6 = new SpriteCatherine();
		instance6->init();
		return instance6;
	}
	if (instance7 == NULL)
	{
		instance7 = new SpriteCatherine();
		instance7->init();
		return instance7;
	}
	if (instance8 == NULL)
	{
		instance8 = new SpriteCatherine();
		instance8->init();
		return instance8;
	}
	if (instance9 == NULL)
	{
		instance9 = new SpriteCatherine();
		instance9->init();
		return instance9;
	}
	if (instance10 == NULL)
	{
		instance10 = new SpriteCatherine();
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

BulletSprite* SpriteCatherine::bulletmaking(int kind)
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
			return bullet3;
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
			return bullet4;
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
			return bullet5;
	}
	else return NULL;
}



SpriteCatherine * SpriteCatherine::create(const char *filename)
{
	SpriteCatherine *sprite = new SpriteCatherine();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}

SpriteCatherine *  SpriteCatherine::createWithSpriteFrameName(const char *filename)
{
	SpriteCatherine *sprite = new SpriteCatherine();
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

bool SpriteCatherine::init()
{
	if (!UnitsSprite::init())
	{
		return false;
	}
	auto winSize = Director::getInstance()->getWinSize();

	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("snow.plist");
	//SpriteFrameCache::getInstance()->addSpriteFramesWithFile("magi.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("magicusing.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("snowattack.plist");
	Animation* animation0 = Anima::createWithSingleFrameName("snow0_", 0.1f, -1);
	Animation* animation1 = Anima::createWithSingleFrameName("snow1_", 0.1f, -1);
	Animation* animation2 = Anima::createWithSingleFrameName("snow2_", 0.1f, -1);
	Animation* animation3 = Anima::createWithSingleFrameName("snow3_", 0.1f, -1);
	Animation* animation4 = Anima::createWithSingleFrameName("magicusing0_", 0.1f, 1);
	Animation* animation5 = Anima::createWithSingleFrameName("magicusing1_", 0.1f, 1);
	Animation* animation6 = Anima::createWithSingleFrameName("magicusing2_", 0.1f, 1);
	Animation* animation7 = Anima::createWithSingleFrameName("magicusing3_", 0.1f, 1); 
	Animation* animation8 = Anima::createWithSingleFrameName("snowattack0_", 0.1f, 1);
	//Animation* animation8 = Anima::createWithSingleFrameName("magi0_", 0.1f, -1);
	AnimationCache::getInstance()->addAnimation(animation0, "snow_lf");
	AnimationCache::getInstance()->addAnimation(animation1, "snow_rf");
	AnimationCache::getInstance()->addAnimation(animation2, "snow_rb");
	AnimationCache::getInstance()->addAnimation(animation3, "snow_lb");
	AnimationCache::getInstance()->addAnimation(animation4, "snow_st");
	AnimationCache::getInstance()->addAnimation(animation5, "snow_nd");
	AnimationCache::getInstance()->addAnimation(animation6, "snow_rd");
	AnimationCache::getInstance()->addAnimation(animation7, "snow_th");
	AnimationCache::getInstance()->addAnimation(animation8, "snowattack");
	this->setTexture("snow0_0.png");
	HP_bar = Sprite::create("bar.png");
	MP_bar = Sprite::create("bar.png");
	HP_bar->setPosition(this->getPosition().x+this->getContentSize().width/2,this->getPosition().y+this->getContentSize().height+HP_bar->getContentSize().height*0.15);
	MP_bar->setPosition(this->getPosition().x+this->getContentSize().width/2,this->getPosition().y + this->getContentSize().height);
	HP_bar->setAnchorPoint(Vec2(0.5, 0.5));
	MP_bar->setAnchorPoint(Vec2(0.5, 0.5));
	auto hp_bar = Sprite::create("Hp.png");
	auto mp_bar = Sprite::create("Mp.png");
	 Hp_progress = ProgressTimer::create(hp_bar);
	Hp_progress->setType(ProgressTimer::Type::BAR);
	Hp_progress->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height + HP_bar->getContentSize().height*0.15);
	Hp_progress->setMidpoint(Point(0, 0.5));
	Hp_progress->setBarChangeRate(Point(1, 0));
	Hp_progress->setTag(1000000+m_tag);
	Mp_progress = ProgressTimer::create(mp_bar);
	Mp_progress->setType(ProgressTimer::Type::BAR);
	Mp_progress->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height);
	Mp_progress->setMidpoint(Point(0, 0.5));
	Mp_progress->setBarChangeRate(Point(1, 0));
	Mp_progress->setTag(2000000+m_tag);	
	HP_bar->setScale(0.15);
	MP_bar->setScale(0.15);
	Hp_progress->setScale(0.15);
	Mp_progress->setScale(0.15);
	this->addChild(Hp_progress, 1);
	this->addChild(Mp_progress, 1);
	this->addChild(HP_bar, 0);
	this->addChild(MP_bar, 0);
	actor_property my_propertystruct;
	my_propertystruct.HP = 500;
	my_propertystruct.MP = 200;
	my_propertystruct.STA = 100;
	my_propertystruct.MHP = 500;
	my_propertystruct.MMP = 200;
	my_propertystruct.MSTA = 100;
	my_propertystruct.RHP = 1;
	my_propertystruct.RMP = 1;
	my_propertystruct.RSTA = 2;
	my_propertystruct.EVA = 0;
	my_propertystruct.SPE = 395;
	my_propertystruct.ACC = 0;
	my_propertystruct.ATK = 35;
	my_propertystruct.ATKM = 10;
	my_propertystruct.ATKS = 0;
	my_propertystruct.DEF = 5;
	my_propertystruct.RES = 0;
	my_propertystruct.RDR = 0;
	my_propertystruct.BP = 0;
	my_propertystruct.ATR = 400;
	my_propertystruct.ATRS = 600;
	my_propertystruct.ATRN = 600;
	my_propertystruct.ATRR = 600;
	my_propertystruct.ATRT = 600;
	my_propertystruct.ATS = 0.5;
	my_propertystruct.RET = 10;
	my_propertystruct.TYPE = 1;
	my_propertystruct.CDS = 7;
	my_propertystruct.CDN= 6;
	my_propertystruct.CDR = 10;
	my_propertystruct.CDF = 60;
	my_propertystruct.CDA = 0.5;
	my_propertystruct.LEVEL = 1;
	my_propertystruct.EXP = 0;
	setproperty(my_propertystruct);


	//AnimationCache::getInstance()->addAnimation(animation8, "fly_one");
	//this ->SpriteCatherine::createWithSpriteFrameName("snow0_0.png"); //::createWithSpriteFrameName("snow0_0.png");
	//this->setTag(1000001);
	
	/*srand((int)time(0));
	Animate* animate;
	
	switch (int tmp = rand() % 4)
	{
	case 0:
		m_hero = Sprite::createWithSpriteFrameName("snow0_0.png");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lf"));
		m_hero->runAction(RepeatForever::create(animate));
		break;
	case 1:
		m_hero = Sprite::createWithSpriteFrameName("snow1_0.png");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rf"));
		m_hero->runAction(RepeatForever::create(animate));
		break;
	case 2:
		m_hero = Sprite::createWithSpriteFrameName("snow2_0.png");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rb"));
		m_hero->runAction(RepeatForever::create(animate));
		break;
	case 3:
		m_hero = Sprite::createWithSpriteFrameName("snow3_0.png");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lb"));
		m_hero->runAction(RepeatForever::create(animate));
		break;
	default:
		break;
	}*/
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
	//bullett->setName("bullet10");

	this->setPosition(Point(winSize.width / 2, winSize.height*0.8));
	CaBody = PhysicsBody::createBox(this->getContentSize(),PHYSICSBODY_MATERIAL_DEFAULT);
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
	this->schedule(schedule_selector(SpriteCatherine::move), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpriteCatherine::death), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpriteCatherine::restore), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpriteCatherine::levelup), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpriteCatherine::levelup), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpriteCatherine::property_refresh), 0.01f, kRepeatForever, 0);
	//this->schedule(schedule_selector(SpriteCatherine::shock), time, kRepeatForever, 0);
	return true;
}
/*
void SpriteCatherine::setPosition(Vec2 loc)
{
	this->setPosition(loc);
}*/

void SpriteCatherine::settag(int ta)
{
	this->setTag(ta);
}
void  SpriteCatherine::setbody(int ca, int co, int ct)
{
	CaBody->setCategoryBitmask(ca);
	CaBody->setCollisionBitmask(co);
	CaBody->setContactTestBitmask(ct);
}



void SpriteCatherine::move_lf()
{
	//auto pos = m_hero->getPosition();
//	m_hero->stopAllActions();
	//m_hero = Sprite::createWithSpriteFrameName("snow0_0.png");
//	m_hero->setTexture("snow0_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lf"));
	this->runAction(RepeatForever::create(animate));
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::move_rf()
{
	//auto pos = m_hero->getPosition();
//	m_hero->setTexture("snow1_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rf"));
	this->runAction(RepeatForever::create(animate));
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::move_rb()
{
	//auto pos = m_hero->getPosition();
//	m_hero->setTexture("snow2_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rb"));
	this->runAction(RepeatForever::create(animate));
//	m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::move_lb()
{
	//auto pos = m_hero->getPosition();
//	m_hero->setTexture("snow3_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lb"));
	this->runAction(RepeatForever::create(animate));
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::stop_lf()
{
//	auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this);
	this->setTexture("snow0_0.png");
	//_rect.size = m_hero->getContentSize();
	this->setTextureRect(CCRectMake(0.5, 0.2, 100, 100));
	move_judge = 0;
	//free(actionManager);
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::stop_rf()
{
//	auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this);
	this->setTexture("snow1_0.png");
	this->setTextureRect(CCRectMake(0.5, 0.2, 100, 100));
	move_judge = 0;
	//free(actionManager);
//	m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::stop_rb()
{
	//auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this);
	//m_hero = Sprite::createWithSpriteFrameName("snow2_0.png");
	this->setTexture("snow2_0.png");
	this->setTextureRect(CCRectMake(0.5, 0.2, 100, 100));
	move_judge = 0;
	//free(actionManager);
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::stop_lb()
{
//	auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this);
	//m_hero = Sprite::createWithSpriteFrameName("snow3_0.png");
	this->setTexture("snow3_0.png");
	this->setTextureRect(CCRectMake(0.5, 0.2, 100, 100));
	move_judge = 0;
//	free (actionManager);
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}

/*
void SpriteCatherine::flash()
{
	 if (pos == old_pos)
	{
		return;
	}
	else if (pos.x > old_pos.x&&pos.y > old_pos.y)
	{
		old_pos = pos;//pos
		m_hero->setPosition(pos.x, pos.y+ m_hero->getContentSize().height*1.5);
	//	m_hero->setAnchorPoint(Vec2(0,0));
		stop_rb();
	}
	else if (pos.x > old_pos.x&&pos.y < old_pos.y)
	{
		old_pos = pos;//pos
		m_hero->setPosition(pos.x, pos.y + m_hero->getContentSize().height*1.5);
		//	m_hero->setAnchorPoint(Vec2(0,0));
		stop_rf();
	}
	else if (pos.x < old_pos.x&&pos.y > old_pos.y)
	{
		old_pos = pos;//pos
		m_hero->setPosition(pos.x, pos.y + m_hero->getContentSize().height*1.5);
		//	m_hero->setAnchorPoint(Vec2(0,0));
		stop_lb();
	}
	else if (pos.x < old_pos.x&&pos.y < old_pos.y)
	{
		old_pos = pos;//pos
		m_hero->setPosition(pos.x, pos.y + m_hero->getContentSize().height*1.5);
		//	m_hero->setAnchorPoint(Vec2(0,0));
		stop_lf();
	}
}*/

void SpriteCatherine::move(float)
{
	stop_judge = 0;
	int devia = deviation;
	Vec2 move_vec;
	Vec2 true_vec;
	//int sped = get().SPE;
	int sped = 300;
	//true_vec.y = pos.y+ m_hero->getContentSize().height*0.3;
	true_vec.y = pos.y ;
	true_vec.x = pos.x;
	double denominator = sqrt(pow((true_vec.y - old_pos.y), 2) + pow(true_vec.x - old_pos.x, 2));
	move_vec.y = (true_vec.y - old_pos.y) * sped / denominator / move_rate;
	move_vec.x = (true_vec.x - old_pos.x) * sped / denominator / move_rate;
	if (pos != touch_pos)
	{
		touch_pos = pos;
		touch_judge = true;	
		//actionManager->removeAllActionsFromTarget(this->m_hero);
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
//	CCSpawn::create(CCAnimate::create(AnimationCache::getInstance()->getAnimation("snow_lf")),CCMoveBy::create(20.28f, true_vec), NULL),
	this->setPosition(old_pos);
	//m_hero->setAnchorPoint(Vec2(0,0));
	//stop_rb();

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
	//	m_hero->setAnchorPoint(Vec2(0,0));
	//stop_rf();
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
	//	m_hero->setAnchorPoint(Vec2(0,0));
	//stop_lb();
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
	//	m_hero->setAnchorPoint(Vec2(0,0));
	//stop_lf();
	if (touch_judge == true && move_judge != 4)
	{
		actionManager->removeAllActionsFromTarget(this);
		move_judge = 4;
		move_lf();
	}
	}
}

void SpriteCatherine::skillst()
{
	if (!Mana_cost(1))
	{
		return;
	}
	cooldowning_compare = 1;
	if (!state_estimation(1, 0, 1))
		return;
	cooldowning1 = 1;
	spell_judge = 1;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_st"));
	if (stop_judge == 0)
	{
		actionManager->removeAllActionsFromTarget(this);
		if (move_judge == 1)//rbrflblf
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rb"));
		}
		else if (move_judge == 2)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rf"));
		}
		else if (move_judge == 3)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lb"));
		}
		else if (move_judge == 4)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lf"));
		}
			this->runAction(Sequence::create(Repeat::create(animate,1), Repeat::create(animate_one,1000),nullptr));
		}
	else
		this->runAction(Repeat::create(animate, 1));
	//m_hero->runAction(Repeat::create(animate, 1));
	//m_hero->scheduleOnce(schedule_selector(SpriteCatherine::judge_action), Repeat::create(animate, 1)->getDuration());
//	m_hero->runAction(Repeat::create(animate, 1));
}
void SpriteCatherine::skillnd()
{
	if (!Mana_cost(2))
	{
		return;
	}
	cooldowning_compare = 2;
	if (!state_estimation(1, 0, 1))
		return;
	cooldowning2 = 1;
	spell_judge = 1;
	//action_judge = 0;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_nd"));
	if (stop_judge == 0)
	{
		actionManager->removeAllActionsFromTarget(this);
		if (move_judge == 1)//rbrflblf
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rb"));
		}
		else if (move_judge == 2)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rf"));
		}
		else if (move_judge == 3)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lb"));
		}
		else if (move_judge == 4)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lf"));
		}
		this->runAction(Sequence::create(Repeat::create(animate, 1), Repeat::create(animate_one, 1000), nullptr));
	}
	else
		this->runAction(Repeat::create(animate, 1));
	//m_hero->runAction(RepeatForever::create(animate));
}
void SpriteCatherine::skillrd()
{
	if (!Mana_cost(3))
	{
		return;
	}
	cooldowning_compare = 3;
	if (!state_estimation(1, 0, 1))
		return;
	cooldowning3 = 1;
	spell_judge = 1;
	//this->schedule(schedule_selector(SpriteCatherine::move), 0.01f, kRepeatForever, 0);
	//action_judge = 2;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rd"));
	if (stop_judge == 0)
	{
		actionManager->removeAllActionsFromTarget(this);
		if (move_judge == 1)//rbrflblf
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rb"));
		}
		else if (move_judge == 2)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rf"));
		}
		else if (move_judge == 3)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lb"));
		}
		else if (move_judge == 4)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lf"));
		}
		this->runAction(Sequence::create(Repeat::create(animate, 1), Repeat::create(animate_one, 1000), nullptr));
	}
	else
		this->runAction(Repeat::create(animate, 1));
	//m_hero->runAction(RepeatForever::create(animate));
}
void SpriteCatherine::skillth(Sprite* m_target)
{
	target=(UnitsSprite*)m_target;
	if (!Mana_cost(4))
	{
		return;
	}
	if (Inrange(4) == false)
	{
		pos = pos_should;
		return;
	}
	cooldowning_compare = 4;
	if (!state_estimation(1, 0, 1))
		return;
	cooldowning4 = 1;
	spell_judge = 1;
	//this->pauseTarget(schedule_selector(SpriteCatherine::move), true);
	//this->unschedule(schedule_selector(SpriteCatherine::move));
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_th"));
	if (stop_judge == 0)
	{
		actionManager->removeAllActionsFromTarget(this);
		if (move_judge == 1)//rbrflblf
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rb"));
		}
		else if (move_judge == 2)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rf"));
		}
		else if (move_judge == 3)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lb"));
		}
		else if (move_judge == 4)
		{
			animate_one = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lf"));
		}
		this->runAction(Sequence::create(Repeat::create(animate, 1), Repeat::create(animate_one, 1000), nullptr));
	}
	else
		this->runAction(Repeat::create(animate, 1));
	auto bullet = bulletmaking(1);
	bullet->setanimation("magi0_", "fly_one");
	bullet->Followed(target, 200);
	//schedule(CC_SCHEDULE_SELECTOR(HelloWorld::unpause), 3);
	//m_hero->runAction(RepeatForever::create(animate));
}

void SpriteCatherine::skillst(float time)
{
	if (!Mana_cost(1))
	{
		return;
	}
	cooldowning_compare = 1;
	if (!state_estimation(0, 0, 1))
		return;
	cooldowning1 = 1;
//	spell_judge = time;
//	CCDelayTime* delayTime = CCDelayTime::create(time);
//	CCCallFunc *callFunND = CCCallFun::create(CC_CALLBACK_1(callfunc_selector(SpriteCatherine::skill),this ));
	shock(time);
	pos.x = old_pos.x;
	pos.y = old_pos.y;//- this->getContentSize().height*0.3;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_st"));
	int times = time / Repeat::create(animate, 1)->getDuration()+1;
	this->runAction(Repeat::create(animate, times));
}
void SpriteCatherine::skillnd(float time)
{
	if (!Mana_cost(2))
	{
		return;
	}
	cooldowning_compare = 2;
	if (!state_estimation(0, 0, 1))
		return;
	cooldowning2 = 1;
//	spell_judge = time;
	shock(time);
	pos.x = old_pos.x;
	pos.y = old_pos.y; //- this->getContentSize().height*0.3;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_nd"));
	int times = time / Repeat::create(animate, 1)->getDuration()+1;
	this->runAction(Repeat::create(animate, times));
	auto bullet = bulletmaking(0);
	bullet->setanimation("magi0_", "fly_one");
	bullet->Fixed(this->getPosition(), mouse_pos, this->get().ATRN);
	//bullet0->Fixed(Vec2(m_hero->getPosition().x,m_hero->getPosition().y + m_hero->getContentSize().height*0.5), Vec2(mouse_pos.x,mouse_pos.y+ m_hero->getContentSize().height));
//	bullet0->Fixed(this->getPosition(), mouse_pos,200);
}
void SpriteCatherine::skillrd(float time)
{
	if (!Mana_cost(3))
	{
		return;
	}
	cooldowning_compare = 3;
	if (!state_estimation(0, 0, 1))
		return;
	cooldowning3 = 1;
//	spell_judge = time;
	shock(time);
	pos.x = old_pos.x;
	pos.y = old_pos.y; //- this->getContentSize().height*0.3;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_ed"));
	int times = time / Repeat::create(animate, 1)->getDuration()+1;
	this->runAction(Repeat::create(animate, times));
}
void SpriteCatherine::skillth(float time)
{
	if (!Mana_cost(4))
	{
		return;
	}
	cooldowning_compare = 4;
	if (!state_estimation(0, 0, 1))
		return;
	cooldowning4 = 1;
//	spell_judge = time;
	shock(time);
	pos.x = old_pos.x;
	pos.y = old_pos.y; //- this->getContentSize().height*0.3;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_th"));
	int times=time/Repeat::create(animate, 1)->getDuration()+1;
	this->runAction(Repeat::create(animate, times));
}
bool SpriteCatherine::Mana_cost(int kind)
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
	if (this->get().MP > mana_cost)
	{
		this->changeproperty(this->get().MP - mana_cost, "MP");
			return true;
	}
	else 
	{
			return false;
	}


}


void SpriteCatherine::normal_attack(float ats)
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
	this->schedule(schedule_selector(SpriteCatherine::doattack), time, 1, 0);
	//if (!state_estimation(0, 0, 1))
	//	return;
//	cooldowning5 = 1;
	//	spell_judge = time;
	//shock(time);
	pos.x = old_pos.x;
	pos.y = old_pos.y; //- this->getContentSize().height*0.3;
	attack_pos = pos;
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snowattack"));
	int times = time / Repeat::create(animate, 1)->getDuration();
	this->runAction(Repeat::create(animate, times));
}
void SpriteCatherine::doattack(float)
{
	if (attack_pos != pos)
		return;
	normal_attacked = 0;
	auto bullet = bulletmaking(1);
	bullet->setanimation("magi0_", "fly_one");
	bullet->Followed(target, 200);
	actionManager->removeAllActionsFromTarget(this);
	this->setTexture("snow0_0.png");
}
bool SpriteCatherine::Inrange(int kind)
{
	int distance;
	if (kind == 0)
		distance = this->get().ATR;
	else if (kind == 1)
		distance = this->get().ATRS;
	else if(kind==2)
		distance = this->get().ATRN;
	else if (kind == 3)
		distance = this->get().ATRR;
	else if (kind == 4)
		distance = this->get().ATRT;
	int m_x = this->getPosition().x;
	int m_y = this->getPosition().y;
	int ta_x=target->getPosition().x;
	int ta_y=target->getPosition().y;
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


void SpriteCatherine::shock(float time)
{
	spell_judge = time;
	if(move_judge!=0)
		actionManager->removeAllActionsFromTarget(this);
	this->unschedule(schedule_selector(SpriteCatherine::move));
	this->schedule(schedule_selector(SpriteCatherine::shock_remove),time, 1, 0);
}

void SpriteCatherine::shock_remove(float time)
{
	this->schedule(schedule_selector(SpriteCatherine::move), 0.01f, kRepeatForever, 0);
	this->unschedule(schedule_selector(SpriteCatherine::shock_remove));
}

void SpriteCatherine::death(float time)
{
	death_judge = true;
	if (get().HP <= 0)
	{
		this->unschedule(schedule_selector(SpriteCatherine::restore));
		this->actionManager->removeAllActionsFromTarget(this);
		this->setTexture("death.png");
		//changeproperty(500, "RET");
		this->unschedule(schedule_selector(SpriteCatherine::death));
		if (get().RET >= 0)
			this->schedule(schedule_selector(SpriteCatherine::revive), get().RET, 1, 0);
		else
			this->schedule(schedule_selector(SpriteCatherine::revive),10, 1, 0);
	}
}

void SpriteCatherine::revive(float time)
{
	death_judge = false;
	this->changeproperty(get().MHP, "HP");
	this->setTexture("snow0_0.png");
	this->schedule(schedule_selector(SpriteCatherine::death), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpriteCatherine::restore), 1.0f, kRepeatForever, 0);
	this->unschedule(schedule_selector(SpriteCatherine::revive));
}

void SpriteCatherine::restore(float time)
{
	int Hp = this->get().HP;
	int Mp = this->get().MP;
	if (Hp > 0&&this->get().MHP>Hp)
	{
		int Rhp = this->get().RHP;
		if((Hp+Rhp)< this->get().MHP)
			this->changeproperty((Rhp+Hp), "HP");
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

void SpriteCatherine::levelup(float time)
{
	
	int level = this->consumeEXP(0, 5);
	if (level==20)
		this->unschedule(schedule_selector(SpriteCatherine::levelup));
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
bool SpriteCatherine::Back_shake()
{
		if (spell_judge == 1)
		{
			float interval = Castinterval;
			spell_judge = -1;
			this->schedule(schedule_selector(SpriteCatherine::Bs_reset), interval, 1, 0);
			return false;
		}
		else if(spell_judge==-1)
			return false;
		else if (spell_judge != 0)
		{
			this->schedule(schedule_selector(SpriteCatherine::Bs_reset), spell_judge, 1, 0);
			spell_judge = -1;
			return false;
		}
		else
			return true;

}
void SpriteCatherine::Bs_reset(float)
{
		spell_judge = 0;
	//	pos.x = old_pos.x;
	//	pos.y = old_pos.y+1;
}


bool SpriteCatherine::Spell_cooldown()
{
	if (cooldowning1 == 1 && cooldowning_compare == 1)
	{
		cooldowning1 = -1;
		this->schedule(schedule_selector(SpriteCatherine::Sc_reset1), get().CDS, 1, 0);
		return false;
	}
	if (cooldowning2 == 1 && cooldowning_compare == 2)
	{
		cooldowning2 = -1;
		this->schedule(schedule_selector(SpriteCatherine::Sc_reset2), get().CDN, 1, 0);
		return false;
	}
	if (cooldowning3 == 1 && cooldowning_compare == 3)
	{
		cooldowning3 = -1;
		this->schedule(schedule_selector(SpriteCatherine::Sc_reset3), get().CDR, 1, 0);
		return false;
	}
	if (cooldowning4 == 1 && cooldowning_compare == 4)
	{
		cooldowning4 = -1;
		this->schedule(schedule_selector(SpriteCatherine::Sc_reset4), get().CDF, 1, 0);
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
void SpriteCatherine::Sc_reset1(float)
{
	cooldowning1 = 0;
}
void SpriteCatherine::Sc_reset2(float)
{
	cooldowning2 = 0;
}
void SpriteCatherine::Sc_reset3(float)
{
	cooldowning3 = 0;
}
void SpriteCatherine::Sc_reset4(float)
{
	cooldowning4 = 0;
}


bool SpriteCatherine::state_estimation(int shake, int shock, int spell)
{
	if (normal_attacked == 1)
	{
		this->unschedule(schedule_selector(SpriteCatherine::doattack));
	}
	if (shake == 1)
		if (!Back_shake())
		{
			CCLOG("backdef");
			return false;
		}
			//return false;
	if (shock == 1)
		shock = 1;
	if (spell == 1)
		if (!Spell_cooldown())
		{
			CCLOG("coodef");
			return false;
		}
	//	return false;
	return true;
	
}



void SpriteCatherine::SpriteCatherine::property_refresh(float)
{
	Hp_progress->setPercentage(((float)this->get().HP / this->get().MHP) * 100);
	Mp_progress->setPercentage(((float)this->get().MP / this->get().MMP) * 100);
}