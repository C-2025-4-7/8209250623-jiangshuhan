#include <iostream>             //将类声明头文件包含进来
#include "student.h"
using namespace std;
int main()
{
	Student stud;                //定义对象
	Student stud1;
	stud1.set_value(7, "tcg", 'm');

	cout << "\nStudent stud1 的信息：" << endl;
	stud1.display();

	return 0;
}