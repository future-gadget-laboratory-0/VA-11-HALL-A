#ifndef _EQUIPMENTS_H_
#define _EQUIPMENTS_H_
#include "cocos2d.h"
#include <map>
#include <string>
USING_NS_CC;
class EquipSprite :public Sprite
{
public:
	virtual bool init();
	//��������ķ��ʽӿڣ�ͨ������ʵ��������
	static EquipSprite* getInstance();
	CREATE_FUNC(EquipSprite);
private:
	//���캯��˽�У������Ͳ�����������������Ķ�����
	EquipSprite();
	//����һ����̬����Ҳ�������Ψһ�Ķ���
	static EquipSprite* instance;
	std::map<std::string,int> m_equipments;
};

#endif