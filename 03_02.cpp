//输入一个整数，反向输出该整数，最后输出它的位数。使用do while 语句。

#include <iostream>
using namespace std;
int main()
{
   long long a;
   int i = 0 ;
    cout << "请输入一个整数：";
    cin >> a; 
    while (a>0)
    {
        cout << a%10;
        a = a/10;
        i = i+1;
    }
    cout << endl << "位数：" << i <<endl;
    return 0;
}
