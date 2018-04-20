#include <iostream>
/*
 * 主函数
 * 读取三个值, 计算结果
 */
int main() {
    int v1 = 0, v2 = 0, sum = 0;
    std::cout << "请输入两个整数并以空格分开:" << std::endl;
    std::cin >> v1 >> v2;
    for (int val = v1; val < v2; ++val) {
        // sum += val;
        std::cout << val << std::endl;
    }
    for (int val = v1; val > v2; --val) {
        // sum += val;
        std::cout << val << std::endl;
    }
    std::cout << v2 << std::endl;
    // std::cout << v1 << "到" << v2 << "的和等于 " << sum << std::endl;
    std::cout << "以上就是" << v1 << "到" << v2 << "之间的整数" << std::endl;
    return 0;
}