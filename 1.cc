#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        std::cout << rand() << std::endl;
    }
    return 0;
}
