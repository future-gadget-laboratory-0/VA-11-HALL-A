#include "equipments.h"
//#include "LoadingScene.h"
//#include "define.h"

//注意这里要初始化
EquipSprite* EquipSprite::instance = NULL;

EquipSprite::EquipSprite()
{

}

EquipSprite* EquipSprite::getInstance()
{
	if (instance == NULL)
	{
		instance = new EquipSprite();
		instance->init();
	}
	return instance;
}

bool EquipSprite::init()
{
	if (!Sprite::init())
	{
		return false;
	}
	auto winSize = Director::getInstance()->getWinSize();


	return true;
}