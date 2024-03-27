#include <bits/bits-stdc++.h>

std::string GetDataFromDB() 
{
    return "Data from DB: tututata";
}

std::string GetDataFromWebServer()
{
    return "Data from Web Server: mimomimo";
}

void ShowInfo(std::string (*nameOfFunction)()) {
    std::cout << nameOfFunction();
}

int Sum(int a, int b) {
    std::cin >> a >> b;
    return a + b;
}

int minus(int a, int b) {
    std::cin >> a >> b;
    return a - b;
}

int multiply(int a, int b) {
    std::cin >> a >> b;
    return a * b;
}

int divide(int a, int b) {
    std::cin >> a >> b;
    return a / b;
}

void calculate(int (*operation)(int a, int b)) {
    std::cout<< operation(5,5)<<std::endl;
}

int main()
{
    std::string test;
    
    calculate(divide);

    ShowInfo(GetDataFromWebServer);
}
