#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:
	void set_time(void)// 数据成员为公用的
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
	Time t1;           //定义t1为Time类对象
	t1.set_time();
	t1.show_time();
	return 0;
}
