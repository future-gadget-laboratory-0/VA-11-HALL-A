/*
    �ļ�����    TowerPosEditorLayer.h
    �衡����    ������༭�����༭��
    �����ˣ�    ��ľͷ_�ӵ��� (���ͣ�http://www.benmutou.com)
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

    /* ����������������ɵ�plist�����ļ� */
    void outputPosToPlistFile();

    /* �л��༭ģʽ */
    void changeMode();

    /* �л�����һ�ؿ� */
    int nextLvl();

    /* �л�����һ�ؿ� */
    int preLvl();

    /* ��ȡ���������б� */
    Vector<PosBase*> getMonsterPosList();
private:
    Vector<PosBase*> m_towerPosList;   /* ������������������ */

    int m_iCurLevel;                    /* ��ǰ�ؿ� */

	/* ��ָ������������ɵ�plist�����ļ� */
    void outputPosToPlistFile(Vector<PosBase*> posList, const char* sFilePath);

	/* �༭������ */
	void editTowerPos(Point pos);

	/* ���������ҵ��Ѿ����ڵ���������� */
    PosBase* findExistTowerPos(Point pos);

    /* �������꣬������������� */
    void createTowerPos(Point pos);

    /* �������������ɾ����������� */
    void deleteTowerPos(PosBase* existPos);

    /* ɾ�����е�������� */
    void deleteAllPos();

    /* ��ȡ�����ļ� */
    void loadConfigFile();

    /* ��ǰģʽ */
    EnumPosType m_enMode;


    /* �༭�������� */
    void editMonsterPos(Point pos);

    /* ������й����������� */
    Vector<PosBase*> m_monsterPosList;

    /* ���������ҵ��Ѿ����ڵĹ���������� */
    PosBase* findExistMonsterPos(Point pos);

    /* �������꣬���ɹ���������� */
    void createMonsterPos(Point pos);

    /* ���������������ɾ������������� */
    void deleteMonsterPos(PosBase* existPos);

};

#endif