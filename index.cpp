// ��װ������ʾ�ý��棬�� void showMenu()
// ��main�����е��÷�װ�õĺ���

#include <iostream>
using namespace std;
#include <string>







// �˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;

}

int main()
{
	// �����û�ѡ������ı���
	int select = 0;

	
	while (true)
	{
		// �˵�����
		showMenu();
		cin >> select;

		switch (select)
		{
			// 1 �����ϵ��
		case 1:break;
			// 2 ��ʾ��ϵ��
		case 2:break;
			// 3 ɾ����ϵ��
		case 3:break;
			// 4 ������ϵ��
		case 4:break;
			// 5 �޸���ϵ��
		case 5:break;
			// 6 �����ϵ��
		case 6:break;
			// �˳�ͨѶ¼
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}


	system("pause");
	return 0;
}
