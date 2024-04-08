#include <iostream>

int main() {
    int n, k, d;
    std::cin >> n >> k >> d;
    int i;
    for (i = 0; i < 10; ++i) {
        if ((10 * n + i) % k == 0) break; 
    }
    if (i == 10) std::cout << -1 << std::endl;
    else { 
        std::cout << n << i;
        for (int i = 0; i < d - 1; ++i) {
            std::cout << 0;
        }
        std::cout << std::endl;
    }
    return 0;
}
