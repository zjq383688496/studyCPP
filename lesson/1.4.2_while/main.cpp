#include <iostream>
/*
 * 主函数
 * 读取三个值, 计算结果
 */
int main() {
    int v1 = 0, v2 = 0;
    std::cout << "请输入两个整数并以空格分开:" << std::endl;
    std::cin >> v1 >> v2;
    int val = v1;
    std::cout << val << std::endl;
    while (val > v2) {
        --val;
        std::cout << val << std::endl;
    }
    while (val < v2) {
        ++val;
        std::cout << val << std::endl;
    }
    std::cout << "以上就是" << v1 << "到" << v2 << "之间的整数" << std::endl;
    return 0;
}