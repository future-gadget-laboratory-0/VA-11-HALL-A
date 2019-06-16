#include "OtherLayer.h"

bool OtherLayer::init() {
    if (!Layer::init())
    {
        return false;
    }

// 	/* ������Ϣ����Ϊtest����Ϣ������������ */
// 	NotificationCenter::getInstance()->addObserver(
// 		this,
// 		callfuncO_selector(OtherLayer::testMsg), 
// 		"test", 
// 		NULL);

    /* ������Ϣ����Ϊtest����Ϣ���������� */
    NotificationCenter::getInstance()->addObserver(
        this,
        callfuncO_selector(OtherLayer::testMsg),
        "test",
        (Ref*)"OtherLayer's data");

	return true;
}

void OtherLayer::testMsg( Ref* pData ) {
    //log("testMsg in OtherLayer");
    log("testMsg in OtherLayer: %s", pData);
}

