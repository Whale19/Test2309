//输入两个整数，比较两个数的大小，输出比较结果。使用if else 语句。

#include <iostream>
using namespace std;
int main() 
{ 
    int a, b; 
    cout << "请输入两个整数a和b，中间用回车隔开：" << endl; 
    cin >> a >> b; 
    if (a > b) 
        { cout << a << " > " << b << endl; } 
    else if (a == b)
        { cout << a << " = " << b << endl; } 
    else 
        { cout << a << " < " << b << endl;  } 
    return 0; 
}