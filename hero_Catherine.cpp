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



	return true;
}


void SpriteCatherine::move_lf()
{
	m_hero = Sprite::createWithSpriteFrameName("snow0_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lf"));
	m_hero->runAction(RepeatForever::create(animate));
	this->addChild(m_hero);
}
void SpriteCatherine::move_rf()
{
	m_hero = Sprite::createWithSpriteFrameName("snow1_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rf"));
	m_hero->runAction(RepeatForever::create(animate));
}
void SpriteCatherine::move_rb()
{
	m_hero = Sprite::createWithSpriteFrameName("snow2_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_rb"));
	m_hero->runAction(RepeatForever::create(animate));
}
void SpriteCatherine::move_lb()
{
	m_hero = Sprite::createWithSpriteFrameName("snow3_0.png");
	animate = Animate::create(AnimationCache::getInstance()->getAnimation("snow_lb"));
	m_hero->runAction(RepeatForever::create(animate));
}
void SpriteCatherine::stop_lf()
{
	CCActionManager* actionManager = CCDirector::sharedDirector()->getActionManager();
	m_hero = Sprite::createWithSpriteFrameName("snow0_0.png");
	actionManager->removeAllActionsFromTarget(this->m_hero);
	free(actionManager);
}
void SpriteCatherine::stop_rf()
{
	CCActionManager* actionManager = CCDirector::sharedDirector()->getActionManager();
	m_hero = Sprite::createWithSpriteFrameName("snow1_0.png");
	actionManager->removeAllActionsFromTarget(this->m_hero);
	free(actionManager);
}
void SpriteCatherine::stop_rb()
{
	CCActionManager* actionManager = CCDirector::sharedDirector()->getActionManager();
	m_hero = Sprite::createWithSpriteFrameName("snow2_0.png");
	actionManager->removeAllActionsFromTarget(this->m_hero);
	free(actionManager);
}
void SpriteCatherine::stop_lb()
{
	CCActionManager* actionManager = CCDirector::sharedDirector()->getActionManager();
	actionManager->removeAllActionsFromTarget(this->m_hero);
	m_hero = Sprite::createWithSpriteFrameName("snow3_0.png");
	free (actionManager);
}