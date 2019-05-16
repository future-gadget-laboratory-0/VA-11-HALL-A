#include "unitsSprite.h"
//#include "LoadingScene.h"
//#include "define.h"

//注意这里要初始化
UnitsSprite* UnitsSprite::instance = NULL;

UnitsSprite::UnitsSprite()
{
	
}

int UnitsSprite::createdamage(const int& val, const int& time)	
{

}
int UnitsSprite::receivedamage(const int& val, const int& time)
{

}
int UnitsSprite::consumeSTA(const int& val, const int& time)
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
