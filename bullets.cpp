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
BulletSprite* BulletSprite::instance29 = NULL;
BulletSprite* BulletSprite::instance30 = NULL;
BulletSprite* BulletSprite::instance31 = NULL;
BulletSprite* BulletSprite::instance32 = NULL;
BulletSprite* BulletSprite::instance33 = NULL;
BulletSprite* BulletSprite::instance34 = NULL;
BulletSprite* BulletSprite::instance35 = NULL;
BulletSprite* BulletSprite::instance36 = NULL;
BulletSprite* BulletSprite::instance37 = NULL;
BulletSprite* BulletSprite::instance38 = NULL;
BulletSprite* BulletSprite::instance39 = NULL;
BulletSprite* BulletSprite::instance40 = NULL;
BulletSprite* BulletSprite::instance41 = NULL;
BulletSprite* BulletSprite::instance42 = NULL;
BulletSprite* BulletSprite::instance43 = NULL;
BulletSprite* BulletSprite::instance44 = NULL;
BulletSprite* BulletSprite::instance45 = NULL;
BulletSprite* BulletSprite::instance46 = NULL;
BulletSprite* BulletSprite::instance47 = NULL;
BulletSprite* BulletSprite::instance48 = NULL;
BulletSprite* BulletSprite::instance49 = NULL;
BulletSprite* BulletSprite::instance50 = NULL;
BulletSprite* BulletSprite::instance51 = NULL;
BulletSprite* BulletSprite::instance52 = NULL;
BulletSprite* BulletSprite::instance53 = NULL;
BulletSprite* BulletSprite::instance54 = NULL;
BulletSprite* BulletSprite::instance55 = NULL;
BulletSprite* BulletSprite::instance56 = NULL;
BulletSprite* BulletSprite::instance57 = NULL;
BulletSprite* BulletSprite::instance58 = NULL;
BulletSprite* BulletSprite::instance59 = NULL;
BulletSprite* BulletSprite::instance60 = NULL;
BulletSprite* BulletSprite::instance61 = NULL;
BulletSprite* BulletSprite::instance62 = NULL;
BulletSprite* BulletSprite::instance63 = NULL;
BulletSprite* BulletSprite::instance64 = NULL; 
BulletSprite* BulletSprite::instance65 = NULL;
BulletSprite* BulletSprite::instance66 = NULL;
BulletSprite* BulletSprite::instance67 = NULL;
BulletSprite* BulletSprite::instance68 = NULL;
BulletSprite* BulletSprite::instance69 = NULL;
BulletSprite* BulletSprite::instance70 = NULL;
BulletSprite* BulletSprite::instance71 = NULL;
BulletSprite* BulletSprite::instance72 = NULL;
BulletSprite* BulletSprite::instance73 = NULL;
BulletSprite* BulletSprite::instance74 = NULL;
BulletSprite* BulletSprite::instance75 = NULL;
BulletSprite* BulletSprite::instance76 = NULL;
BulletSprite* BulletSprite::instance77 = NULL;
BulletSprite* BulletSprite::instance78 = NULL;
BulletSprite* BulletSprite::instance79 = NULL;
BulletSprite* BulletSprite::instance80 = NULL;
BulletSprite* BulletSprite::instance81 = NULL;
BulletSprite* BulletSprite::instance82 = NULL;
BulletSprite* BulletSprite::instance83 = NULL;
BulletSprite* BulletSprite::instance84 = NULL;
BulletSprite* BulletSprite::instance85 = NULL;
BulletSprite* BulletSprite::instance86 = NULL;
BulletSprite* BulletSprite::instance87 = NULL;
BulletSprite* BulletSprite::instance88 = NULL;
BulletSprite* BulletSprite::instance89 = NULL;
BulletSprite* BulletSprite::instance90 = NULL;
BulletSprite* BulletSprite::instance91 = NULL;
BulletSprite* BulletSprite::instance92 = NULL;
BulletSprite* BulletSprite::instance93 = NULL;
BulletSprite* BulletSprite::instance94 = NULL;
BulletSprite* BulletSprite::instance95 = NULL;
BulletSprite* BulletSprite::instance96 = NULL;
BulletSprite* BulletSprite::instance97 = NULL;
BulletSprite* BulletSprite::instance98 = NULL;
BulletSprite* BulletSprite::instance99 = NULL;
BulletSprite* BulletSprite::instance100 = NULL;


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
	if (instance21 == NULL)
	{
		instance21 = new BulletSprite();
		instance21->init();
		return instance21;
	}
	if (instance22 == NULL)
	{
		instance22 = new BulletSprite();
		instance22->init();
		return instance22;
	}
	if (instance23 == NULL)
	{
		instance23 = new BulletSprite();
		instance23->init();
		return instance23;
	}
	if (instance24 == NULL)
	{
		instance24 = new BulletSprite();
		instance24->init();
		return instance24;
	}
	if (instance25 == NULL)
	{
		instance25 = new BulletSprite();
		instance25->init();
		return instance25;
	}
	if (instance26 == NULL)
	{
		instance26 = new BulletSprite();
		instance26->init();
		return instance26;
	}
	if (instance27 == NULL)
	{
		instance27 = new BulletSprite();
		instance27->init();
		return instance27;
	}
	if (instance28 == NULL)
	{
		instance28 = new BulletSprite();
		instance28->init();
		return instance28;
	}
	if (instance29 == NULL)
	{
		instance29 = new BulletSprite();
		instance29->init();
		return instance29;
	}
	if (instance30 == NULL)
	{
		instance30 = new BulletSprite();
		instance30->init();
		return instance30;
	}
	if (instance31 == NULL)
	{
		instance31 = new BulletSprite();
		instance31->init();
		return instance31;
	}
	if (instance32 == NULL)
	{
		instance32 = new BulletSprite();
		instance32->init();
		return instance32;
	}
	if (instance33 == NULL)
	{
		instance33 = new BulletSprite();
		instance33->init();
		return instance33;
	}
	if (instance34 == NULL)
	{
		instance34 = new BulletSprite();
		instance34->init();
		return instance34;
	}
	if (instance35 == NULL)
	{
		instance35 = new BulletSprite();
		instance35->init();
		return instance35;
	}
	if (instance36 == NULL)
	{
		instance36 = new BulletSprite();
		instance36->init();
		return instance36;
	}
	if (instance37 == NULL)
	{
		instance37 = new BulletSprite();
		instance37->init();
		return instance37;
	}
	if (instance38 == NULL)
	{
		instance38 = new BulletSprite();
		instance38->init();
		return instance38;
	}
	if (instance39 == NULL)
	{
		instance39 = new BulletSprite();
		instance39->init();
		return instance39;
	}
	if (instance40 == NULL)
	{
		instance40 = new BulletSprite();
		instance40->init();
		return instance40;
	}
	if (instance41 == NULL)
	{
		instance41 = new BulletSprite();
		instance41->init();
		return instance41;
	}
	if (instance41 == NULL)
	{
		instance41 = new BulletSprite();
		instance41->init();
		return instance41;
	}
	if (instance42 == NULL)
	{
		instance42 = new BulletSprite();
		instance42->init();
		return instance42;
	}
	if (instance43 == NULL)
	{
		instance43 = new BulletSprite();
		instance43->init();
		return instance43;
	}
	if (instance44 == NULL)
	{
		instance44 = new BulletSprite();
		instance44->init();
		return instance44;
	}
	if (instance45 == NULL)
	{
		instance45 = new BulletSprite();
		instance45->init();
		return instance45;
	}
	if (instance46 == NULL)
	{
		instance46 = new BulletSprite();
		instance46->init();
		return instance46;
	}
	if (instance47 == NULL)
	{
		instance47 = new BulletSprite();
		instance47->init();
		return instance47;
	}
	if (instance48 == NULL)
	{
		instance48 = new BulletSprite();
		instance48->init();
		return instance48;
	}
	if (instance49 == NULL)
	{
		instance49 = new BulletSprite();
		instance49->init();
		return instance49;
	}
	if (instance50 == NULL)
	{
		instance50 = new BulletSprite();
		instance50->init();
		return instance50;
	}
	if (instance51 == NULL)
	{
		instance51 = new BulletSprite();
		instance51->init();
		return instance51;
	}
	if (instance52 == NULL)
	{
		instance52 = new BulletSprite();
		instance52->init();
		return instance52;
	}
	if (instance53 == NULL)
	{
		instance53 = new BulletSprite();
		instance53->init();
		return instance53;
	}
	if (instance54 == NULL)
	{
		instance54 = new BulletSprite();
		instance54->init();
		return instance54;
	}
	if (instance55 == NULL)
	{
		instance55 = new BulletSprite();
		instance55->init();
		return instance55;
	}
	if (instance56 == NULL)
	{
		instance56 = new BulletSprite();
		instance56->init();
		return instance56;
	}
	if (instance57 == NULL)
	{
		instance57 = new BulletSprite();
		instance57->init();
		return instance50;
	}
	if (instance58 == NULL)
	{
		instance58 = new BulletSprite();
		instance58->init();
		return instance58;
	}
	if (instance59 == NULL)
	{
		instance59 = new BulletSprite();
		instance59->init();
		return instance59;
	}
	if (instance60 == NULL)
	{
		instance60 = new BulletSprite();
		instance60->init();
		return instance60;
	}
	if (instance61 == NULL)
	{
		instance61 = new BulletSprite();
		instance61->init();
		return instance61;
	}
	if (instance62 == NULL)
	{
		instance62 = new BulletSprite();
		instance62->init();
		return instance62;
	}
	if (instance63 == NULL)
	{
		instance63 = new BulletSprite();
		instance63->init();
		return instance63;
	}
	if (instance64 == NULL)
	{
		instance64 = new BulletSprite();
		instance64->init();
		return instance64;
	}
	if (instance65 == NULL)
	{
		instance65 = new BulletSprite();
		instance65->init();
		return instance65;
	}
	if (instance66 == NULL)
	{
		instance66 = new BulletSprite();
		instance66->init();
		return instance66;
	}
	if (instance67 == NULL)
	{
		instance67 = new BulletSprite();
		instance67->init();
		return instance67;
	}
	if (instance68 == NULL)
	{
		instance68 = new BulletSprite();
		instance68->init();
		return instance68;
	}
	if (instance69 == NULL)
	{
		instance69 = new BulletSprite();
		instance69->init();
		return instance69;
	}
	if (instance70 == NULL)
	{
		instance70 = new BulletSprite();
		instance70->init();
		return instance70;
	}
	if (instance71 == NULL)
	{
		instance71 = new BulletSprite();
		instance71->init();
		return instance71;
	}
	if (instance72 == NULL)
	{
		instance72 = new BulletSprite();
		instance72->init();
		return instance72;
	}
	if (instance73 == NULL)
	{
		instance73 = new BulletSprite();
		instance73->init();
		return instance73;
	}
	if (instance74 == NULL)
	{
		instance74 = new BulletSprite();
		instance74->init();
		return instance74;
	}
	if (instance75 == NULL)
	{
		instance75 = new BulletSprite();
		instance75->init();
		return instance75;
	}
	if (instance76 == NULL)
	{
		instance76 = new BulletSprite();
		instance76->init();
		return instance76;
	}
	if (instance77 == NULL)
	{
		instance77 = new BulletSprite();
		instance77->init();
		return instance77;
	}
	if (instance78 == NULL)
	{
		instance78 = new BulletSprite();
		instance78->init();
		return instance78;
	}
	if (instance79 == NULL)
	{
		instance79 = new BulletSprite();
		instance79->init();
		return instance79;
	}
	if (instance80 == NULL)
	{
		instance80 = new BulletSprite();
		instance80->init();
		return instance80;
	}
	if (instance81 == NULL)
	{
		instance81 = new BulletSprite();
		instance81->init();
		return instance81;
	}
	if (instance82 == NULL)
	{
		instance82 = new BulletSprite();
		instance82->init();
		return instance82;
	}
	if (instance83 == NULL)
	{
		instance83 = new BulletSprite();
		instance83->init();
		return instance83;
	}
	if (instance84 == NULL)
	{
		instance84 = new BulletSprite();
		instance84->init();
		return instance84;
	}
	if (instance85 == NULL)
	{
		instance85 = new BulletSprite();
		instance85->init();
		return instance85;
	}
	if (instance86 == NULL)
	{
		instance86 = new BulletSprite();
		instance86->init();
		return instance86;
	}
	if (instance87 == NULL)
	{
		instance87 = new BulletSprite();
		instance87->init();
		return instance87;
	}
	if (instance88 == NULL)
	{
		instance88 = new BulletSprite();
		instance88->init();
		return instance88;
	}
	if (instance89 == NULL)
	{
		instance89 = new BulletSprite();
		instance89->init();
		return instance89;
	}
	if (instance90 == NULL)
	{
		instance90 = new BulletSprite();
		instance90->init();
		return instance90;
	}
	if (instance91 == NULL)
	{
		instance91 = new BulletSprite();
		instance91->init();
		return instance91;
	}
	if (instance92 == NULL)
	{
		instance92 = new BulletSprite();
		instance92->init();
		return instance92;
	}
	if (instance93 == NULL)
	{
		instance93 = new BulletSprite();
		instance93->init();
		return instance93;
	}
	if (instance94 == NULL)
	{
		instance94 = new BulletSprite();
		instance94->init();
		return instance94;
	}
	if (instance95 == NULL)
	{
		instance95 = new BulletSprite();
		instance95->init();
		return instance95;
	}
	if (instance96 == NULL)
	{
		instance96 = new BulletSprite();
		instance96->init();
		return instance96;
	}
	if (instance97 == NULL)
	{
		instance97 = new BulletSprite();
		instance97->init();
		return instance97;
	}
	if (instance98 == NULL)
	{
		instance98 = new BulletSprite();
		instance98->init();
		return instance98;
	}
	if (instance99 == NULL)
	{
		instance99 = new BulletSprite();
		instance99->init();
		return instance99;
	}
	if (instance100 == NULL)
	{
		instance100 = new BulletSprite();
		instance100->init();
		return instance100;
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
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("MagicCircle.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("laser.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("waterspout.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("sword.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("Evation.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("chaos.plist");

	Animation* animation8 = Anima::createWithSingleFrameName("magi0_", 0.1f, -1);
	Animation* animation9 = Anima::createWithSingleFrameName("MagicCircle0_", 0.1f, -1);
	Animation* animation10 = Anima::createWithSingleFrameName("laser0_", 0.1f, -1);
	Animation* animation11 = Anima::createWithSingleFrameName("waterspout0_", 0.2f, -1);
	Animation* animation12 = Anima::createWithSingleFrameName("sword0_", 0.1f, -1);
	Animation* animation13 = Anima::createWithSingleFrameName("Evation0_", 0.1f, -1);
	Animation* animation14 = Anima::createWithSingleFrameName("chaos0_", 0.3f, -1);
	AnimationCache::getInstance()->addAnimation(animation8, "fly_one");
	AnimationCache::getInstance()->addAnimation(animation9, "firing_one");
	AnimationCache::getInstance()->addAnimation(animation10, "laser_one");
	AnimationCache::getInstance()->addAnimation(animation11, "waterspout_one");
	AnimationCache::getInstance()->addAnimation(animation12, "sword_one");
	AnimationCache::getInstance()->addAnimation(animation13, "Evation_one");
	AnimationCache::getInstance()->addAnimation(animation13, "chaos_one");
	this->setTexture("magi0_0.png");
//	this->setTexture("MagicCircle0_0.png");
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
		this->setTexture(str);
		animate = Animate::create(AnimationCache::getInstance()->getAnimation(anistr));
		this->runAction(RepeatForever::create(animate));

		auto CaBody = PhysicsBody::createBox(this->getContentSize(), PHYSICSBODY_MATERIAL_DEFAULT);
		CaBody->setCategoryBitmask(0x01);
		CaBody->setCollisionBitmask(0x00000000);
		CaBody->setContactTestBitmask(0x01);
		this->setPhysicsBody(CaBody);
}

void BulletSprite::setanimation(__String name, __String aniname,int times)
{
	const std::string str = name.getCString();
	this->setTexture(str);
	const std::string anistr = aniname.getCString();
	animate = Animate::create(AnimationCache::getInstance()->getAnimation(anistr));
	this->runAction(Repeat::create(animate, times));
	auto CaBody = PhysicsBody::createBox(this->getContentSize(), PHYSICSBODY_MATERIAL_DEFAULT);
	CaBody->setCategoryBitmask(0x01);
	CaBody->setCollisionBitmask(0x00000000);
	CaBody->setContactTestBitmask(0x01);
	this->setPhysicsBody(CaBody);
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
	this->setTag(100001);
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
	this->setTag(100001);
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
	this->setTag(100001);
	m_target = target;
	m_sped = sped;
	this->setPosition(Vec2(50, 30));
	old_pos = this->getParent()->getPosition();
	schedule(schedule_selector(BulletSprite::Followed),0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(BulletSprite::bulletclear), 10, 1, 0);
}
/*
void BulletSprite::Followed(float)
{
	double denominator = sqrt(pow((m_target->getPosition().y - this->getPosition().y), 2) + pow(m_target->getPosition().x - this->getPosition().x, 2));
	double time = denominator / m_sped;
	auto moveto = MoveTo::create(8, m_target->getPosition()- this->getParent()->getPosition());
	this->stopAllActions();
	this->runAction(moveto);
}*/
/*
void BulletSprite::collision(Sprite* target, Sprite* bullet)
{
	target->get();
}*/

void BulletSprite::Followed(float)
{
	Vec2 true_vec;
	true_vec.x = m_target->getPosition().x;
	true_vec.y = m_target->getPosition().y;
//	if (old_pos == Vec2(-100, -100))
//		old_pos = this->getParent()->getPosition();
	double denominator = sqrt(pow((true_vec.y - old_pos.y), 2) + pow(true_vec.x - old_pos.x, 2));
	//double time = denominator / m_sped;
	Vec2 move_vec;
	move_vec.y = (true_vec.y - old_pos.y) * m_sped / denominator / move_rate;
	move_vec.x = (true_vec.x - old_pos.x) * m_sped / denominator / move_rate;
	old_pos.x += move_vec.x;
	old_pos.y += move_vec.y;
	this->setPosition(old_pos.x - this->getParent()->getPosition().x, old_pos.y - this->getParent()->getPosition().y);
}


void BulletSprite::Durable(Vec2 pos_started, Vec2 pos_ended, int Length,int time,int kind)
{
	double denominator = sqrt(pow((pos_ended.y - pos_started.y), 2) + pow(pos_ended.x - pos_started.x, 2));
	Vec2 pos_true;
	if(pos_ended!= pos_started)
		pos_true = pos_started+(pos_ended - pos_started) / denominator * Length;
	else
		pos_true == Vec2(0, 0);
	//this->setPosition(pos_started);
	if (kind == 1)
	{
		this->setPosition(pos_true);
		//this->setTexture("MagicCircle0_0.png");
		setanimation("MagicCircle0_0.png", "firing_one");
		auto BaBody = PhysicsBody::createBox(this->getContentSize(), PHYSICSBODY_MATERIAL_DEFAULT);
		BaBody->setRotationEnable(false);
		BaBody->setCategoryBitmask(0x01);
		BaBody->setCollisionBitmask(0x00000000);
		BaBody->setContactTestBitmask(0x01);

		this->setPhysicsBody(BaBody);
		this->setTag(100002);
	}
	else
	{
		this->setPosition(Vec2(50, 30));
		setanimation("laser0_0.png", "laser_one");
		auto CaBody = PhysicsBody::createBox(this->getContentSize(), PHYSICSBODY_MATERIAL_DEFAULT);
		CaBody->setRotationEnable(false);
		CaBody->setCategoryBitmask(0x01);
		CaBody->setCollisionBitmask(0x00000000);
		CaBody->setContactTestBitmask(0x01);
		this->setPhysicsBody(CaBody);
		this->setTag(100001);
	}
	this->schedule(schedule_selector(BulletSprite::bulletclear),time, 1, 0);
}