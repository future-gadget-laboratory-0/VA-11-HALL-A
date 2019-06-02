#include "bullets.h"


BulletSprite* BulletSprite::instance = NULL;
BulletSprite* BulletSprite::instance1 = NULL;
BulletSprite* BulletSprite::instance2 = NULL;
BulletSprite* BulletSprite::instance3 = NULL;
BulletSprite* BulletSprite::instance4 = NULL;
BulletSprite* BulletSprite::instance5 = NULL;
BulletSprite* BulletSprite::instance6 = NULL;
BulletSprite* BulletSprite::instance7 = NULL;
BulletSprite* BulletSprite::instance8 = NULL;
BulletSprite* BulletSprite::instance9 = NULL;
BulletSprite* BulletSprite::instance10 = NULL;
BulletSprite* BulletSprite::instance11 = NULL;
BulletSprite* BulletSprite::instance12 = NULL;
BulletSprite* BulletSprite::instance13 = NULL; 
BulletSprite* BulletSprite::instance14 = NULL;
BulletSprite* BulletSprite::instance15 = NULL;
BulletSprite* BulletSprite::instance16 = NULL;
BulletSprite* BulletSprite::instance17 = NULL;
BulletSprite* BulletSprite::instance18 = NULL;
BulletSprite* BulletSprite::instance19 = NULL;
BulletSprite* BulletSprite::instance20 = NULL;
BulletSprite* BulletSprite::instance21 = NULL;
BulletSprite* BulletSprite::instance22 = NULL;
BulletSprite* BulletSprite::instance23 = NULL; 
BulletSprite* BulletSprite::instance24 = NULL;
BulletSprite* BulletSprite::instance25 = NULL;
BulletSprite* BulletSprite::instance26 = NULL;
BulletSprite* BulletSprite::instance27 = NULL;  
BulletSprite* BulletSprite::instance28 = NULL;

BulletSprite::BulletSprite()
{

}

BulletSprite* BulletSprite::getInstance()
{
	if (instance == NULL)
	{
		instance = new BulletSprite();
		instance->init();
		return instance;
	}
	if (instance1 == NULL)
	{
		instance1 = new BulletSprite();
		instance1->init();
		return instance1;
	}
	if (instance2 == NULL)
	{
		instance2 = new BulletSprite();
		instance2->init();
		return instance2;
	}
	if (instance3 == NULL)
	{
		instance3 = new BulletSprite();
		instance3->init();
		return instance3;
	}
	if (instance4 == NULL)
	{
		instance4 = new BulletSprite();
		instance4->init();
		return instance4;
	}
	if (instance5 == NULL)
	{
		instance5 = new BulletSprite();
		instance5->init();
		return instance5;
	}
	if (instance6 == NULL)
	{
		instance6 = new BulletSprite();
		instance6->init();
		return instance6;
	}
	if (instance7 == NULL)
	{
		instance7 = new BulletSprite();
		instance7->init();
		return instance7;
	}
	if (instance8 == NULL)
	{
		instance8 = new BulletSprite();
		instance8->init();
		return instance8;
	}
	if (instance9 == NULL)
	{
		instance9 = new BulletSprite();
		instance9->init();
		return instance9;
	}
	if (instance10 == NULL)
	{
		instance10 = new BulletSprite();
		instance10->init();
		return instance10;
	}
	if (instance11 == NULL)
	{
		instance11 = new BulletSprite();
		instance11->init();
		return instance11;
	}
	if (instance12 == NULL)
	{
		instance12 = new BulletSprite();
		instance12->init();
		return instance12;
	}
	if (instance13 == NULL)
	{
		instance13 = new BulletSprite();
		instance13->init();
		return instance13;
	}
	if (instance14 == NULL)
	{
		instance14 = new BulletSprite();
		instance14->init();
		return instance14;
	}
	if (instance15 == NULL)
	{
		instance15 = new BulletSprite();
		instance15->init();
		return instance15;
	}
	if (instance16 == NULL)
	{
		instance16 = new BulletSprite();
		instance16->init();
		return instance16;
	}
	if (instance17 == NULL)
	{
		instance17 = new BulletSprite();
		instance17->init();
		return instance17;
	}
	if (instance18 == NULL)
	{
		instance18 = new BulletSprite();
		instance18->init();
		return instance18;
	}
	if (instance19 == NULL)
	{
		instance19 = new BulletSprite();
		instance19->init();
		return instance19;
	}
	if (instance20 == NULL)
	{
		instance20 = new BulletSprite();
		instance20->init();
		return instance20;
	}
}

/*
BulletSprite* BulletSprite::getInstance()
{
		BulletSprite* instances = NULL;
		instances= new BulletSprite();
		instances->init();	
		instancev.pushBack(instances);
		return instances;
}

*/





