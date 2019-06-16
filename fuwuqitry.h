/*
    文件名：    TowerPosEditorScene.h
    描　述：    炮塔坐标编辑器
    创建人：    笨木头_钟迪龙 (博客：http://www.benmutou.com)
*/
#ifndef _TowerPosEditorScene_H_
#define _TowerPosEditorScene_H_

#include "cocos2d.h"
USING_NS_CC;

class TowerPosEditorScene : public Layer {
public:
    TowerPosEditorScene();
    ~TowerPosEditorScene();

    static Scene* createScene();
    virtual bool init();

    CREATE_FUNC(TowerPosEditorScene);


private:
    
};


#endif