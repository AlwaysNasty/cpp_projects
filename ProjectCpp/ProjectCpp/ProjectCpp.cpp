#include <algorithm>
#include <iostream>
#include <memory.h>
#include <iterator>
#include <cassert>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <cstdio>
#include <string>
#include <queue>
#include <deque>
#include <cmath>
#include <ctime>
#include <stack>
#include <set>
#include <map>

using namespace std;

int fact(int N);

int fact(int N) {
	if (N == 0)
		return 0;
	if (N == 1)
		return 1;

	return N * fact(N - 1);

}


int main() {
	setlocale(LC_ALL, "ru");
	
    int* arr; // указатель для выделения памяти под массив
    int size; // размер массива
    int temp;
    // Ввод количества элементов массива
    cout << "n = ";
    cin >> size;

    if (size <= 0) {
        // Размер масива должен быть положитлеьным
        cerr << "Invalid size" << endl;
        return 1;
    }

    arr = new int[size]; // выделение памяти под массив

    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // меняем элементы местами
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // освобождение памяти;

	return 0;
}