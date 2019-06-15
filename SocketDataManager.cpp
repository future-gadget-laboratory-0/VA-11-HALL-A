#include "SocketDataManager.h"
#include "JsonData.h"

SocketDataManager* SocketDataManager::m_SocketDataManager = NULL;

SocketDataManager::SocketDataManager()
{
}

SocketDataManager::~SocketDataManager()
{
}

SocketDataManager* SocketDataManager::getInstance()
{
    if (m_SocketDataManager == NULL)
    {
        m_SocketDataManager = SocketDataManager::create();
        m_SocketDataManager->retain();
    }

    return m_SocketDataManager;
}

bool SocketDataManager::init()
{
    /* 调用update函数 */
    Director::getInstance()->getScheduler()->schedule(
        schedule_selector(SocketDataManager::update),
        this, 0.108f, false);
    return true;
}

void SocketDataManager::update(float dt)
{
    m_mutex.lock();

    for (auto value : m_msgList)
    {
        /* 派发消息 */
        JsonData* jsonData = JsonData::create(value.asString().c_str());

        NotificationCenter::getInstance()->postNotification(StringUtils::toString(jsonData->getIntData("cmd")), jsonData);
    }

    m_msgList.clear();

    m_mutex.unlock();
}

void SocketDataManager::pushMsg(const char* msg)
{
    m_mutex.lock();

    m_msgList.push_back(Value(msg));

    m_mutex.unlock();
}
