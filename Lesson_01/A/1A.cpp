#include <iostream>

int main() {
    int P, V;
    int Q, M;
    std::cin >> P >> V;
    std::cin >> Q >> M;

    int Person1_left = P - V;
    int Person1_right = P + V;
    int Person2_left = Q - M;
    int Person2_right = Q + M; 

    if (std::min(Person1_right, Person2_right) >= std::max(Person1_left, Person2_left)) {
        std::cout << std::max(Person1_right, Person2_right) - std::min(Person1_left, Person2_left) + 1 << std::endl;
    } else {
        std::cout << (Person1_right - Person1_left + 1) + (Person2_right - Person2_left + 1) << std::endl;
    }
    return 0;
}