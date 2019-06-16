/*
    �ļ�����    PosLoadUtil.h
    �衡����    ���������ع���
    �����ˣ�    ��ľͷ_�ӵ��� (���ͣ�http://www.benmutou.com)

    �������ڣ�   2013.03.23
*/
#ifndef _PosLoadUtil_H_
#define _PosLoadUtil_H_

#include "cocos2d.h"
#include "EnumPosType.h"
USING_NS_CC;

class PosBase;
class PosLoadUtil : public Node {
public:
	static PosLoadUtil* getInstance();
	virtual bool init();

	/* 
		�����������ʹ�plist�����ļ��ж�ȡ������� 
		sFilePath�������ļ�·��
		enPosType�������������
		container�����������������
		iLevel���������container���ò�����ʾ��������������еĲ��
		isDebug���Ƿ�������ģʽ
	*/
	Vector<PosBase*> loadPosWithFile(
		const char* sFilePath, 
        EnumPosType enPosType,
		Node* container, 
		int iLevel, 
		bool isDebug);
private:
	static PosLoadUtil* m_posLoadUtil;
};

#endif