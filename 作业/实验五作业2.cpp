#include<iostream>
#include "student.h"//自己设定的头文件调用要加双引号
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num:"<< num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value()
{
    cin >> num;
    cin >> name;
    cin >> sex;
}


