/*
    文件名：    MonsterPos.h
    描　述：    怪物坐标对象
    创建人：    笨木头_钟迪龙 (博客：http://www.benmutou.com)

    创建日期：   2013.03.22
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

    /* 判断坐标是否进入范围 */
    virtual bool isClickMe(Point pos) override;

    void draw(Renderer *renderer, const kmMat4 &transform, bool transformUpdated);
private:
    void onDraw(const kmMat4 &transform, bool transformUpdated);
    CustomCommand _customCommand;

    Monster* m_monster;
};

#endif