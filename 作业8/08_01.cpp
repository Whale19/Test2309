/*输入案例：
请输入整数（输入非整数结束输入）:
1 2 3 4 5 q
删除第一个元素: 1
删除最后一个元素: 5
剩余的链表元素: 2 3 4
*/

#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    // 从标准输入读取一系列整数并添加到链表中
    int inputValue;
    std::cout << "请输入整数（输入非整数结束输入）:\n";
    while (std::cin >> inputValue) {
        myList.push_back(inputValue);
    }

    // 检查链表是否为空
    if (myList.empty()) {
        std::cout << "链表为空。\n";
    } else {
        // 删除第一个和最后一个元素
        std::cout << "删除第一个元素: " << myList.front() << "\n";
        myList.pop_front();

        std::cout << "删除最后一个元素: " << myList.back() << "\n";
        myList.pop_back();

        // 打印剩余的链表
        std::cout << "剩余的链表元素: ";
        for (const auto& value : myList) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    return 0;
}