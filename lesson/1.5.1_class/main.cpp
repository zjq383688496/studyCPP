#include <iostream>
#include "Sales_item.h"
/*
 * 主函数
 * 读取三个值, 计算结果
 */
int main() {
    Sales_item curbook, newbook, sum;
    int init = 0;
    std::cout << "请粘贴数据:" << std::endl;
    if (std::cin >> curbook) {
        sum = curbook;
        while (std::cin >> newbook) {
            if (curbook.isbn() == newbook.isbn()) {
                sum += newbook;
            } else {
                if (init == 0) {
                    std::cout << "" << std::endl;
                    std::cout << "以下是总体数据:" << std::endl;
                    ++init;
                }
                std::cout << sum << std::endl;
                sum = newbook;
                curbook = newbook;
            }
        }
        std::cout << sum << std::endl;
    } else {
        std::cerr << "没有渠道数据!" << std::endl;
        return -1;
    }
    return 0;
}