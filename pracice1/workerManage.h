#pragma once  // ��ֹͷ�ļ��ظ�����
#include <iostream> // �������������ͷ�ļ�
using namespace std; // ʹ�ñ�׼�������ռ�
#include "worker.h"
#include <fstream>
#define  FILENAME "empFile.txt"

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

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//����ְ��
	void Add_Emp();

	// ��������
	~WorkerMange();

	//�����ļ�
	void save();
};
