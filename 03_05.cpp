//输出200 -300 之间的所有质数。使用for循环、break语句，遍历2~sqrt(n) 因子，判断某个数是不是质数。
#include<iostream>
using namespace std;
int main()
{
    for(int i=200; i<=300; i++)
    {
        for(int j=sqrt(i);j>1;j--)
        {
            if(i%j==0)  //余数为0即能整除，非质数
                {break;}
            else if(j==2) 
                {cout<<i<<endl;}
        }
    }
}