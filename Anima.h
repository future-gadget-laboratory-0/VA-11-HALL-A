#ifndef _ANIMA_H_
#define _ANIMA_H_
#include "cocos2d.h"
USING_NS_CC;

class Anima
{
public:
	static Animation* createWithSingleFrameName(const char* name, float delay, int iLoops);
	static Animation* createWithFrameNameAndNum(const char* name, int iNum, float delay, int iLoops);
};
#endif
