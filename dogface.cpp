#include "dogface.h"



Spritedogface* Spritedogface::instance1 = NULL;
Spritedogface* Spritedogface::instance2 = NULL;
Spritedogface* Spritedogface::instance3 = NULL;
Spritedogface* Spritedogface::instance4 = NULL;
Spritedogface* Spritedogface::instance5 = NULL;
Spritedogface* Spritedogface::instance6 = NULL;
Spritedogface* Spritedogface::instance7 = NULL;
Spritedogface* Spritedogface::instance8 = NULL;
Spritedogface* Spritedogface::instance9 = NULL;
Spritedogface* Spritedogface::instance10 = NULL;

Spritedogface::Spritedogface()
{

}


Spritedogface* Spritedogface::getInstance()
{
	if (instance1 == NULL)
	{
		instance1 = new Spritedogface();
		instance1->init();
		return instance1;
	}
	if (instance2 == NULL)
	{
		instance2 = new Spritedogface();
		instance2->init();
		return instance2;
	}
	if (instance3 == NULL)
	{
		instance3 = new Spritedogface();
		instance3->init();
		return instance3;
	}
	if (instance4 == NULL)
	{
		instance4 = new Spritedogface();
		instance4->init();
		return instance4;
	}
	if (instance5 == NULL)
	{
		instance5 = new Spritedogface();
		instance5->init();
		return instance5;
	}
	if (instance6 == NULL)
	{
		instance6 = new Spritedogface();
		instance6->init();
		return instance6;
	}
	if (instance7 == NULL)
	{
		instance7 = new Spritedogface();
		instance7->init();
		return instance7;
	}
	if (instance8 == NULL)
	{
		instance8 = new Spritedogface();
		instance8->init();
		return instance8;
	}
	if (instance9 == NULL)
	{
		instance9 = new Spritedogface();
		instance9->init();
		return instance9;
	}
	if (instance10 == NULL)
	{
		instance10 = new Spritedogface();
		instance10->init();
		return instance10;
	}
}

BulletSprite* Spritedogface::bulletmaking(int kind)
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
	else return NULL;
}



Spritedogface * Spritedogface::create(const char *filename)
{
	Spritedogface *sprite = new Spritedogface();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}

Spritedogface *  Spritedogface::createWithSpriteFrameName(const char *filename)
{
	Spritedogface *sprite = new Spritedogface();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}


