#include "wall.h"



SpriteWall* SpriteWall::instance1 = NULL;
SpriteWall* SpriteWall::instance2 = NULL;
SpriteWall* SpriteWall::instance3 = NULL;
SpriteWall* SpriteWall::instance4 = NULL;
SpriteWall* SpriteWall::instance5 = NULL;

SpriteWall::SpriteWall()
{

}

SpriteWall* SpriteWall::getInstance()
{
	if (instance1 == NULL)
	{
		instance1 = new SpriteWall();
		instance1->init();
		return instance1;
	}
	if (instance2 == NULL)
	{
		instance2 = new SpriteWall();
		instance2->init();
		return instance2;
	}
	if (instance3 == NULL)
	{
		instance3 = new SpriteWall();
		instance3->init();
		return instance3;
	}
	if (instance4 == NULL)
	{
		instance4 = new SpriteWall();
		instance4->init();
		return instance4;
	}
	if (instance5 == NULL)
	{
		instance5 = new SpriteWall();
		instance5->init();
		return instance5;
	}
}


SpriteWall * SpriteWall::create(const char *filename)
{
	SpriteWall *sprite = new SpriteWall();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}

SpriteWall *  SpriteWall::createWithSpriteFrameName(const char *filename)
{
	SpriteWall *sprite = new SpriteWall();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}

bool SpriteWall::init()
{
	if (!UnitsSprite::init())
	{
		return false;
	}
	auto winSize = Director::getInstance()->getWinSize();
	this->setTexture("wall.png");
	HP_bar = Sprite::create("bar.png");
	HP_bar->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height );
	HP_bar->setAnchorPoint(Vec2(0.5, 0.5));
	auto hp_bar = Sprite::create("Hp.png");
	Hp_progress = ProgressTimer::create(hp_bar);
	Hp_progress->setType(ProgressTimer::Type::BAR);
	Hp_progress->setPosition(this->getPosition().x + this->getContentSize().width / 2, this->getPosition().y + this->getContentSize().height);
	Hp_progress->setMidpoint(Point(0, 0.5));
	Hp_progress->setBarChangeRate(Point(1, 0));
	//Hp_progress->setTag(1000000 + m_tag);

	HP_bar->setScale(0.15);
	Hp_progress->setScale(0.15);
	this->addChild(Hp_progress, 1);
	this->addChild(HP_bar, 0);
	actor_property my_propertystruct;
	my_propertystruct.HP = 500000;
	my_propertystruct.MP = 0;
	my_propertystruct.STA = 100;
	my_propertystruct.MHP = 500000;
	my_propertystruct.MMP = 0;
	my_propertystruct.MSTA = 100;
	my_propertystruct.RHP = 100000;
	my_propertystruct.RMP = 0;
	my_propertystruct.RSTA = 2;
	my_propertystruct.EVA = 0;
	my_propertystruct.SPE = 5;
	my_propertystruct.ACC = 0;
	my_propertystruct.ATK = 35;
	my_propertystruct.ATKM = 10;
	my_propertystruct.ATKS = 0;
	my_propertystruct.DEF = 0;
	my_propertystruct.RES = 0;
	my_propertystruct.RDR = 0;
	my_propertystruct.BP = 0;
	my_propertystruct.ATR = 400;
	my_propertystruct.ATRS = 600;
	my_propertystruct.ATRN = 600;
	my_propertystruct.ATRR = 600;
	my_propertystruct.ATRT = 600;
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


	this->setPosition(Point(winSize.width / 2, winSize.height*0.8));
	CaBody = PhysicsBody::createBox(this->getContentSize(), PHYSICSBODY_MATERIAL_DEFAULT);
	CaBody->setRotationEnable(false);
	CaBody->setCategoryBitmask(0x01);
	CaBody->setCollisionBitmask(0x00000000);
	CaBody->setContactTestBitmask(0x01);
	this->setPhysicsBody(CaBody);
	this->setAnchorPoint(Point(0.5, 0.2));
	this->schedule(schedule_selector(SpriteWall::restore), 1.0f, kRepeatForever, 0);
	this->schedule(schedule_selector(SpriteWall::property_refresh), 0.01f, kRepeatForever, 0);

	this->setTag(100);
	return true;
}
void SpriteWall::collopse_time(float time)
{
	this->schedule(schedule_selector(SpriteWall::collopse), time, 1, 0);
}


void SpriteWall::collopse(float)
{
	this->removeFromParentAndCleanup(true);
}

void SpriteWall::settag(int ta)
{
	this->setTag(ta);
}
void  SpriteWall::setbody(int ca, int co, int ct)
{
	CaBody->setCategoryBitmask(ca);
	CaBody->setCollisionBitmask(co);
	CaBody->setContactTestBitmask(ct);
}


void SpriteWall::restore(float time)
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


void SpriteWall::property_refresh(float)
{
	Hp_progress->setPercentage(((float)this->get().HP / this->get().MHP) * 100);
}