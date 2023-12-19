#include <iostream>
#include <vector>
#include <cstdlib>
#include <map>
#include <unordered_map>
#include <bits/stdc++.h>

//int Sum(int a, int b) {
//    return a + b;
//}
//
//double Sum(double a, double b) {
//    return a + b;
//}

template <typename T1, typename T2>
T2 Sum(T1 a, T2 b) {
    return a + b;
}

//template <typename T1, typename T2>
//T1 Sum(T1 a, T2 b) {
//    return a + b;
//}

int factorial(int n) {
    if (n==0)
        return 0;
    if (n == 1)
        return 1;


    return n * factorial(n - 1);
    
}

int main()
{
    std::cout << Sum(4, 5.5) << std::endl;
    std::cout << Sum(5, 6.6) << std::endl;

    std::cout<<factorial(8);
    
    

}
