#include<iostream>
#include "student.h"//�Լ��趨��ͷ�ļ�����Ҫ��˫����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
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


