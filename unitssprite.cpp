#include "unitsSprite.h"
//#include "LoadingScene.h"
//#include "define.h"

//注意这里要初始化
UnitsSprite* UnitsSprite::instance = NULL;

UnitsSprite::UnitsSprite()
{
	
}



UnitsSprite * UnitsSprite::create(const char *filename)
{
	UnitsSprite *sprite = new UnitsSprite();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}

bool UnitsSprite::setproperty(const actor_property& acp) 
{
	m_property = acp;
	if (m_property.HP != 0)
		return true;
}

bool UnitsSprite::bpdamage()
{
	srand((unsigned)time(NULL));
	if (m_property.BP >= (rand() % 100))
		return 1;
	else 
		return 0;
}

bool UnitsSprite::evadamage(const int&val)
{
	srand((unsigned)time(NULL));
	if (val < (rand() % 100))
		if (m_property.EVA >= (rand() % 100))
			return 1;
	return 0;
}
int UnitsSprite::createdamage(const int& type,const int& val)
{
	if (type == 0)
		return m_property.ATK;
	else if (type == 1)
		return m_property.ATKM;
	else
		return m_property.ATKS;
	m_property.MP -= val;
}
int UnitsSprite::createdamage(const int& type)	
{
	if (type==0)
		return m_property.ATK;
	else if (type==1)
		return m_property.ATKM;
	else
		return m_property.ATKS;
}

int UnitsSprite::receivedamage(const int& damage, const int& defenceval, const int& type)
{
	int dam;
	int rate = 100 - m_property.RDR ;
	if (type == 0)
	{
		rate = (100-(m_property.DEF + defenceval)*0.06 / (1 + defenceval * 0.06 + m_property.DEF*0.06))*rate/100;
		dam = damage * rate / 100;
		m_property.HP -= dam;
		return dam;
	}
	if (type == 1)
	{
		rate = (100-(m_property.RES + defenceval)*0.06 / (1 + defenceval * 0.06 + m_property.RES*0.06))*rate/100;
		dam = damage * rate / 100;
		m_property.HP -= dam;
		return dam;
	}
}

int UnitsSprite::receivedamage(const int& damage, const int& defenceval, const int& type, const int& Reductionrate)
{
	int dam;
	int rate=100-m_property.RDR- Reductionrate;
	if (type == 0)
	{
		rate = (100-(m_property.DEF + defenceval)*0.06 / (1 + defenceval * 0.06 + m_property.DEF*0.06))*rate/100;
		dam = damage * rate / 100;
		m_property.HP -= dam;
		return dam;
	}	
	if (type == 1)
	{
		rate = (100-(m_property.RES + defenceval)*0.06 / (1 + defenceval * 0.06 + m_property.RES*0.06))*rate/100;
		dam = damage * rate / 100;
		m_property.HP -= dam;
		return dam;
	}
}



int UnitsSprite::receivetotaldamage(const actor_property& property, const int& situation, const int&	addtional_DEF,const int& addtional_RES, const int& Reductionrate)
{
	int totaldamage;
	int rate = 100 - m_property.RDR - Reductionrate;
	int rate_physic= (m_property.DEF + addtional_DEF)*0.06 / (1 + addtional_DEF * 0.06 + m_property.DEF*0.06);
	int rate_magic= (m_property.RES + addtional_RES)*0.06 / (1 + addtional_RES * 0.06 + m_property.RES*0.06); 
	rate_physic = (100 - rate_physic)*rate / 100;
	rate_magic =  (100 - rate_magic)*rate / 100;
	totaldamage= (property.ATK * rate_physic / 100)+ (property.ATKM*rate_magic/100+ property.ATKS);
	if (situation != 0)
	{
		m_property.HP -= totaldamage;
		return totaldamage;
	}
	else
		return totaldamage;
	
}


int UnitsSprite::consumeSTA(const int& val)
{
	m_property.STA -= val;
	return m_property.STA;
}
bool UnitsSprite::changeproperty(const int& val, const __String& name)
{
	const std::string str = name.getCString();
	if (str == "HP")
		m_property.HP = val;
	else if (str == "MP")
		m_property.MP = val;
	else if (str == "STA")
		m_property.STA = val;
	else if (str == "MHP")
		m_property.MHP = val;
	else if (str == "MP")
		m_property.MMP = val;
	else if (str == "MMP")
		m_property.MP = val;
	else if (str == "MSTA")
		m_property.MSTA = val;
	else if (str == "RHP")
		m_property.RHP = val;
	else if (str == "RMP")
		m_property.RMP = val;
	else if (str == "RSTA")
		m_property.RSTA = val;
	else if (str == "EVA")
		m_property.EVA = val;
	else if (str == "SPE")
		m_property.SPE = val;
	else if (str == "ACC")
		m_property.ACC = val;
	else if (str == "ATK")
		m_property.ATK = val;
	else if (str == "ATKM")
		m_property.ATKM = val;
	else if (str == "ATKS")
		m_property.ATKS = val;
	else if (str == "DEF")
		m_property.DEF = val;
	else if (str == "RES")
		m_property.RES = val;
	else if (str == "RDR")
		m_property.RDR = val;
	else if (str == "BP")
		m_property.BP = val;
	else if (str == "ATR")
		m_property.ATR = val;
	else if (str == "RET")
		m_property.RET = val;
	else if (str == "TYPE")
		m_property.TYPE = val;
		return FALSE;
	return TRUE;
}	
void UnitsSprite::Recover(const int& val, const int& time, const __String& name)//return condition
{
	m_property.HP += m_property.RHP;
	m_property.MP += m_property.RMP;
	m_property.STA += m_property.RSTA;
}

int UnitsSprite::consumeEXP(const int& Level, const int& Exp)//return Level
{
	m_property.LEVEL += Level;
	m_property.EXP += Level;
	int Exp_Required = m_property.LEVEL*m_property.LEVEL * 10+500;
	while (Exp_Required <= m_property.EXP&&m_property.LEVEL<=19)
	{
		levelup();
		m_property.EXP -= Exp_Required;
		m_property.LEVEL += 1;
		Exp_Required = m_property.LEVEL*m_property.LEVEL * 10 + 500;
	}
	return m_property.LEVEL;
}

void UnitsSprite::levelup()
{
	
	m_property.HP += 100;
	m_property.MP += 100;
	m_property.STA += 50;
	m_property.MHP += 100;
	m_property.MMP += 100;
	m_property.MSTA += 50;
	m_property.RHP += 1;
	m_property.RMP += 1;
	m_property.RSTA += 1;
	m_property.EVA += 0;
	m_property.SPE += 0;
	m_property.ACC += 0;
	m_property.ATK += 7;
	m_property.ATKM += 5;
	m_property.ATKS += 0;
	m_property.DEF += 2;
	m_property.RES += 2;
	m_property.RDR += 0;
	m_property.BP += 0;
	m_property.ATR += 5;
	m_property.RET += 5;
	m_property.CDA -= 0.01;
}



actor_property UnitsSprite::get()
{
	actor_property my = m_property;
	return my;
}



UnitsSprite* UnitsSprite::getInstance()
{
	if (instance == NULL)
	{
		instance = new UnitsSprite();
		instance->init();
	}
	return instance;
}


bool UnitsSprite::init()
{
	if (!Sprite::init())
	{
		return false;
	}

	return true;
}
