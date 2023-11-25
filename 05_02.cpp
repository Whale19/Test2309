//实现⼀个名为 Triangle 的类，该类具有表⽰其三边⻓度的私有成员变量，包含使⽤三边⻓度进⾏初始化的构造函数。设计成员函数，⽤于确定三⾓形是等边三⾓形、等腰三⾓形，还是不等边三⾓形，打印结果。在主程序中设计数据输⼊并实现判断。
#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    void determineTriangleType()
    {
        if (side1 == side2 && side2 == side3) 
        {cout << "等边三角形" << endl;} 
        else if (side1 == side2 || side1 == side3 || side2 == side3) 
        {cout << "等腰三角形" << endl;} 
        else 
        { cout << "不等边三角形" << endl;}
    }
};

int main() 
{
    double side1, side2, side3;

    cout << "Enter the length of side 1: "; cin >> side1;
    cout << "Enter the length of side 2: "; cin >> side2;
    cout << "Enter the length of side 3: "; cin >> side3;

    Triangle myTriangle(side1, side2, side3);
    myTriangle.determineTriangleType();

    return 0;
}
