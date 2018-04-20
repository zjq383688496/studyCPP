#include <iostream>
/*
 * 主函数
 * 读取三个值, 计算结果
 */
int main() {
    int sum = 0, idx = 0, val = 0;
    std::cout << "请输入整数并以空格分开:" << std::endl;
    while (std::cin >> val) {
        sum += val;
        std::cout << "数值" << ++idx << ": " << val << std::endl;
    }
    std::cout << "输入的数值总和是" << sum << std::endl;
    return 0;
}