// ��װ������ʾ�ý��棬�� void showMenu()
// ��main�����е��÷�װ�õĺ���

#include <iostream>
using namespace std;
#include <string>
#define MAX 1000 // ����곣�����治�ܼӷֺ�

// ��ϵ�˽ṹ��
struct Person
{
	string m_Name;  // ����
	int m_Sex;// �Ա�
	int m_Age;// ����
	string m_Phone;// �绰
	string m_Addr;// סַ
};


// ͨѶ¼�ṹ��
struct Addressbooks
{
	// ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];

	// ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

// 1. �����ϵ��
void addPerson(Addressbooks* abs) {
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼����" << endl;
		return;
	}
	else {
		// ��Ӿ�����ϵ��
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;

		//�Ա�
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������";
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;


		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");  // �����������
		system("cls");   // ��������
	}

}

// 2. ��ʾ��ϵ��



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
	// ����ͨѶ¼�ṹ�����
	Addressbooks abs;
	// ��ʼ��ͨѶ¼�е�ǰ��Ա�ĸ���
	abs.m_Size = 0;

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
		case 1:  addPerson(&abs); break; // ���õ�ַ���ݣ���������ʵ��
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
