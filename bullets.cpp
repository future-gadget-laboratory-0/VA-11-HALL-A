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
	m_bullet = Sprite::createWithSpriteFrameName("magi0_0.png");
	m_bullet->setTag(100001);
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



	m_bullet->setAnchorPoint(Point(0.5, 0.5));
	//m_bullet->setPosition(Point(winSize.width / 2, winSize.height*0.8));
	//auto CaBody = PhysicsBody::createBox(m_bullet->getContentSize(), PHYSICSBODY_MATERIAL_DEFAULT);
	//m_hero->setPhysicsBody(CaBody);
	//CaBody->setContactTestBitmask(0xFFFFFFFF);
	//CaBody->setRotationEnable(false);
	//CaBody->setCategoryBitmask(1);
	//CaBody->setCollisionBitmask(1);
	//CaBody->setContactTestBitmask(1);
	//this->setPhysicsBody(CaBody);

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

	this->addChild(m_bullet);
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
		m_bullet->setTexture(str);
	}
	try {
		if (anistr == " ")
			throw - 1; 	
	}
	catch (int d) { return; }
	
	try {	
		if (actionManager->getNumberOfRunningActionsInTarget(m_bullet) !=0)	
			throw - 1.00;
		}
		catch (float f) {m_bullet->stopAllActions();}
		animate = Animate::create(AnimationCache::getInstance()->getAnimation(anistr));
		m_bullet->runAction(RepeatForever::create(animate));
}


void BulletSprite::Fixed(Vec2 pos_started, Vec2 pos_ended,int Length)
{
	double denominator = sqrt(pow((pos_ended.y - pos_started.y), 2) + pow(pos_ended.x - pos_started.x, 2));
	Vec2 pos_true;
	pos_true = (pos_ended - pos_started) / denominator * Length;
	int sped = bulletspeed;
	double time = Length / sped;
	m_bullet->setPosition(pos_started);
	auto moveby=MoveBy::create(time, pos_true);
	m_bullet->runAction(moveby);
}

void BulletSprite::Fixed(Vec2 pos_started, Vec2 pos_ended,int Length, int sped)
{
	double denominator = sqrt(pow((pos_ended.y - pos_started.y), 2) + pow(pos_ended.x - pos_started.x, 2));
	Vec2 pos_true;
	pos_true = (pos_ended - pos_started) / denominator * Length;
	double time = Length / sped;
	m_bullet->setPosition(pos_started);
	auto moveby = MoveBy::create(time, pos_true);
	m_bullet->runAction(moveby);
}