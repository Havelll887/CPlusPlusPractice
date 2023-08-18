// 封装函数显示该界面，如 void showMenu()
// 在main函数中调用封装好的函数

#include <iostream>
using namespace std;
#include <string>
#define MAX 1000 // 定义宏常量后面不能加分号

// 联系人结构体
struct Person
{
	string m_Name;  // 姓名
	int m_Sex;// 性别
	int m_Age;// 年龄
	string m_Phone;// 电话
	string m_Addr;// 住址
};


// 通讯录结构体
struct Addressbooks
{
	// 通讯录中保存的联系人数组
	struct Person personArray[MAX];

	// 通讯录中当前记录联系人个数
	int m_Size;
};

// 1. 添加联系人
void addPerson(Addressbooks* abs) {
	if (abs->m_Size == MAX) {
		cout << "通讯录已满" << endl;
		return;
	}
	else {
		// 添加具体联系人
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;

		//性别
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入";
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;


		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;
		system("pause");  // 按任意键继续
		system("cls");   // 清屏操作
	}

}

// 2. 显示联系人



// 菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;

}

int main()
{
	// 创建通讯录结构体变量
	Addressbooks abs;
	// 初始化通讯录中当前人员的个数
	abs.m_Size = 0;

	// 创建用户选择输入的变量
	int select = 0;

	
	while (true)
	{
		// 菜单调用
		showMenu();
		cin >> select;

		switch (select)
		{
			// 1 添加联系人
		case 1:  addPerson(&abs); break; // 利用地址传递，可以修饰实参
			// 2 显示联系人
		case 2:break;
			// 3 删除联系人
		case 3:break;
			// 4 查找联系人
		case 4:break;
			// 5 修改联系人
		case 5:break;
			// 6 清空联系人
		case 6:break;
			// 退出通讯录
		case 0:
			cout << "欢迎下次使用" << endl;
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
