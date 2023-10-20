//使用while 循环结构，用* 号在屏幕上输出金字塔图形。根据行号控制需要输出的空格和星号个数。
#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout << "行数：" ;
    cin >> a;
    i=1;
    while(i<=a)
    {
        for(i=1; i <= a; i++) 
        {
            for(int j=a;j>i;--j)
                {cout<<" ";}
            for(int k=1;k<=i*2-1;k++)
                {cout<<"*";}
            cout<<endl; 
        }
    }
}
