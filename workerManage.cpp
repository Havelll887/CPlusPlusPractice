#include "workerManage.h"

WorkerMange::WorkerMange()
{
	//��ʼ������
	this->m_EmpNum = 0;

	//��ʼ������ָ��
	this->m_EmpArray = NULL;
};

void WorkerMange::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
};


void WorkerMange::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//����ְ��
void WorkerMange::Add_Emp()
{
	cout << "����������ְ�������� " << endl;

	// �����û�����������
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//�����¿ռ��С���µĿռ��С = ԭ����¼���� + ��������
		int newSize = this->m_EmpNum + addNum;
	}
	else 
	{
		cout << "��������" << endl;
	}

	system("pause");
	system("cls");
}

WorkerMange::~WorkerMange()
{

}


