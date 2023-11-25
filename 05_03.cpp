//实现⼀个名为 Point 的类，其中包含 x y 坐标私有成员变量，包含使⽤点坐标进⾏初始化的构造函数，包含可以显⽰和更改 x y 值的成员函数。
//实现⼀个名为 Rectangle 的类，以公有⽅式继承 Point 类，同时新定义代表⻓度和宽度的私有成员变量，包含使⽤点坐标、⻓、宽进⾏初始化的构造函数，并实现成员函数来计算矩形的⾯积和周⻓。
//在主程序中使⽤ Point 和 Rectangle 类⽣成对象，计算⾯积和周⻓。
#include <iostream>
using namespace std;

class Point 
{
private:
    double x, y;

public:
    // 构造函数，使用点坐标进行初始化
    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // 显示 x 和 y 值
    void displayPoint() 
    {cout << "Point Coordinates: (" << x << ", " << y << ")" << endl;}

    // 更改 x 和 y 值
    void setPoint(double xCoord, double yCoord)
     {
        x = xCoord;
        y = yCoord;
    }
};

class Rectangle : public Point 
{
private:
    double length, width;

public:
    // 构造函数，使用点坐标、长度和宽度进行初始化
    Rectangle(double xCoord, double yCoord, double len, double wid) : Point(xCoord, yCoord), length(len), width(wid) {}

    // 计算矩形的面积
    double calculateArea() 
    {return length * width;}

    // 计算矩形的周长
    double calculatePerimeter() 
    {return 2 * (length + width);}
};

int main() 
{
    double a1,b1,a2,b2;
    // 创建 Point 对象并初始化点坐标
    cout<<"输入初始化点坐标a1和b1："<<endl; 
    cin>>a1>>b1;
    Point myPoint(a1, b1);
    // 显示点坐标
    myPoint.displayPoint();

    // 更改点坐标
    cout<<"输入更改后点坐标a2和b2："<<endl; 
    cin>>a2>>b2;
    myPoint.setPoint(a2, b2);
    // 显示更新后的点坐标
    myPoint.displayPoint();

    // 创建 Rectangle 对象并初始化点坐标、长度和宽度
    Rectangle myRectangle(a1, b1, a2, b2);

    // 计算矩形的面积和周长
    double area = myRectangle.calculateArea();
    double perimeter = myRectangle.calculatePerimeter();

    // 显示结果
    cout << "Rectangle Area: " << area << endl;
    cout << "Rectangle Perimeter: " << perimeter << endl;

    return 0;
}