bool Spritedogface::init()
{
	if (!UnitsSprite::init())
	{
		return false;
	}
	auto winSize = Director::getInstance()->getWinSize();

	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("dogface.plist");
	Animation* animation0 = Anima::createWithSingleFrameName("dogface0_", 0.1f, -1);
	Animation* animation1 = Anima::createWithSingleFrameName("dogface1_", 0.1f, -1);
	Animation* animation2 = Anima::createWithSingleFrameName("dogface2_", 0.1f, -1);
	Animation* animation3 = Anima::createWithSingleFrameName("dogface3_", 0.1f, -1);
	Animation* animation4 = Anima::createWithSingleFrameName("dogface4_", 0.1f, 1);
	Animation* animation5 = Anima::createWithSingleFrameName("dogface5_", 0.1f, 1);

	AnimationCache::getInstance()->addAnimation(animation0, "dogface0");
	AnimationCache::getInstance()->addAnimation(animation1, "dogface1");
	AnimationCache::getInstance()->addAnimation(animation2, "dogface2");
	AnimationCache::getInstance()->addAnimation(animation3, "dogface3");
	AnimationCache::getInstance()->addAnimation(animation4, "dogface4");
	AnimationCache::getInstance()->addAnimation(animation5, "dogface5");

	this->setTexture("dogface0_0.png");
	HP_bar = Sprite::create("bar.png");
	HP_bar->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height + HP_bar->getContentSize().height*0.15);
	HP_bar->setAnchorPoint(Vec2(0.5, 0.5));
	auto hp_bar = Sprite::create("Hp.png");
	Hp_progress = ProgressTimer::create(hp_bar);
	Hp_progress->setType(ProgressTimer::Type::BAR);
	Hp_progress->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height + HP_bar->getContentSize().height*0.15);
	Hp_progress->setMidpoint(Point(0, 0.5));
	Hp_progress->setBarChangeRate(Point(1, 0));
	Hp_progress->setTag(1000000 + m_tag);
	HP_bar->setScale(0.15);
	Hp_progress->setScale(0.15);
	this->addChild(Hp_progress, 1);
	this->addChild(HP_bar, 0);
	actor_property my_propertystruct;
	my_propertystruct.HP = 100;
	my_propertystruct.MP = 0;
	my_propertystruct.STA = 100;
	my_propertystruct.MHP = 100;
	my_propertystruct.MMP = 0;
	my_propertystruct.MSTA = 100;
	my_propertystruct.RHP = 1;
	my_propertystruct.RMP = 1;
	my_propertystruct.RSTA = 2;
	my_propertystruct.EVA = 0;
	my_propertystruct.SPE = 395;
	my_propertystruct.ACC = 0;
	my_propertystruct.ATK = 20;
	my_propertystruct.ATKM = 10;
	my_propertystruct.ATKS = 0;
	my_propertystruct.DEF = 0;
	my_propertystruct.RES = 0;
	my_propertystruct.RDR = 0;
	my_propertystruct.BP = 0;
	my_propertystruct.ATR = 200;
	my_propertystruct.ATRS = 200;
	my_propertystruct.ATRN = 200;
	my_propertystruct.ATRR = 200;
	my_propertystruct.ATRT = 200;
	my_propertystruct.MCS = 100;
	my_propertystruct.MCN = 10;
	my_propertystruct.MCR = 75;
	my_propertystruct.MCT = 200;
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


	bullet0->setanimation("magi0_0.png", "fly_one");
	bullet0->setName("bullet0");
	bullet1->setName("bullet1");
	bullet2->setName("bullet2");
	bullet3->setName("bullet3");


	this->setPosition(Point(winSize.width / 2, winSize.height*0.8));
	CaBody = PhysicsBody::createBox(this->getContentSize(), PHYSICSBODY_MATERIAL_DEFAULT);
	CaBody->setRotationEnable(false);
	CaBody->setCategoryBitmask(0x01);
	CaBody->setCollisionBitmask(0x00000001);
	CaBody->setContactTestBitmask(0x01);
	this->setPhysicsBody(CaBody);








	this->setAnchorPoint(Point(0.5, 0.2));
	this->schedule(schedule_selector(Spritedogface::move), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(Spritedogface::death), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(Spritedogface::restore), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(Spritedogface::levelup), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(Spritedogface::property_refresh), 0.01f, kRepeatForever, 0);
	return true;
}

void Spritedogface::setkind(int kind)
{
	if(kind==0||kind==1||kind==2)
		this->setTag(kind*1000+11000);
	else
		this->setTag(kind*1000+18000);
	if (kind == 0)
	{
		this->setPosition(Vec2(320, 320));
		pos = Vec2(320, 320);
		old_pos = Vec2(320, 320);
		this->addproperty(50, "HP");
		this->addproperty(50, "MHP");
		this->addproperty(-10, "ATK");
		this->addproperty(-100, "ATR");
		this->setTexture("dogface0_0");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("dogface0")); 
		this->runAction(RepeatForever::create(animate));
	}
		
	else if(kind == 1)
	{
		this->setPosition(Vec2(350, 320));
		pos = Vec2(350, 320);
		old_pos = Vec2(350, 320);
		this->addproperty(-50, "HP");
		this->addproperty(-50, "MHP");
		this->addproperty(10, "ATKM");
		this->setTexture("dogface1_0");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("dogface1"));
		this->runAction(RepeatForever::create(animate));
	}
	else if (kind == 2)
	{
		this->setPosition(Vec2(400, 320));
		pos = Vec2(400, 320);
		old_pos = Vec2(400, 320);
		this->addproperty(100, "HP");
		this->addproperty(100, "MHP");
		this->addproperty(10, "ATK");
		this->addproperty(100, "ATR");
		this->addproperty(5, "RET");
		this->setTexture("dogface2_0");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("dogface2"));
		this->runAction(RepeatForever::create(animate));
	}
	else if (kind == 3)
	{
		this->setPosition(Vec2(2500, 150));
		pos = Vec2(2500, 150);
		old_pos = Vec2(2500, 150);
		this->addproperty(50, "HP");
		this->addproperty(50, "MHP");
		this->addproperty(-10, "ATK");
		this->addproperty(-100, "ATR");
		this->setTexture("dogface3_0");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("dogface3"));
		this->runAction(RepeatForever::create(animate));
	}
	else if (kind == 4)
	{
		this->setPosition(Vec2(2500, 180));
		pos = Vec2(2500, 180);
		old_pos = Vec2(2500, 180);
		this->addproperty(-50, "HP");
		this->addproperty(-50, "MHP");
		this->addproperty(10, "ATKM");
		this->setTexture("dogface4_0");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("dogface4"));
		this->runAction(RepeatForever::create(animate));
	}
	else if (kind == 5)
	{
		this->setPosition(Vec2(2500, 250));
		pos = Vec2(2500, 250);
		old_pos = Vec2(2500, 250);
		this->addproperty(100, "HP");
		this->addproperty(100, "MHP");
		this->addproperty(-10, "ATK");
		this->addproperty(+100, "ATR");
		this->addproperty(5, "RET");
		this->setTexture("dogface5_0");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("dogface5"));
		this->runAction(RepeatForever::create(animate));
	}
}
void  Spritedogface::setbody(int ca, int co, int ct)
{
	CaBody->setCategoryBitmask(ca);
	CaBody->setCollisionBitmask(co);
	CaBody->setContactTestBitmask(ct);
}


