/*
    �ļ�����    TowerPosEditorScene.h
    �衡����    ��������༭��
    �����ˣ�    ��ľͷ_�ӵ��� (���ͣ�http://www.benmutou.com)
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