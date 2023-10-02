#include "speechManager.h"

SpeechManager::SpeechManager()
{
	// 初始化容器和属性
	this->initSpeech();

	// 创建12名选手
	this->createSpeaker();

}

// 菜单功能
void SpeechManager::show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*************  欢迎参加演讲比赛 ************" << endl;
	cout << "*************  1.开始演讲比赛  *************" << endl;
	cout << "*************  2.查看往届记录  *************" << endl;
	cout << "*************  3.清空比赛记录  *************" << endl;
	cout << "*************  0.退出比赛程序  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

// 退出系统
void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::initSpeech()
{
	// 容器都置空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	// 初始化比赛轮数
	this->m_Index = 1;

}

// 创建12名选手
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];

		// 创建具体选手
		Speaker sp;
		sp.m_Name = name;

		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}

		// 创建选手编号 并且放入到v1容器中
		this->v1.push_back(i + 10001);

		// 选手编号以及对应选手 放入到map容器中
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

void SpeechManager::startSpeech()
{
	// 第一轮开始比赛
	// 1.抽签

	// 2.比赛

	// 3. 显示晋级结果

	// 第二轮比赛开始
	// 1.抽签

	// 2.比赛

	// 3. 显示最终结果

	// 4. 保存比赛结果
}

// 抽签
void SpeechManager::speechDraw()
{
	cout << "第<< " << this->m_Index << ">> 轮比赛选手正在抽签" << endl;
	cout << "-------------------------------" << endl;
	cout << "抽签后演讲顺序如下：" << endl;
}

SpeechManager::~SpeechManager()
{

}
