#include <iostream>
using namespace std;
int sumPeach(int day)
{
    if (day == 10)
        return 1;
    else
        return 2 * sumPeach(day + 1) + 2;
}
int main()
{
    int sum;
    sum = sumPeach(1);
    printf("��һ��ժ�������ǣ�%d\n", sum);
}
