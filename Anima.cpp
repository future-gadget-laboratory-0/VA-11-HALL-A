#include "Anima.h"

Animation* Anima::createWithSingleFrameName(const char* name, float delay, int iLoops)
{
	SpriteFrameCache* cache = SpriteFrameCache::getInstance();
	Vector<SpriteFrame*> frameVec;
	SpriteFrame* frame = NULL;
	int index = 0;
	do 
	{
		frame = cache->getSpriteFrameByName(StringUtils::format("%s%d.png", name, index++));
		if (frame==NULL)
		{
			break;
		}

		frameVec.pushBack(frame);
	} while (true);

	Animation* animation = Animation::createWithSpriteFrames(frameVec);
	animation->setDelayPerUnit(delay);
	animation->setRestoreOriginalFrame(true);
	animation->setLoops(iLoops);

	return animation;
}

Animation* Anima::createWithFrameNameAndNum(const char* name, int iNum, float delay, int iLoops)
{
	SpriteFrameCache* cache = SpriteFrameCache::getInstance();
	SpriteFrame* frame = NULL;
	Vector<SpriteFrame*> frameVec;
	int index = 0;
	for (index; index < iNum;index++)
	{
		frame = cache->getSpriteFrameByName(StringUtils::format("%s%d.png", name, index));
		if (frame==NULL)
		{
			break;
		}
		frameVec.pushBack(frame);
	}
	Animation* animation = Animation::createWithSpriteFrames(frameVec);
	animation->setDelayPerUnit(delay);
	animation->setRestoreOriginalFrame(true);
	animation->setLoops(iLoops);

	return animation;
}