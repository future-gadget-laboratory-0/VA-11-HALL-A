/*
    文件名：    OtherLayer.h
    描　述：    另外一个层
    创建人：    笨木头_钟迪龙 (博客：http://www.benmutou.com)
*/
#ifndef _OtherLayer_H_
#define _OtherLayer_H_

#include "cocos2d.h"
USING_NS_CC;

class OtherLayer : public Layer {
public:
	CREATE_FUNC(OtherLayer);
	virtual bool init();

private:
	/* 接收test消息的回调函数 */
	void testMsg(Ref* pData);
};

#endif