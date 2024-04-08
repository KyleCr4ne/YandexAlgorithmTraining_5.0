#include <iostream>

class Match {
    public:
    Match(int G1 = 0, int G2 = 0) : G1_(G1), G2_(G2) {};
    int G1_;
    int G2_;
};

int main() {
    int G1, G2;
    char buff;
    std::cin >> G1 >> buff >> G2;
    Match First(G1, G2);
    std::cin >> G1 >> buff >> G2;
    Match Second(G1, G2);

    int Type;
    std::cin >> Type;


    int diff = std::max(0, First.G2_ + Second.G2_ - First.G1_ - Second.G1_);

    std::cout << diff + !((Type == 2 && (First.G1_ > First.G2_)) || (Type == 1 && (Second.G2_ < diff))) << std::endl;
    return 0;
}