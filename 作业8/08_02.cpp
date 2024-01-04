/*
入队操作:请输入命令（push, pop, print, exit）: push
请输入要入队的整数: 5
5 入队成功。
打印队列:请输入命令（push, pop, print, exit）: print
队列中的元素: 5
出队操作:请输入命令（push, pop, print, exit）: pop
5 出队成功。
退出程序:请输入命令（push, pop, print, exit）: exit
程序退出。
无效命令:请输入命令（push, pop, print, exit）: invalid
无效的命令，请重新输入。
*/

#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<int> myQueue;

    std::string command;
    int value;

    while (true) {
        std::cout << "请输入命令（push, pop, print, exit）: ";
        std::cin >> command;

        if (command == "push") {
            std::cout << "请输入要入队的整数: ";
            std::cin >> value;
            myQueue.push_back(value);
            std::cout << value << " 入队成功。\n";
        } else if (command == "pop") {
            if (!myQueue.empty()) {
                int frontValue = myQueue.front();
                myQueue.pop_front();
                std::cout << frontValue << " 出队成功。\n";
            } else {
                std::cout << "队列为空，无法出队。\n";
            }
        } else if (command == "print") {
            std::cout << "队列中的元素: ";
            for (const auto& element : myQueue) {
                std::cout << element << " ";
            }
            std::cout << "\n";
        } else if (command == "exit") {
            std::cout << "程序退出。\n";
            break;
        } else {
            std::cout << "无效的命令，请重新输入。\n";
        }
    }

    return 0;
}
