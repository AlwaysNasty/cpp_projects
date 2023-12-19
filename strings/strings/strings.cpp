#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include <cstring>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{ 
    int arr[] = {9,8,7,6,5,4,3,2,1,0};

    sort(begin(arr), end(arr));

    for (int i = 0; i < 10; i++) {
        cout << arr[i];
    }
    cout << endl;

    string test(5,'abc');
    cout << test << endl;

    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];

        for (size_t i = 0; i != rowCnt; ++i) {
            // для каждого столбца в ряду
            for (size_t j = 0; j != colCnt; ++j) {
                // присвоить элементу его индекс как значение
                ia[i][j] = i * colCnt + j;
                std::cout << ia[i][j];
            }
            std::cout << std::endl;
        }

        vector<int> ivec(10);
        for (auto elem : ivec)
            cout << elem;
        cout << endl;

        ivec.push_back(1);
        for (auto elem : ivec)
            cout << elem;
        cout << endl;

        vector<int> v1(10, 1);

        for (auto elem : v1)
            cout << elem;

        cout << endl;

        vector<string> v2{ 5, "hi" };

        for (auto elem : v2)
            cout << elem;
        cout << endl;

        vector<int> vec = { 1,2,3,4 };
        int n = vec.size();
        cout << n;
}