void Spritedogface::move(float)
{
	if (!movable)
		return;
	stop_judge = 0;
	int devia = deviation;
	Vec2 move_vec;
	Vec2 true_vec;
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
		return;
	}
	else if (true_vec.x >= old_pos.x&&true_vec.y >= old_pos.y)
	{
		old_pos.x = old_pos.x + move_vec.x;//pos
		old_pos.y = old_pos.y + move_vec.y;//pos
		this->setPosition(old_pos);
	}
	else if (true_vec.x >= old_pos.x&&true_vec.y < old_pos.y)
	{
		old_pos.x = old_pos.x + move_vec.x;//pos
		old_pos.y = old_pos.y + move_vec.y;//pos
		this->setPosition(old_pos);
	}
	else if (true_vec.x < old_pos.x&&true_vec.y >= old_pos.y)
	{
		old_pos.x = old_pos.x + move_vec.x;//pos
		old_pos.y = old_pos.y + move_vec.y;//pos
		this->setPosition(old_pos);
	}
	else if (true_vec.x < old_pos.x&&true_vec.y < old_pos.y)
	{
		old_pos.x = old_pos.x + move_vec.x;//pos
		old_pos.y = old_pos.y + move_vec.y;//pos
		this->setPosition(old_pos);
	}
}

void Spritedogface::normal_attack(float ats)
{
	if (Inrange(0) == false)
	{
		pos = pos_should;
		return;
	}
	attackable = false;
	if (ats == 0)
		ats = this->get().ATS;

	float time = attackspeed;
	time = time / ats;
	this->schedule(schedule_selector(Spritedogface::doattack), time, 1, 0);
	pos.x = old_pos.x;
	pos.y = old_pos.y; 
	attack_pos = pos;
}
void Spritedogface::doattack(float)
{
	if (attack_pos != pos)
		return;
	attackable = true;;
	if (this->getTag() != 11000 && this->getTag() != 21000)
	{
		auto bullet = bulletmaking(1);
		bullet->setanimation("magi0_0.png", "fly_one");
		bullet->Followed(target, 200);
		if (this->getTag() > 20000)
			bullet->setTag(100101);
	}
	else
	{
		int dam = target->receivetotaldamage(this->get(), 0, 0, 0, 0);
		target->addproperty(-dam, "HP");
	}
	
}
bool Spritedogface::Inrange(int kind)
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

void Spritedogface::self_strengthen(int dur, int val, __String str)
{
	if (instrengthen = 1)
		return;
	else
		instrengthen = 1;
	strength_property_st = str;
	strength_property_st_num = val;
	this->addproperty(strength_property_st_num, strength_property_st);
	this->schedule(schedule_selector(Spritedogface::strengthen), dur, 1, 0);
}
void Spritedogface::self_strengthen(int dur, int val1, __String str1, int val2, __String str2)
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
	this->schedule(schedule_selector(Spritedogface::strengthen), dur, 1, 0);
}

void Spritedogface::self_strengthen(int dur, int val1, __String str1, int val2, __String str2, int val3, __String str3)
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
	this->schedule(schedule_selector(Spritedogface::strengthen), dur, 1, 0);
}

void Spritedogface::self_strengthen(int dur, int val1, __String str1, int val2, __String str2, int val3, __String str3, int val4, __String str4)
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
	this->schedule(schedule_selector(Spritedogface::strengthen), dur, 1, 0);
}

