#include "TowerPosEditorLayer.h"
#include "TowerPos.h"
#include "PosBase.h"
#include "PosLoadUtil.h"
#include "MonsterPos.h"

TowerPosEditorLayer::TowerPosEditorLayer() {
    m_iCurLevel = 1;
    m_enMode = enMonsterPos;
}

TowerPosEditorLayer::~TowerPosEditorLayer() {
}

bool TowerPosEditorLayer::init() {
    if (!Layer::init())
    {
        return false;
    }
    /* 监听触摸事件 */
    auto listener = EventListenerTouchOneByOne::create();
    listener->onTouchBegan = [](Touch* touch, Event* event){
        return true;
    };
    listener->onTouchEnded = [&](Touch* touch, Event* event){
        Point pos = Director::getInstance()->convertToGL(touch->getLocationInView());

        /* 判断当前编辑器的模式，进行不同的操作 */
        switch (m_enMode) {
        case enTowerPos:
            editTowerPos(pos);
            break;
        case enMonsterPos:
            editMonsterPos(pos);
            break;
        }
    };
    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);

    /* 读取配置文件 */
    loadConfigFile();
    return true;
}

void TowerPosEditorLayer::editTowerPos(Point pos) {
	/* 如果点击了已经存在的塔坐标对象，则删除该坐标对象，否则创建新坐标对象 */
    PosBase* existPos = findExistTowerPos(pos);

	if(existPos != NULL) {
		deleteTowerPos(existPos);
	}
	else {
		createTowerPos(pos);
	}
}

PosBase* TowerPosEditorLayer::findExistTowerPos(Point pos) {
    for (auto basePos : m_towerPosList){
        if (basePos->isClickMe(pos)) {
            return basePos;
        }
	}

	return NULL;
}

void TowerPosEditorLayer::createTowerPos( Point pos ) {
    TowerPos* tPos = TowerPos::create(pos, true);
    this->addChild(tPos, 10);
    m_towerPosList.pushBack(tPos);
}

void TowerPosEditorLayer::deleteTowerPos(PosBase* existPos) {
    this->removeChild(existPos);
    m_towerPosList.eraseObject(existPos);
}

void TowerPosEditorLayer::deleteAllPos() {
    this->removeAllChildrenWithCleanup(true);
    m_towerPosList.clear();
    m_monsterPosList.clear();
}

void TowerPosEditorLayer::outputPosToPlistFile() {
    /* 输出炮台坐标配置文件 */
    std::string sTowerPosPath = StringUtils::format("tollgate/towerPos_level_%d.plist", m_iCurLevel);
    outputPosToPlistFile(m_towerPosList, sTowerPosPath.c_str());

    /* 输出怪物坐标配置文件 */
    std::string sMonsterPosPath = StringUtils::format("tollgate/monsterPos_level_%d.plist", m_iCurLevel);
    outputPosToPlistFile(m_monsterPosList, sMonsterPosPath.c_str());
}

void TowerPosEditorLayer::outputPosToPlistFile(Vector<PosBase*> posList, const char* sFilePath) {
    ValueMap fileDataMap;

    /* 各个属性 */
    int index = 1;
    for (auto posBase : posList) {
        ValueMap data;
        data["x"] = posBase->getPos().x;
        data["y"] = posBase->getPos().y;

        fileDataMap[StringUtils::toString(index)] = Value(data);

        index++;
    }
    FileUtils::getInstance()->writeToFile(fileDataMap, sFilePath);
}

void TowerPosEditorLayer::loadConfigFile() {
    Size visibleSize = Director::getInstance()->getVisibleSize();

    /* 添加地图背景 */
    std::string sBG = StringUtils::format("tollgate/level_%d.jpg", m_iCurLevel);
    Sprite* map = Sprite::create(sBG.c_str());
    map->setPosition(Point(visibleSize.width / 2, visibleSize.height / 2));
    this->addChild(map, 1);

    /* 加载塔坐标对象 */
    std::string sTowerPosPath = StringUtils::format("tollgate/towerPos_level_%d.plist", m_iCurLevel);
    Vector<PosBase*> posList = PosLoadUtil::getInstance()->loadPosWithFile(sTowerPosPath.c_str(), enTowerPos, this, 10, true);
    m_towerPosList.pushBack(posList);

    /* 加载怪物坐标对象 */
    std::string sMonsterPosPath = StringUtils::format("tollgate/monsterPos_level_%d.plist", m_iCurLevel);
    posList = PosLoadUtil::getInstance()->loadPosWithFile(sMonsterPosPath.c_str(), enMonsterPos, this, 10, true);
    m_monsterPosList.pushBack(posList);
}

void TowerPosEditorLayer::editMonsterPos(Point pos) {
    /* 如果单击了已经存在的怪物坐标对象，则删除该坐标对象，否则创建新坐标对象 */
    PosBase* existPos = findExistMonsterPos(pos);
    if (existPos != NULL) {
        deleteMonsterPos(existPos);
    }
    else {
        createMonsterPos(pos);
    }
}

PosBase* TowerPosEditorLayer::findExistMonsterPos(Point pos) {
    for (auto basePos : m_monsterPosList){
        if (basePos->isClickMe(pos)) {
            return basePos;
        }
    }
    return NULL;
}

void TowerPosEditorLayer::createMonsterPos(Point pos) {
    MonsterPos* mPos = MonsterPos::create(pos, true);
    this->addChild(mPos, 10);
    m_monsterPosList.pushBack(mPos);
}

void TowerPosEditorLayer::deleteMonsterPos(PosBase* existPos) {
    this->removeChild(existPos);
    m_monsterPosList.eraseObject(existPos);
}

void TowerPosEditorLayer::changeMode(){
    if (m_enMode == enMonsterPos) {
        m_enMode = enTowerPos;
    }
    else {
        m_enMode = enMonsterPos;
    }
}

int TowerPosEditorLayer::nextLvl() {
    deleteAllPos();		/* 删除当前所有的坐标对象 */
    m_iCurLevel++;		/* 关卡计数加1 */
    loadConfigFile();	/* 重新读取配置文件 */

    return m_iCurLevel;
}

int TowerPosEditorLayer::preLvl() {
    deleteAllPos();		/* 删除当前所有的坐标对象 */
    m_iCurLevel--;		/* 关卡计数减1 */
    loadConfigFile();	/* 重新读取配置文件 */

    return m_iCurLevel;
}

Vector<PosBase*> TowerPosEditorLayer::getMonsterPosList() {
    return m_monsterPosList;
}