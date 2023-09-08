#pragma once  // 防止头文件重复包含
#include <iostream> // 包含输入输出流头文件
using namespace std; // 使用标准的命名空间
#include "worker.h"
#include <fstream>
#define  FILENAME "empFile.txt"

class WorkerMange
{
public:

	// 构造函数
	WorkerMange();

	// 展示菜单
	void Show_Menu();

	// 退出系统
	void ExitSystem();

	//记录文件中的人数个数
	int m_EmpNum;

	//员工数组的指针
	Worker ** m_EmpArray;

	//标志文件是否为空
	bool m_FileIsEmpty;

	//增加职工
	void Add_Emp();

	// 析构函数
	~WorkerMange();

	//保存文件
	void save();
};
