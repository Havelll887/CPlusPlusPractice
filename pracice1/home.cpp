#include <iostream>
using namespace std;
#include "workerManage.h"
#include "worker.h"
#include "normal.h"
#include "manager.h"
#include "boss.h"



int main()
{
	// ʵ���������߶���
	WorkerMange wm;

	int choice = 0; // �����洢�û���ѡ��

	while (true)
	{
		// ����չʾ�˵��ĳ�Ա����
		wm.Show_Menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;  // �����û���ѡ��

		switch (choice)
		{
		case 0: //�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1: //���ְ��
			wm.Add_Emp();
			break;
		case 2: //��ʾְ��
			break;
		case 3: //ɾ��ְ��
			break;
		case 4: //�޸�ְ��
			break;
		case 5: //����ְ��
			break;
		case 6: //����ְ��
			break;
		case 7: //����ļ�
			break;
		default:
			system("cls"); // ����
			break;
		}
	}


	system("pause");
	return 0;
}