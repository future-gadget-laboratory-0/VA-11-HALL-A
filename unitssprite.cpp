#include "unitsSprite.h"
//#include "LoadingScene.h"
//#include "define.h"

//注意这里要初始化
UnitsSprite* UnitsSprite::instance = NULL;

UnitsSprite::UnitsSprite()
{
	
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
		rate -= (m_property.DEF + defenceval)*0.06 / (1 + defenceval * 0.06 + m_property.DEF*0.06);
		dam = damage * rate / 100;
		m_property.HP -= dam;
		return dam;
	}
	if (type == 1)
	{
		rate -= (m_property.RES + defenceval)*0.06 / (1 + defenceval * 0.06 + m_property.RES*0.06);
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
		rate -= (m_property.DEF + defenceval)*0.06 / (1 + defenceval * 0.06 + m_property.DEF*0.06);
		dam = damage * rate / 100;
		m_property.HP -= dam;
		return dam;
	}	
	if (type == 1)
	{
		rate -= (m_property.RES + defenceval)*0.06 / (1 + defenceval * 0.06 + m_property.RES*0.06);
		dam = damage * rate / 100;
		m_property.HP -= dam;
		return dam;
	}
}
int UnitsSprite::consumeSTA(const int& val, const int& type)
{

}
int UnitsSprite::changeproperty(const int& val, const int& time, const __String& name)
{

}
void UnitsSprite::Recover(const int& val, const int& time, const __String& name)//return condition
{

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
