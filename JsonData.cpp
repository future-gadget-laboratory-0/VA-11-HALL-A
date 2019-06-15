#include "JsonData.h"
#include "json/writer.h"
#include "json/reader.h"

JsonData::JsonData()
{
}

JsonData::~JsonData()
{
}

JsonData* JsonData::create( const char* data )
{
	JsonData* layer = new JsonData();

	if(layer && layer->init(data)) {
		layer->autorelease();
	}
	else {
		CC_SAFE_DELETE(layer);
	}

	return layer;
}

bool JsonData::init( const char* data )
{
    Json::Reader reader;

    if (!reader.parse(data, root, false))
    {
        return false;
    }

	return true;
}

const char* JsonData::getCStrData( const char* key )
{
    if (isHasKey(key) == false)
    {
        return "";
    }
    return root[key].asCString();
}


int JsonData::getIntData( const char* key )
{
    if(isHasKey(key) == false)
    {
        return 0;
    }
    return root[key].asInt();
}

bool JsonData::getBoolData( const char* key )
{
    if(isHasKey(key) == false)
    {
        return false;
    }
    return root[key].asBool();
}

float JsonData::getDoubleData( const char* key )
{
    if(isHasKey(key) == false)
    {
        return 0;
    }
    return root[key].asDouble();
}

bool JsonData::isHasKey( const char* key )
{
    if (root.isMember(key))
    {
        return true;
    }

    return false;
}

Json::Value JsonData::getRoot()
{
    return root;
}

std::string JsonData::getsJsonStr()
{
    Json::FastWriter writer;
    std::string json_file = writer.write(root);

    return json_file;
}

void JsonData::addValue(const char* key, int value)
{
    root[key] = value;
}

void JsonData::addValue(const char* key, const char* value)
{
    root[key] = value;
}
