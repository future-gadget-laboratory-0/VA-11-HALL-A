/*
    �ļ�����    MonsterPos.h
    �衡����    �����������
    �����ˣ�    ��ľͷ_�ӵ��� (���ͣ�http://www.benmutou.com)

    �������ڣ�   2013.03.22
*/
#ifndef _MonsterPos_H_
#define _MonsterPos_H_

#include "PosBase.h"

#define MONSTER_RADIUS 10

class Monster;
class MonsterPos : public PosBase {
public:
    MonsterPos();
    ~MonsterPos();

    static MonsterPos* create(Point pos);
    static MonsterPos* create(Point pos, bool isDebug);
    bool init(Point pos);
    bool init(Point pos, bool isDebug);

    /* �ж������Ƿ���뷶Χ */
    virtual bool isClickMe(Point pos) override;

    void draw(Renderer *renderer, const kmMat4 &transform, bool transformUpdated);
private:
    void onDraw(const kmMat4 &transform, bool transformUpdated);
    CustomCommand _customCommand;

    Monster* m_monster;
};

#endif