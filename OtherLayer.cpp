#include "OtherLayer.h"

bool OtherLayer::init() {
    if (!Layer::init())
    {
        return false;
    }

// 	/* 订阅消息类型为test的消息，不传递数据 */
// 	NotificationCenter::getInstance()->addObserver(
// 		this,
// 		callfuncO_selector(OtherLayer::testMsg), 
// 		"test", 
// 		NULL);

    /* 订阅消息类型为test的消息，传递数据 */
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

