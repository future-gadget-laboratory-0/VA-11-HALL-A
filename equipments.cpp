#include "equipments.h"
//#include "LoadingScene.h"
//#include "define.h"

//ע������Ҫ��ʼ��
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