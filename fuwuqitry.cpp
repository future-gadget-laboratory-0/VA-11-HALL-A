#include "TowerPosEditorScene.h"
#include "TowerPos.h"
#include "TowerPosEditorLayer.h"
#include "TowerPosEditorOperateLayer.h"

TowerPosEditorScene::TowerPosEditorScene() {

}

TowerPosEditorScene::~TowerPosEditorScene() {

}

Scene* TowerPosEditorScene::createScene() {
    auto scene = Scene::create();

    auto editorLayer = TowerPosEditorLayer::create();
    scene->addChild(editorLayer, 1);

    auto operLayer = TowerPosEditorOperateLayer::create(editorLayer);
    scene->addChild(operLayer, 2);
    return scene;
}

bool TowerPosEditorScene::init() {
    if (!Layer::init())
    {
        return false;
    }
    return true;
}