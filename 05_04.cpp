//实现⼀个名为 Student 的类，该类具有表⽰姓名、班级、学号、分数的私有成员变量。设计成员函数，显⽰学⽣的信息，并根据分数输出成绩（按分数段⾃⾏划分ABCD）。设计静态变量 count，在主函数中统计根据该类新建的对象总数，并输出。
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string className;
    int studentID;
    double score;

    // 静态变量，用于统计对象总数
    static int count;

public:
    // 构造函数，用于初始化学生信息
    Student(string n, string cn, int id, double s) : name(n), className(cn), studentID(id), score(s) {
        // 每次创建对象时，增加对象总数
        count++;
    }

    // 成员函数，显示学生信息和成绩
    void displayStudentInfo() const {
        cout << "Name: " << name << "\nClass: " << className << "\nStudent ID: " << studentID << "\nScore: " << score << endl;

        // 根据分数输出成绩
        if (score >= 90) {
            cout << "Grade: A" << endl;
        } else if (score >= 80) {
            cout << "Grade: B" << endl;
        } else if (score >= 70) {
            cout << "Grade: C" << endl;
        } else {
            cout << "Grade: D" << endl;
        }
        cout << endl;
    }

    // 静态成员函数，获取对象总数
    static int getCount() {
        return count;
    }
};

// 初始化静态变量
int Student::count = 0;

int main() {
    string input;

    cout << "Enter student information for each student (or type 'e' to quit):" << endl;

    // 循环输入学生信息
    while (true) {
        getline(cin, input);

        if (input == "e") {
            break;
        }

        // 使用 stringstream 解析输入
        stringstream ss(input);
        string name, className;
        int studentID;
        double score;

        // 逐个提取信息
        getline(ss, name, ',');
        getline(ss, className, ',');
        ss >> studentID;
        ss.ignore(); // 忽略逗号后的空格
        ss >> score;

        // 创建 Student 对象
        Student student(name, className, studentID, score);

        // 显示学生信息和成绩
        student.displayStudentInfo();
    }

    // 输出对象总数
    cout << "Total number of students: " << Student::getCount() << endl;

    return 0;
}

/*输入案例（逐行输入）：
Amy,ClassA,01,95.5;
Bob,ClassB,02,75.0;
Cendy,ClassC,03,52.5;
*/