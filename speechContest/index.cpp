#include <iostream>
using namespace std;
#include "speechManager.h"
#include <string>
#include <ctime>

int main()
{
	// 随机数种子
	srand((unsigned int)time(NULL));
	// 创建管理类对象
	SpeechManager sm;

	// 测试12
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it!=sm.m_Speaker.end();it++ )
	//{
	//	cout << "bian: " << it->first << " name "  << it->second.m_Name << " code " << it->second.m_Score[0] << endl;
	//}

	int choice = 0; // 用于存储用户的输入

	while (true)
	{
		sm.show_Menu();

		cin >> choice;

		switch (choice)
		{
		// 开始比赛
		case 1:
			sm.startSpeech();
			break;
		// 查看往届比赛记录
		case 2:
			sm.showRecord();
			break;
		// 清空比赛记录
		case 3:
			sm.clearRecord();
			break;
		// 退出系统
		case 0:
			sm.exitSystem();
			break;
		default:
			system("cls");
			break;
		}

	}
	

	system("pause");
	return 0;
}

