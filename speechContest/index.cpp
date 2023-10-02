#include <iostream>
using namespace std;
#include "speechManager.h"
#include <string>

int main()
{
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
			break;
			// 查看往届比赛记录
		case 2:
			break;
			// 清空比赛记录
		case 3:
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

