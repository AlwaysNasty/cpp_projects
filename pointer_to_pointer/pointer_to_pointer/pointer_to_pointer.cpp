#include <iostream>

int main()
{
    int x, * p, ** q;
    x = 10;
    p = &x;
    q = &p;
    std::cout << &q << "\n"
        << *q << "\t" << p << "\n"
        << q << "\n";

}

