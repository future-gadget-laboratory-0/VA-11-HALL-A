#include "tower.h"



Spritetower* Spritetower::instance1 = NULL;
Spritetower* Spritetower::instance2 = NULL;
Spritetower* Spritetower::instance3 = NULL;
Spritetower* Spritetower::instance4 = NULL;
Spritetower* Spritetower::instance5 = NULL;

Spritetower::Spritetower()
{

}

Spritetower* Spritetower::getInstance()
{
	if (instance1 == NULL)
	{
		instance1 = new Spritetower();
		instance1->init();
		return instance1;
	}
	if (instance2 == NULL)
	{
		instance2 = new Spritetower();
		instance2->init();
		return instance2;
	}
	if (instance3 == NULL)
	{
		instance3 = new Spritetower();
		instance3->init();
		return instance3;
	}
	if (instance4 == NULL)
	{
		instance4 = new Spritetower();
		instance4->init();
		return instance4;
	}
	if (instance5 == NULL)
	{
		instance5 = new Spritetower();
		instance5->init();
		return instance5;
	}
}

BulletSprite* Spritetower::bulletmaking(int kind)
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
	else return NULL;
}



Spritetower * Spritetower::create(const char *filename)
{
	Spritetower *sprite = new Spritetower();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}

Spritetower *  Spritetower::createWithSpriteFrameName(const char *filename)
{
	Spritetower *sprite = new Spritetower();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}


bool Spritetower::init()
{
	if (!UnitsSprite::init())
	{
		return false;
	}
	auto winSize = Director::getInstance()->getWinSize();

	this->setTexture("base.png");
	HP_bar = Sprite::create("bar.png");
	HP_bar->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height + HP_bar->getContentSize().height*5);
	HP_bar->setAnchorPoint(Vec2(0.5, 0.5));
	auto hp_bar = Sprite::create("Hp.png");
	Hp_progress = ProgressTimer::create(hp_bar);
	Hp_progress->setType(ProgressTimer::Type::BAR);
	Hp_progress->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height + HP_bar->getContentSize().height*5);
	Hp_progress->setMidpoint(Point(0, 0.5));
	Hp_progress->setBarChangeRate(Point(1, 0));
	Hp_progress->setTag(1000000 + m_tag);
	HP_bar->setScale(0.35);
	Hp_progress->setScale(0.35);
	this->addChild(Hp_progress, 1);
	this->addChild(HP_bar, 0);
	actor_property my_propertystruct;
	my_propertystruct.HP = 2000;
	my_propertystruct.MP = 0;
	my_propertystruct.STA = 0;
	my_propertystruct.MHP = 2000;
	my_propertystruct.MMP = 0;
	my_propertystruct.MSTA = 0;
	my_propertystruct.RHP = 1;
	my_propertystruct.RMP = 0;
	my_propertystruct.RSTA = 0;
	my_propertystruct.EVA = 0;
	my_propertystruct.SPE = 395;
	my_propertystruct.ACC = 0;
	my_propertystruct.ATK = 35;
	my_propertystruct.ATKM = 10;
	my_propertystruct.ATKS = 0;
	my_propertystruct.DEF = 10;
	my_propertystruct.RES = 10;
	my_propertystruct.RDR = 10;
	my_propertystruct.BP = 0;
	my_propertystruct.ATR = 600;
	my_propertystruct.ATRS = 0;
	my_propertystruct.ATRN = 0;
	my_propertystruct.ATRR = 0;
	my_propertystruct.ATRT = 0;
	my_propertystruct.ATS = 0.5;
	my_propertystruct.RET = 0;
	my_propertystruct.TYPE = -1;
	my_propertystruct.LEVEL = 1;
	my_propertystruct.EXP = 0;
	setproperty(my_propertystruct);

	bullet0->setanimation("waterspout0_0.png", "waterspout_one");
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
	this->schedule(schedule_selector(Spritetower::death), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(Spritetower::restore), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(Spritetower::levelup), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(Spritetower::property_refresh), 0.01f, kRepeatForever, 0);

	return true;
}
/*
void SpriteCatherine::setPosition(Vec2 loc)
{
	this->setPosition(loc);
}*/

void Spritetower::settag(int ta)
{
	this->setTag(ta);
}
void  Spritetower::setbody(int ca, int co, int ct)
{
	CaBody->setCategoryBitmask(ca);
	CaBody->setCollisionBitmask(co);
	CaBody->setContactTestBitmask(ct);
}


void Spritetower::normal_attack(float ats)
{
	if (Inrange(0) == false)
	{
		return;
	}

	if (ats == 0)
		ats = this->get().ATS;
	if (normal_attacked == 0)
	{
		normal_attacked = 1;
	}

	float time = attackspeed;
	time = time / ats;
	this->schedule(schedule_selector(Spritetower::doattack), time, 1, 0);
}
void Spritetower::doattack(float)
{

	normal_attacked = 0;
	auto bullet = bulletmaking(1);
	bullet->setanimation("waterspout0_0.png", "waterspout_one");
	bullet->Followed(target, 200);
}
bool Spritetower::Inrange(int kind)
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
		return false;
	}
	else
		return true;
}


void Spritetower::self_strengthen(int dur, int val, __String str)
{
	if (instrengthen = 1)
		return;
	else
		instrengthen = 1;
	strength_property_st = str;
	strength_property_st_num = val;
	this->addproperty(strength_property_st_num, strength_property_st);
	this->schedule(schedule_selector(Spritetower::strengthen), dur, 1, 0);
}
void Spritetower::self_strengthen(int dur, int val1, __String str1, int val2, __String str2)
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
	this->schedule(schedule_selector(Spritetower::strengthen), dur, 1, 0);
}

void Spritetower::self_strengthen(int dur, int val1, __String str1, int val2, __String str2, int val3, __String str3)
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
	this->schedule(schedule_selector(Spritetower::strengthen), dur, 1, 0);
}

void Spritetower::self_strengthen(int dur, int val1, __String str1, int val2, __String str2, int val3, __String str3, int val4, __String str4)
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
	this->schedule(schedule_selector(Spritetower::strengthen), dur, 1, 0);
}

void Spritetower::strengthen(float)
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

void Spritetower::death(float time)
{
	death_judge = true;
	if (get().HP <= 0)
	{
		this->unschedule(schedule_selector(Spritetower::restore));
		this->setTexture("tower_death.png");
		//changeproperty(500, "RET");
		this->unschedule(schedule_selector(Spritetower::death));
	}
}

void Spritetower::restore(float time)
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

void Spritetower::levelup(float time)
{

	int level = this->consumeEXP(0, 5);
	if (level == 20)
		this->unschedule(schedule_selector(Spritetower::levelup));
}

void Spritetower::property_refresh(float)
{
	Hp_progress->setPercentage(((float)this->get().HP / this->get().MHP) * 100);
}