// 普通员工文件
#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "worker.h"

class Normal :public Worker
{
public:

	//构造函数
	Normal(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取职工岗位名称
	virtual string getDeptName();
};
