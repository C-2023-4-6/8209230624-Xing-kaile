#include<iostream>
using namespace std;
class Time             // ����Time��
{
public:
	void set_time(void)// ���ݳ�ԱΪ���õ�
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void show_time(void)
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.set_time();
	t1.show_time();
	return 0;
}
