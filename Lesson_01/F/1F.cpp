#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums; 
    int left_window = 0;
    int right_window = 0;
    char plus = '+';
    char mul = 'x';
    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        if (x % 2) {
            left_window = i;
            right_window = i;
            break;
        }
    }
    for (int i = left_window + 1; i < n; ++i) {
        int x;
        std::cin >> x;
        if (x % 2 == 0) {
            right_window = i;
            break;
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        if (i < left_window) std::cout << plus;
        else if (i < right_window - 1) std::cout << mul;
        else if (i == right_window - 1) std::cout << plus;
        else std::cout << mul;
    }
    std::cout << std::endl;
    return 0;
}