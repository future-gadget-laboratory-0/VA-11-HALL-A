#include "bullets.h"


BulletSprite* BulletSprite::instance = NULL;

BulletSprite::BulletSprite()
{

}

BulletSprite* BulletSprite::getInstance()
{
	if (instance == NULL)
	{
		instance = new BulletSprite();
		instance->init();
	}
	return instance;
}

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
	//this->setTag(100001);
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
	CaBody->setCollisionBitmask(0x00000010);
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
	if (str != " ")
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
		catch (float f) { this->stopAllActions();}
		animate = Animate::create(AnimationCache::getInstance()->getAnimation(anistr));
		this->runAction(RepeatForever::create(animate));
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
}

void BulletSprite::Followed(Sprite* target, int sped)
{
	
}
/*
void BulletSprite::collision(Sprite* target, Sprite* bullet)
{
	target->get();
}*/