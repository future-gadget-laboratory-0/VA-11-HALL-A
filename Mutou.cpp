#include "Mutou.h"
bool Mutou::init()
{
    this->scheduleUpdate();
    return true;
}

void Mutou::changeState(EnumState enState) 
{
    this->enCurState = enState;
}

bool Mutou::isTire() 
{
    /* ÿ����ľͷ�۲��ۣ�������˵����*/
    return true;
}

bool Mutou::isWantToWriteArticle() 
{
    /* ��10%�ĸ�����д�̳̣�������*/
    float ran = CCRANDOM_0_1();
    if (ran < 0.1f) {
        return true;
    }
    return false;
}

void Mutou::writeCode() 
{
    log("mutou is wirting Code.");
}

void Mutou::writeArticle() 
{
    log("mutou is writing article.");
}

void Mutou::rest() 
{
    log("mutou is resting.");
}

void Mutou::update(float dt) 
{
    /* �ж���ÿһ��״̬��Ӧ����ʲô���� */
    switch (enCurState) {
    case enStateWriteCode:
        /* ������˾���Ϣ�������л�����Ϣ״̬ */
        if (isTire()) {
            rest();
            changeState(enStateRest);
        }
        break;
    case enStateWriteArticle:
        /* ������˾���Ϣ�������л�����Ϣ״̬ */
        if (isTire()) {
            rest();
            changeState(enStateRest);
        }
        break;
    case enStateRest:
        /* һ���ĸ���д���룬һ���ĸ���д�̳̣������л�����Ӧ��״̬ */
        if (isWantToWriteArticle()) {
            writeArticle();
            changeState(enStateWriteArticle);
        }
        else {
            writeCode();
            changeState(enStateWriteCode);
        }
        break;
    }
}