void Spritedogface::strengthen(float)
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
void Spritedogface::death(float time)
{
	death_judge = true;
	if (get().HP <= 0)
	{
		this->unschedule(schedule_selector(Spritedogface::restore));
		this->actionManager->removeAllActionsFromTarget(this);
		this->setTexture("death.png");
		//changeproperty(500, "RET");
		this->unschedule(schedule_selector(Spritedogface::death));
		if (get().RET >= 0)
			this->schedule(schedule_selector(Spritedogface::revive), get().RET, 1, 0);
		else
			this->schedule(schedule_selector(Spritedogface::revive), 10, 1, 0);
	}
}

void Spritedogface::revive(float time)
{
	Spritedogface* dogface1 = (Spritedogface*)this->getParent()->getChildByTag(11000);
	Spritedogface* dogface2 = (Spritedogface*)this->getParent()->getChildByTag(12000);
	Spritedogface* dogface3 = (Spritedogface*)this->getParent()->getChildByTag(13000);
	Spritedogface* dogface4 = (Spritedogface*)this->getParent()->getChildByTag(21000);
	Spritedogface* dogface5 = (Spritedogface*)this->getParent()->getChildByTag(22000);
	Spritedogface* dogface6 = (Spritedogface*)this->getParent()->getChildByTag(11000);




	if (this->getTag() == 11000)
	{
		if (dogface3->get().HP < 0)
		{
			movable = false;
		}
		this->setPosition(Vec2(320, 320));
		pos = Vec2(320, 320);
		old_pos = Vec2(320, 320);
		this->setTexture("dogface0_0.png");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("dogface0"));
		this->runAction(RepeatForever::create(animate));
	}
	else if (this->getTag() == 12000)
	{
		if (dogface3->get().HP < 0)
		{
			movable = false;
		}
		this->setPosition(Vec2(350, 320));
		pos = Vec2(350, 320);
		old_pos = Vec2(350, 320); 
		this->setTexture("dogface1_0.png");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("dogface1"));
		this->runAction(RepeatForever::create(animate));
	}
	else if (this->getTag() == 13000)
	{
		{
			dogface1->movable = true;
			dogface2->movable = true;
		}
		this->setPosition(Vec2(400, 150));
		pos = Vec2(400, 320);
		old_pos = Vec2(400, 320);
		this->setTexture("dogface2_0.png");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("dogface2"));
		this->runAction(RepeatForever::create(animate));
	}

	else if(this->getTag() == 21000)
	{
		if (dogface6->get().HP < 0)
		{
			movable = false;
		}
		this->setPosition(Vec2(2500, 150));
		pos = Vec2(2500, 150);
		old_pos = Vec2(2500, 150);
		this->setTexture("dogface3_0.png");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("dogface3"));
		this->runAction(RepeatForever::create(animate));
	}
	else if (this->getTag() == 22000)
	{
		if (dogface6->get().HP <0)
		{
			movable = false;
		}
		this->setPosition(Vec2(2500, 180));
		pos = Vec2(2500, 180);
		old_pos = Vec2(2500, 180);
		this->setTexture("dogface4_0.png");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("dogface4"));
		this->runAction(RepeatForever::create(animate));
	}

	else if (this->getTag() == 23000)
	{
		{
			dogface4->movable = true;
			dogface5->movable = true;
		}
		this->setPosition(Vec2(2500, 250));
		pos = Vec2(2500, 250);
		old_pos = Vec2(2500, 250);
		this->setTexture("dogface5_0.png");
		animate = Animate::create(AnimationCache::getInstance()->getAnimation("dogface5"));
		this->runAction(RepeatForever::create(animate));
	}
	death_judge = false;
	this->changeproperty(get().MHP, "HP");
	this->schedule(schedule_selector(Spritedogface::death), 0.01f, kRepeatForever, 0);
	this->schedule(schedule_selector(Spritedogface::restore), 1.0f, kRepeatForever, 0);
	this->unschedule(schedule_selector(Spritedogface::revive));
}

void Spritedogface::restore(float time)
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

void Spritedogface::levelup(float time)
{

	int level = this->consumeEXP(0, 5);
	if (level == 20)
		this->unschedule(schedule_selector(Spritedogface::levelup));
}



void Spritedogface::property_refresh(float)
{
	Hp_progress->setPercentage(((float)this->get().HP / this->get().MHP) * 100);
}