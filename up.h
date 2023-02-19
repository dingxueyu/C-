//类定义头文件
#include<iostream>
#include<string>
using namespace std;
class person {
public:
	person();
	person(string name1, string id_number1, int age1);
		~person();
	
	void show();
private:
	string name;
	string id_number;
	int age;
};


