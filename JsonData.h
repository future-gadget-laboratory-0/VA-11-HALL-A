/*
    文件名：    JsonDataUtil.h
    描　述：	Json数据
    创建人：    笨木头_钟迪龙 (博客：http://www.benmutou.com)
*/
#ifndef JsonDataUtil_H
#define JsonDataUtil_H

#include "cocos2d.h"
#include "json\value.h"
USING_NS_CC;

class JsonData : public Ref
{
public:
    JsonData();
    ~JsonData();

    static JsonData* create(const char* data);
    bool init(const char* data);

    const char* getCStrData(const char* key);
    int getIntData(const char* key);
    float getDoubleData(const char* key);
    bool getBoolData(const char* key);
    bool isHasKey(const char* key);

    /* 添加字段到Json */
    void addValue(const char* key, int value);
    void addValue(const char* key, const char* value);

    /* 获取Json格式的字符串 */
    std::string getsJsonStr();

    Json::Value getRoot();
private:
    Json::Value root;
};

#endif