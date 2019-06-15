#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    if (!Layer::init())
    {
        return false;
    }
    
    connectServer();
    return true;
}

void HelloWorld::connectServer(){
    ODSocket cSocket;

    cSocket.Init();
    cSocket.Create(AF_INET, SOCK_STREAM, 0);

    const char* ip = "115.28.47.161";
    int port = 7777;
    bool result = cSocket.Connect(ip, port);

    int retryTimes = 0;
    while (result == false && retryTimes < 7) {
        log("retry connecting...");

        result = cSocket.Connect(ip, port);
        retryTimes++;

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
        Sleep(500);
#else
        usleep(500);
#endif

    }
    if (result) {
        log("connect to server suc!");
    }
    else {
        log("can not connect to server");
    }
}