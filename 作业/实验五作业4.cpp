#include<iostream>
using namespace std;
class student
{
public:
	student(int n, float s) :num(n), score(s) {}
	int num; double score;
};
int main()
{
	student stud[5] = { student(1,78),student(2,98),student(3,77),student(4,57),student(5,99) };
	void max(student*);
	student* p = &stud[0];
	
	max(p);
	return 0;
	



