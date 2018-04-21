#include <iostream>
/*
 * 主函数
 * 读取三个值, 计算结果
 */
int main() {
    int v1 = 0, v2 = 0, step = 1;
    std::cout << "请输入整数并以空格分开:" << std::endl;
    std::cin >> v1 >> v2;
    int val = v1;
    if (v1 > v2) 
        step = -1;
    while (val != v2) {
        std::cout << val << std::endl;
        val += step;
    }
    std::cout << val << std::endl;
    // std::cout << "输入的数值总和是" << sum << std::endl;
    return 0;
}