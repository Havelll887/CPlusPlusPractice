#pragma once  // ��ֹͷ�ļ��ظ�����
#include <iostream> // �������������ͷ�ļ�
using namespace std; // ʹ�ñ�׼�������ռ�
#include "worker.h"

class WorkerMange
{
public:

	// ���캯��
	WorkerMange();

	// չʾ�˵�
	void Show_Menu();

	// �˳�ϵͳ
	void ExitSystem();

	//��¼�ļ��е���������
	int m_EmpNum;

	//Ա�������ָ��
	Worker ** m_EmpArray;

	//����ְ��
	void Add_Emp();

	// ��������
	~WorkerMange();
};
