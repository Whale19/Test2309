/*
请输入整数（输入非整数结束输入）:
5 2 8 2 7 5 3 8 1 4 9 1 6 3 0 q
请输入阈值: 4
处理前的链表: 0 3 6 1 9 4 1 8 3 7 2 8 2 5 
处理后的链表: 6 9 4 8 7 8 5 
*/

#include <iostream>
#include <forward_list>

// 函数对象，用于移除小于阈值的元素
template <typename T>
struct RemoveIfLess {
    T threshold;

    RemoveIfLess(T threshold) : threshold(threshold) {}

    bool operator()(const T& value) const {
        return value < threshold;
    }
};

// 函数模板，移除小于阈值的元素
template <typename T>
void filterList(std::forward_list<T>& myList, const T& threshold) {
    myList.remove_if(RemoveIfLess<T>(threshold));
}

int main() {
    std::forward_list<int> myForwardList;

    // 从标准输入读取整数并添加到链表中
    int inputValue;
    std::cout << "请输入整数（输入非整数结束输入）:\n";
    while (std::cin >> inputValue) {
        myForwardList.push_front(inputValue);
    }

    // 检查链表是否为空
    if (myForwardList.empty()) {
        std::cout << "链表为空。\n";
    } else {
        // 打印处理前的链表
        std::cout << "处理前的链表: ";
        for (const auto& value : myForwardList) {
            std::cout << value << " ";
        }
        std::cout << "\n";

        // 调用 filterList 函数，移除小于阈值的元素
        int threshold;
        std::cout << "请输入阈值: ";
        std::cin >> threshold;
        filterList(myForwardList, threshold);

        // 打印处理后的链表
        std::cout << "处理后的链表: ";
        for (const auto& value : myForwardList) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
