#include"up.h"
//类函数实现.cpp
person::person()
{
	name = "xiaoding";
	id_number = "19980118";
	age = 23;
}
person::person(string name1, string id_number1, int age1)//析构函数用来给类对象进行值的初始化
{
	name = name1;
	id_number = id_number1;
	age = age1;

}

person::~person()
{
	cout << "析构函数进行中" << endl;
}

void person::show()
{
	cout << endl;
	cout << "姓名：" << name << endl;
	cout << "身份证号：" << id_number << endl;
	cout << "年龄:" << age << endl;
}

//类实现文件
int main()
{
	person per1;
	per1.show();
	person per2("dadingding", "1111223", 12);
	per2.show();

	return 0;
}
