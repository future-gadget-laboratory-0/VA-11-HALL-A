#include "hero_Catherine.h"
#include "anima.h"

SpriteCatherine* SpriteCatherine::instance = NULL;

SpriteCatherine::SpriteCatherine()
{

}

SpriteCatherine* SpriteCatherine::getInstance()
{
	if (instance == NULL)
	{
		instance = new SpriteCatherine();
		instance->init();
	}
	return instance;
}

bool SpriteCatherine::init()
{
	if (!UnitsSprite::init())
	{
		return false;
	}
	auto winSize = Director::getInstance()->getWinSize();

	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("snow.plist");

	Animation* animation0 = Anima::createWithSingleFrameName("snow0_", 0.1f, -1);
	Animation* animation1 = Anima::createWithSingleFrameName("snow1_", 0.1f, -1);
	Animation* animation2 = Anima::createWithSingleFrameName("snow2_", 0.1f, -1);
	Animation* animation3 = Anima::createWithSingleFrameName("snow3_", 0.1f, -1);
	AnimationCache::getInstance()->addAnimation(animation0, "snow_lf");
	AnimationCache::getInstance()->addAnimation(animation1, "snow_rf");
	AnimationCache::getInstance()->addAnimation(animation2, "snow_rb");
	AnimationCache::getInstance()->addAnimation(animation3, "snow_lb");

	m_hero = Sprite::createWithSpriteFrameName("snow0_0.png");
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




	m_hero->setPosition(Point(winSize.width / 2, winSize.height*0.8));
	auto CaBody = PhysicsBody::createBox(m_hero->getContentSize(),PHYSICSBODY_MATERIAL_DEFAULT);
	//m_hero->setPhysicsBody(CaBody);
	//CaBody->setContactTestBitmask(0xFFFFFFFF);
	CaBody->setRotationEnable(false);
	CaBody->setCategoryBitmask(1);
	CaBody->setCollisionBitmask(1);
	CaBody->setContactTestBitmask(1);
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
	
	this->addChild(m_hero);
	this->schedule(schedule_selector(SpriteCatherine::move), 0.01f, kRepeatForever, 0);


	return true;
}


void SpriteCatherine::move_lf()
{
	//auto pos = m_hero->getPosition();
//	m_hero->stopAllActions();
	//m_hero = Sprite::createWithSpriteFrameName("snow0_0.png");
//	m_hero->setTexture("snow0_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lf"));
	m_hero->runAction(RepeatForever::create(animate));
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::move_rf()
{
	//auto pos = m_hero->getPosition();
//	m_hero->setTexture("snow1_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rf"));
	m_hero->runAction(RepeatForever::create(animate));
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::move_rb()
{
	//auto pos = m_hero->getPosition();
//	m_hero->setTexture("snow2_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rb"));
	m_hero->runAction(RepeatForever::create(animate));
//	m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::move_lb()
{
	//auto pos = m_hero->getPosition();
//	m_hero->setTexture("snow3_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lb"));
	m_hero->runAction(RepeatForever::create(animate));
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::stop_lf()
{
//	auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this->m_hero);
	m_hero->setTexture("snow0_0.png");
	//_rect.size = m_hero->getContentSize();
	m_hero->setTextureRect(CCRectMake(0, 0, 100, 100));
	//free(actionManager);
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::stop_rf()
{
//	auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this->m_hero);
	m_hero->setTexture("snow1_0.png");
	m_hero->setTextureRect(CCRectMake(0, 0, 100, 100));
	//free(actionManager);
//	m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::stop_rb()
{
	//auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this->m_hero);
	//m_hero = Sprite::createWithSpriteFrameName("snow2_0.png");
	m_hero->setTexture("snow2_0.png");
	m_hero->setTextureRect(CCRectMake(0, 0, 100, 100));
	//free(actionManager);
	//m_hero->setPosition(Point(pos));
//	this->addChild(m_hero);
}
void SpriteCatherine::stop_lb()
{
//	auto pos = m_hero->getPosition();
	actionManager->removeAllActionsFromTarget(this->m_hero);
	//m_hero = Sprite::createWithSpriteFrameName("snow3_0.png");
	m_hero->setTexture("snow3_0.png");
	m_hero->setTextureRect(CCRectMake(0, 0, 100, 100));
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
	int devia = deviation;
	Vec2 move_vec;
	Vec2 true_vec;
	//int sped = get().SPE;
	int sped = 300;
	true_vec.y = pos.y + m_hero->getContentSize().height*1.5;
	true_vec.x = pos.x;
	double denominator = sqrt(pow((true_vec.y - old_pos.y), 2) + pow(true_vec.x - old_pos.x, 2));
	move_vec.y = (true_vec.y - old_pos.y) * sped / denominator / move_rate;
	move_vec.x = (true_vec.x - old_pos.x) * sped / denominator / move_rate;
	if (pos != touch_pos)
	{
		touch_pos = pos;
		touch_judge = true;	actionManager->removeAllActionsFromTarget(this->m_hero);
	}
	else
	{
		touch_judge = false;
	}
	if (old_pos == Point(-100, -100))
	{
		old_pos = m_hero->getPosition();
	}
	else if ((true_vec == old_pos) ||
		((((true_vec.x + devia) > old_pos.x) && ((true_vec.y + devia) > old_pos.y) && ((true_vec.x - devia) < old_pos.x) && ((true_vec.y - devia) < old_pos.y))))
	{
		if (move_judge == 1)
		{
			stop_rb();
		}
		if (move_judge == 2)
		{
			stop_rf();
		}
		if (move_judge == 3)
		{
			stop_lb();
		}
		if (move_judge == 4)
		{
			stop_lf();
		}
		return;
	}
	else if (true_vec.x > old_pos.x&&true_vec.y > old_pos.y)
	{
		old_pos.x = old_pos.x + move_vec.x;//pos
		old_pos.y = old_pos.y + move_vec.y;//pos
	//	CCSpawn::create(CCAnimate::create(AnimationCache::getInstance()->getAnimation("snow_lf")),CCMoveBy::create(20.28f, true_vec), NULL),
		m_hero->setPosition(old_pos);
		//	m_hero->setAnchorPoint(Vec2(0,0));
		//stop_rb();

		if (touch_judge == true)
		{
			move_judge = 1;
			move_rb();
		}
	}
	else if (true_vec.x > old_pos.x&&true_vec.y < old_pos.y)
	{
		old_pos.x = old_pos.x + move_vec.x;//pos
		old_pos.y = old_pos.y + move_vec.y;//pos
		m_hero->setPosition(old_pos);
		//	m_hero->setAnchorPoint(Vec2(0,0));
		//stop_rf();
		if (touch_judge == true)
		{
			move_judge = 2;
			move_rf();
		}
	}
	else if (true_vec.x < old_pos.x&&true_vec.y > old_pos.y)
	{
		old_pos.x = old_pos.x + move_vec.x;//pos
		old_pos.y = old_pos.y + move_vec.y;//pos
		m_hero->setPosition(old_pos);
		//	m_hero->setAnchorPoint(Vec2(0,0));
		//stop_lb();
		if (touch_judge == true)
		{
			move_judge = 3;
			move_lb();	
		}
	}
	else if (true_vec.x < old_pos.x&&true_vec.y < old_pos.y)
	{
		old_pos.x = old_pos.x + move_vec.x;//pos
		old_pos.y = old_pos.y + move_vec.y;//pos
		m_hero->setPosition(old_pos);
		//	m_hero->setAnchorPoint(Vec2(0,0));
		//stop_lf();
		if (touch_judge == true)
		{
			move_judge = 4;
			move_lf();
		}
	}
}




