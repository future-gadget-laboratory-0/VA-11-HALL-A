/*
    �ļ�����    JsonDataUtil.h
    �衡����	Json����
    �����ˣ�    ��ľͷ_�ӵ��� (���ͣ�http://www.benmutou.com)
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

    /* ����ֶε�Json */
    void addValue(const char* key, int value);
    void addValue(const char* key, const char* value);

    /* ��ȡJson��ʽ���ַ��� */
    std::string getsJsonStr();

    Json::Value getRoot();
private:
    Json::Value root;
};

#endif