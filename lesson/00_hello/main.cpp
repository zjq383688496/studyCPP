#include <iostream>

int main() {
    std::cout << "hello Jimmy!" << std::endl;
    int v1 = 0, v2 = 0, v3 = 0;
    std::cin >> v1 >> v2 >> v3;
    std::cout << v1 << " 加 " << v2 << " 乘以 " << v3 << " 等于 " << (v1 + v2) * v3 << std::endl;
    return 0;
}