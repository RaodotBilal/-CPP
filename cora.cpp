
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    double two = 1;
    double newnum, newnum1;
    newnum = newnum1 = 0;
    for(num = 1; num <= 50; num++)
    {

        two = two * 2;
    }
    newnum1 = two % (double)10.0;
    newnum = newnum + newnum1;
    cout << two << "\n";
    return 0;
