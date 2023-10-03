#include <iostream>
using namespace std;
#include "speechManager.h"
#include <string>
#include <ctime>

int main()
{
	// ���������
	srand((unsigned int)time(NULL));
	// �������������
	SpeechManager sm;

	// ����12
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it!=sm.m_Speaker.end();it++ )
	//{
	//	cout << "bian: " << it->first << " name "  << it->second.m_Name << " code " << it->second.m_Score[0] << endl;
	//}

	int choice = 0; // ���ڴ洢�û�������

	while (true)
	{
		sm.show_Menu();

		cin >> choice;

		switch (choice)
		{
		// ��ʼ����
		case 1:
			sm.startSpeech();
			break;
		// �鿴���������¼
		case 2:
			sm.showRecord();
			break;
		// ��ձ�����¼
		case 3:
			sm.clearRecord();
			break;
		// �˳�ϵͳ
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

