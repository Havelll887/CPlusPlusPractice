// ��ͨԱ���ļ�
#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "worker.h"

class Normal :public Worker
{
public:

	//���캯��
	Normal(int id, string name, int dId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡְ����λ����
	virtual string getDeptName();
};
