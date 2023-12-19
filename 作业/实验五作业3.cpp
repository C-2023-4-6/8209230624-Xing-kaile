#include<iostream>
using namespace std;
class Box 
{
public:
	void get_value(void)// 数据成员为公用的
	{
		cin >>L;
		cin >> W;
		cin >> H;
	}
	void display(void)
	{
		int v;
		v = L * W * H;
		cout << v;
	}
private:
	int L;
	int W;
	int H;


};
int main()
{
	Box box1, box2, box3;
	box1.get_value();
	cout << "第一个立方体的体积是",
	box1.display();
	box2.get_value();
	cout << "第二个立方体的体积是",
	box2.display();
	box3.get_value();
	cout << "第三个立方体的体积是",
	box3.display();
}