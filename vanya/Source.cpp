#include <iostream>
#include <string>
#include <algorithm>


int main() {
    std::string a;
    std::getline(std::cin, a);

    for (int i = 1; i < a.size(); ++i) {
        if ((a[i] == 'o') && (a[i - 1] == 'n')) {
            std::swap(a[i-1], a[i]);
        }
    }

    for (auto el : a) {
        std::cout << el;
    }

    return 0;
}