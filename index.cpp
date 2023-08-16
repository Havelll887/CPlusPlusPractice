// 封装函数显示该界面，如 void showMenu()
// 在main函数中调用封装好的函数

#include <iostream>
using namespace std;
#include <string>







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
		case 1:break;
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
