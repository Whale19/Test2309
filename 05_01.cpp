//实现⼀个名为 Circle 的类，其中包含“半径”私有成员变量，包含构造函数，包含计算圆的⾯积和周⻓的成员函数。在主程序中，使⽤该类⽣成对象并⽤半径值初始化，调⽤成员函数计算⾯积和周⻓。
#include <iostream>
#include <cmath>
using namespace std;

class Circle 
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}   // 计算圆的面积
    double calculateArea() 
    {
        return M_PI * radius * radius;
    } 
    double calculatePerimeter() 
    {
        return 2 * M_PI * radius;
    }
};

int main()   // 创建 Circle 对象并初始化半径
{   
    double radiusValue;
    cout << "Enter the radius of the circle: ";
    cin >> radiusValue;

    Circle myCircle(radiusValue);

    // 调用成员函数计算面积和周长
    double area = myCircle.calculateArea();
    double perimeter = myCircle.calculatePerimeter();

    cout << "Circle with radius " << radiusValue << " has area: " << area << " and perimeter: " << perimeter << endl;

    return 0;
}
