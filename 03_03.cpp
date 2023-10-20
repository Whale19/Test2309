//使用switch 语句输入一个正整数，计算其除以7的余数，根据余数0-6 分别转换成“星期日/一/二/三/四/五/六”，打印输出。

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "请输入一个正整数:";
    cin >> n;
    switch(n%7)
    {
        case 1: cout << "星期一" << endl; break;
        case 2: cout << "星期二" << endl; break;
        case 3: cout << "星期三" << endl; break;
        case 4: cout << "星期四" << endl; break;
        case 5: cout << "星期五" << endl; break;
        case 6: cout << "星期六" << endl; break;
        case 0: cout << "星期日" << endl; break;
    }
    return 0;
}