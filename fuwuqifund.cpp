#include "TowerPosEditorOperateLayer.h"
#include "TowerPosEditorLayer.h"
#include "PosBase.h"

TowerPosEditorOperateLayer::TowerPosEditorOperateLayer() {
}

TowerPosEditorOperateLayer::~TowerPosEditorOperateLayer() {
}

TowerPosEditorOperateLayer* TowerPosEditorOperateLayer::create( TowerPosEditorLayer* layer ) {
    TowerPosEditorOperateLayer* oprLayer = new TowerPosEditorOperateLayer();

    if(oprLayer && oprLayer->init(layer)) {
        oprLayer->autorelease();
    }
    else {
        CC_SAFE_DELETE(oprLayer);
    }

    return oprLayer;
}

bool TowerPosEditorOperateLayer::init(TowerPosEditorLayer* layer) {
    if (!Layer::init()) {
        return false;
    }

    this->m_editorLayer = layer;

    /* 加载UI */
    auto UI = cocostudio::GUIReader::getInstance()->widgetFromJsonFile("EditorOperate/EditorOperate_1.ExportJson");
    this->addChild(UI);

    /* 少了这句代码就不好玩了 */
    UI->setTouchEnabled(false);

    /* 获取控件对象 */
    auto outputBtn = (Button*)Helper::seekWidgetByName(UI, "outputBtn");
    auto changeModeBtn = (Button*)Helper::seekWidgetByName(UI, "changeModeBtn");
    auto nextLevelBtn = (Button*)Helper::seekWidgetByName(UI, "nextLevelBtn");
    auto preLevelBtn = (Button*)Helper::seekWidgetByName(UI, "preLevelBtn");

    /* 添加点击监听 */
    outputBtn->addTouchEventListener(this, toucheventselector(TowerPosEditorOperateLayer::outputBtnOnClick));
    changeModeBtn->addTouchEventListener(this, toucheventselector(TowerPosEditorOperateLayer::changeModeBtnOnClick));
    nextLevelBtn->addTouchEventListener(this, toucheventselector(TowerPosEditorOperateLayer::nextLevelBtnOnClick));
    preLevelBtn->addTouchEventListener(this, toucheventselector(TowerPosEditorOperateLayer::preLevelBtnOnClick));
    return true;
}

void TowerPosEditorOperateLayer::outputBtnOnClick(Ref*, TouchEventType type){
    if (type == TouchEventType::TOUCH_EVENT_ENDED) {
        m_editorLayer->outputPosToPlistFile();
    }
}

void TowerPosEditorOperateLayer::changeModeBtnOnClick(Ref*, TouchEventType type){
    if (type == TouchEventType::TOUCH_EVENT_ENDED) {
        m_editorLayer->changeMode();
    }
}

void TowerPosEditorOperateLayer::nextLevelBtnOnClick(Ref*, TouchEventType type){
    if (type == TouchEventType::TOUCH_EVENT_ENDED) {
        m_editorLayer->nextLvl();
    }
}

void TowerPosEditorOperateLayer::preLevelBtnOnClick(Ref*, TouchEventType type){
    if (type == TouchEventType::TOUCH_EVENT_ENDED) {
        m_editorLayer->preLvl();
    }
}

void TowerPosEditorOperateLayer::draw(Renderer *renderer, const kmMat4 &transform, bool transformUpdated){
    _customCommand.init(_globalZOrder);
    _customCommand.func = CC_CALLBACK_0(TowerPosEditorOperateLayer::onDraw, this, transform, transformUpdated);
    renderer->addCommand(&_customCommand);
}

void TowerPosEditorOperateLayer::onDraw(const kmMat4 &transform, bool transformUpdated){
    kmGLPushMatrix();
    kmGLLoadMatrix(&transform);

    Vector<PosBase*> m_monsterPosList = m_editorLayer->getMonsterPosList();
    PosBase* prePos = NULL;
    for (auto posBase : m_monsterPosList) {
        if (prePos != NULL) {
            DrawPrimitives::drawLine(prePos->getPos(), posBase->getPos());
        }
        prePos = posBase;
    }

    kmGLPopMatrix();// 结束绘制
}
