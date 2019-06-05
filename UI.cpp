#include "UI.h"
#include "SimpleAudioEngine.h"
#include "controller.h"
#include "map.h"

USING_NS_CC;

// ���캯�������ж����Ա����Ҫ�ڴ˳�ʼ��
UI::UI()
{}
// ����
UI::~UI()
{}

//�麯������ʼ������ִ�б����create()����ʱ�ᱻ�Զ�����
static void problemLoading(const char* filename)
{
	printf("Error while loading: %s\n", filename);
	printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}
bool UI::init()
{
	bool bl = Layer::init();
	auto Map =(map*) map::createScene();
	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	auto bar = Sprite::create("bar.png");
	//bar->setPosition(Point(getContentSize().width / 2, getContentSize().height - 100));
	bar->setPosition(Point(500,950));
	addChild(bar);
	auto blood = Sprite::create("blood.png");
	ProgressTimer * progress = ProgressTimer::create(blood);
	progress->setType(ProgressTimer::Type::BAR);
	progress->setPosition(Point(500, 950));
	progress->setMidpoint(Point(0, 0.5)); 
	progress->setBarChangeRate(Point(1, 0));
	progress->setTag(10525);
	this->addChild(progress);
	this->schedule(schedule_selector(UI::scheduleBlood), 0.1f);
	//blood->setPosition(300, 950);
	int health = Map->/*_tileMap->*/m_control->Catherine->get().HP;
	//addChild(blood, 2);
	auto herobox = Sprite::create("herobox.png");
	herobox->setPosition(100, 960);
	addChild(herobox, 3);
	auto head = Sprite::create("head.png");
	head->setScale(0.75);
	head->setPosition(100, 960);
	addChild(head, 2);
	auto skill1 = Sprite::create("skill1.png");
	skill1->setPosition(900, 100);
	addChild(skill1, 3);
	auto skill2 = Sprite::create("skill2.png");
	skill2->setPosition(1050, 100);
	addChild(skill2, 3);
	auto skill3 = Sprite::create("skill3.png");
	skill3->setPosition(1200, 100);
	addChild(skill3, 3);
	auto skill4 = Sprite::create("skill4.png");
	skill4->setPosition(1350, 100);
	addChild(skill4, 3);
	// ��������
	return bl;
}

// Scene����ڣ�ͨ���ú�������Layer
Scene* UI::createScene()
{
	auto scene = Scene::create();
	auto layer = UI::create();
	scene->addChild(layer,2);
	return scene;
}
void UI::scheduleBlood(float dt) 
{
	auto progress = (ProgressTimer *)this->getChildByTag(10525);
	progress->setPercentage((((float)health)/800) * 100); 
	if (progress->getPercentage() < 0) {
		this->unschedule(schedule_selector(UI::scheduleBlood));
	}
}
