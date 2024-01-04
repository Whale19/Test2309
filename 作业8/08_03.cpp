/*
请输入整数（输入非整数结束输入）:
5 2 8 2 7 5 3 8 1 4 9 1 6 3 0 q
处理后的容器元素: 0 1 2 3 4 5 6 7 8 9 
*/

#include <iostream>
#include <vector>
#include <algorithm>

// 去重并排序的函数
void uniqueSort(std::vector<int>& vec) {
    // 使用 std::sort 对容器元素进行升序排序
    std::sort(vec.begin(), vec.end());

    // 使用 std::unique 去除重复元素
    auto it = std::unique(vec.begin(), vec.end());
    
    // 删除重复元素后的部分
    vec.erase(it, vec.end());
}

int main() {
    std::vector<int> myVector;

    // 从标准输入读取整数并添加到容器中
    int inputValue;
    std::cout << "请输入整数（输入非整数结束输入）:\n";
    while (std::cin >> inputValue) {
        myVector.push_back(inputValue);
    }

    // 检查容器是否为空
    if (myVector.empty()) {
        std::cout << "容器为空。\n";
    } else {
        // 调用去重并排序的函数
        uniqueSort(myVector);

        // 打印处理后的容器元素
        std::cout << "处理后的容器元素: ";
        for (const auto& value : myVector) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
