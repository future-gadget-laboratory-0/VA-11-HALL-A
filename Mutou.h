/*
    �ļ�����    Mutou.h
    �衡����
    �����ˣ�    ��ľͷ_�ӵ��� (���ͣ�http://www.benmutou.com)
*/
#ifndef Mutou_H
#define Mutou_H

#include "cocos2d.h"
USING_NS_CC;

enum EnumState{
    enStateWriteCode,		/* ״̬:д���� */
    enStateWriteArticle,	/* ״̬:д�̳� */
    enStateRest,			/* ״̬:��Ϣ */
};

class Mutou : public Node
{
public:
    CREATE_FUNC(Mutou);
    virtual bool init();

    EnumState enCurState;	        /* ��ǰ״̬ */

    bool isTire();			        /* �ж��Ƿ�д����д���� */
    bool isWantToWriteArticle();    /* �Ƿ���д�̳� */

    void writeCode();		/* д���� */
    void writeArticle();	/* д�̳� */
    void rest();			/* ��Ϣ */

    void changeState(EnumState enState);/* �л�״̬ */

    virtual void update(float dt);
};

#endif