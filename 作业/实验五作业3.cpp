#include<iostream>
using namespace std;
class Box 
{
public:
	void get_value(void)// ���ݳ�ԱΪ���õ�
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
	cout << "��һ��������������",
	box1.display();
	box2.get_value();
	cout << "�ڶ���������������",
	box2.display();
	box3.get_value();
	cout << "������������������",
	box3.display();
}