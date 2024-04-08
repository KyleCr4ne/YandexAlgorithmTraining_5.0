#include <iostream>
#include <unordered_map>

int main() {
    int n;
    std::cin >> n;
    long long int counter = 0;

    std::unordered_map<int, int> remains;
    remains[0] = 0;
    remains[1] = 1;
    remains[2] = 2;
    remains[3] = 2;

    for (int i = 0; i < n; ++i) {
        int current;
        std::cin >> current;
        
        int cur_cnt = current / 4; // tab
        int remain = current % 4; // 0 - nothing, 1 - space, 2 - space + space, 3 - tab + backspace

        counter += cur_cnt + remains[remain];
    }
    std::cout << counter << std::endl;
    return 0;
}