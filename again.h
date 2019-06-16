/*
    文件名：    TowerPosEditorLayer.h
    描　述：    塔坐标编辑器，编辑层
    创建人：    笨木头_钟迪龙 (博客：http://www.benmutou.com)
*/
#ifndef _TowerPosEditorLayer_H_
#define _TowerPosEditorLayer_H_

#include "cocos2d.h"
#include "EnumPosType.h"
USING_NS_CC;

#define MAX_LEVEL = 5;

class PosBase;
class TowerPosEditorLayer : public Layer {
public:
    TowerPosEditorLayer();
    ~TowerPosEditorLayer();

    CREATE_FUNC(TowerPosEditorLayer);
    virtual bool init();

    /* 把所有坐标对象生成到plist配置文件 */
    void outputPosToPlistFile();

    /* 切换编辑模式 */
    void changeMode();

    /* 切换到下一关卡 */
    int nextLvl();

    /* 切换到上一关卡 */
    int preLvl();

    /* 获取怪物坐标列表 */
    Vector<PosBase*> getMonsterPosList();
private:
    Vector<PosBase*> m_towerPosList;   /* 存放所有塔的坐标对象 */

    int m_iCurLevel;                    /* 当前关卡 */

	/* 把指定坐标对象生成到plist配置文件 */
    void outputPosToPlistFile(Vector<PosBase*> posList, const char* sFilePath);

	/* 编辑塔坐标 */
	void editTowerPos(Point pos);

	/* 根据坐标找到已经存在的塔坐标对象 */
    PosBase* findExistTowerPos(Point pos);

    /* 给定坐标，生成塔坐标对象 */
    void createTowerPos(Point pos);

    /* 给定塔坐标对象，删除塔坐标对象 */
    void deleteTowerPos(PosBase* existPos);

    /* 删除所有的坐标对象 */
    void deleteAllPos();

    /* 读取配置文件 */
    void loadConfigFile();

    /* 当前模式 */
    EnumPosType m_enMode;


    /* 编辑怪物坐标 */
    void editMonsterPos(Point pos);

    /* 存放所有怪物的坐标对象 */
    Vector<PosBase*> m_monsterPosList;

    /* 根据坐标找到已经存在的怪物坐标对象 */
    PosBase* findExistMonsterPos(Point pos);

    /* 给定坐标，生成怪物坐标对象 */
    void createMonsterPos(Point pos);

    /* 给定怪物坐标对象，删除怪物坐标对象 */
    void deleteMonsterPos(PosBase* existPos);

};

#endif