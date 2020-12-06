#include "main.h"

void print() {
    int a = 1337;
    int b = 1338;
    std::cout << "1337 + 1338 = " << BuildSys::sum(a, b) << std::endl;
    std::cout << "1338 - 1337 = " << BuildSys::sub(b, a) << std::endl;
}

int main() {
    print();
    return 0;
}

