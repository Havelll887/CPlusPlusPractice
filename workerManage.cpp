#include "workerManage.h"

WorkerMange::WorkerMange()
{
	//初始化人数
	this->m_EmpNum = 0;

	//初始化数组指针
	this->m_EmpArray = NULL;
};

void WorkerMange::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文档  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
};


void WorkerMange::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//增加职工
void WorkerMange::Add_Emp()
{
	cout << "请输入增加职工数量： " << endl;

	// 保存用户的输入数量
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//计算新空间大小，新的空间大小 = 原来记录人数 + 新增人数
		int newSize = this->m_EmpNum + addNum;
	}
	else 
	{
		cout << "输入有误" << endl;
	}

	system("pause");
	system("cls");
}

WorkerMange::~WorkerMange()
{

}