bool BulletSprite::init()
{
	if (!UnitsSprite::init())
	{
		return false;
	}
	auto winSize = Director::getInstance()->getWinSize();

	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("magi.plist");

	Animation* animation8 = Anima::createWithSingleFrameName("magi0_", 0.1f, -1);

	AnimationCache::getInstance()->addAnimation(animation8, "fly_one");
	this->setTexture("magi0_0.png");
//	this->setTexture("snow0_0.png");
	//m_bullet = Sprite::createWithSpriteFrameName("magi0_0.png");
	//m_bullet->setTag(100001);
	this->setTag(100001);
	//animate = Animate::create(AnimationCache::getInstance()->getAnimation("fly_one"));
	//m_bullet->runAction(RepeatForever::create(animate));
	//animate = Animate::create(AnimationCache::getInstance()->getAnimation("fly_one"));
	//m_bullet->runAction(RepeatForever::create(animate));
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



	this->setAnchorPoint(Point(0.5, 0.5));
	//this->setPosition(Point(winSize.width / 2, winSize.height*0.8));
	auto CaBody = PhysicsBody::createBox(this->getContentSize(), PHYSICSBODY_MATERIAL_DEFAULT);
	//m_hero->setPhysicsBody(CaBody);
	//CaBody->setContactTestBitmask(0xFFFFFFFF);
	//CaBody->setRotationEnable(false);
	//CaBody->setCategoryBitmask(0xFFFFFFFF);
	CaBody->setCategoryBitmask(0x01);
	CaBody->setCollisionBitmask(0x00000000);
	//CaBody->getShape(0)->setRestitution(0);
//	CaBody->setCollisionBitmask(0x01);
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

	//this->addChild(this);
	//this->schedule(schedule_selector(m_bullet::move), 0.01f, kRepeatForever, 0);
	//this->schedule(schedule_selector(SpriteCatherine::shock), time, kRepeatForever, 0);
	return true;
}

void BulletSprite::setanimation(__String name, __String aniname)
{
	const std::string str = name.getCString();
	const std::string anistr = aniname.getCString();
	/*if (str != " ")
	{
		this->setTexture(str);
	}
	try {
		if (anistr == " ")
			throw - 1; 	
	}
	catch (int d) { return; }
	
	try {	
		if (actionManager->getNumberOfRunningActionsInTarget(this) !=0)	
			throw - 1.00;
		}
		catch (float f) { this->stopAllActions();}*/
		animate = Animate::create(AnimationCache::getInstance()->getAnimation(anistr));
		this->runAction(RepeatForever::create(animate));
}


void BulletSprite::bulletclear(float)
{
	if (this->getParent())
		this->removeFromParentAndCleanup(true);
	//if(!this->getParent())
	//	this->getParent()->removeFromParentAndCleanup(this);
}

void BulletSprite::Fixed(Vec2 pos_started, Vec2 pos_ended,int Length)
{
	double denominator = sqrt(pow((pos_ended.y - pos_started.y), 2) + pow(pos_ended.x - pos_started.x, 2));
	Vec2 pos_true;
	pos_true = (pos_ended - pos_started) / denominator * Length;
	int sped = bulletspeed;
	double time = Length / sped;
//	this->setPosition(pos_started);
	this->setPosition(Vec2(50,30));
	auto moveby=MoveBy::create(time, pos_true);
	this->runAction(moveby);
	this->schedule(schedule_selector(BulletSprite::bulletclear), moveby->getDuration(), 1, 0);
}

void BulletSprite::Fixed(Vec2 pos_started, Vec2 pos_ended,int Length, int sped)
{
	double denominator = sqrt(pow((pos_ended.y - pos_started.y), 2) + pow(pos_ended.x - pos_started.x, 2));
	Vec2 pos_true;
	pos_true = (pos_ended - pos_started) / denominator * Length;
	double time = Length / sped;
	//this->setPosition(pos_started);
	this->setPosition(Vec2(50, 30));
	auto moveby = MoveBy::create(time, pos_true);
	this->runAction(moveby);
	this->schedule(schedule_selector(BulletSprite::bulletclear), moveby->getDuration(), 1, 0);
}

void BulletSprite::Followed(Sprite* target, int sped)
{
	m_target = target;
	m_sped = sped;
	schedule(schedule_selector(BulletSprite::Followed),0.5f, kRepeatForever, 0);
}

void BulletSprite::Followed(float)
{
	double denominator = sqrt(pow((m_target->getPosition().y - this->getPosition().y), 2) + pow(m_target->getPosition().x - this->getPosition().x, 2));
	double time = denominator / m_sped;
	auto moveto = MoveTo::create(8, m_target->getPosition()- this->getParent()->getPosition());
	this->stopAllActions();
	this->runAction(moveto);
}
/*
void BulletSprite::collision(Sprite* target, Sprite* bullet)
{
	target->get();
}*/