#include <bits/bits-stdc++.h>

void fillArray(int* const arr, const int size) 
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 10;
}

void showArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
		std::cout << *(arr + i)<<" ";

	std::cout << "\n";
}

void push_back(int*& arr, int& M, const int value)//M - size of an array 
{
	int *newArray = new int[M + 1];

	for (int i = 0; i < M; i++)
	{
		newArray[i] = arr[i];
	}

	newArray[M] = value;

	delete[] arr;
	M++;

	arr = newArray;
}

void pop_pack(int*& arr, int& M) 
{
	M--;
	int* newArray = new int[M];

	for (int i = 0; i < M; i++)
	{
		newArray[i] = arr[i];
	}
	delete[] arr;
	arr = newArray;
}
int main() {
	//int size;
	//std::cin >> size;
	//int* arr = new int[size];
	//
	//fillArray(arr, size);
	//showArray(arr, size);

	//delete[] arr;
	////////////////////////////////////////////////////////
	//int rows, cols;
	//std::cin >> rows >> cols;

	//int** matrix = new int* [rows];

	////создание массива
	//for (int i = 0; i < rows; i++)
	//	matrix[i] = new int[cols];

	////заполнение и вывод массива
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		matrix[i][j] = rand() % 10;
	//		std::cout << matrix[i][j]<<" ";
	//	}
	//	std::cout << "\n";
	//}

	////удаление памяти для массива
	// 
	//for (int i = 0; i < rows; i++)
	//	delete[] matrix[i];

	//delete[] matrix;
	////////////////////////////////////////

	int N;
	std::cin >> N;

	int* firstArray = new int[N];
	int* secondArray = new int[N];

	fillArray(firstArray, N);
	fillArray(secondArray, N);

	std::cout << "First array:\t";
	showArray(firstArray, N);
	std::cout << "Second array:\t";
	showArray(secondArray, N);

	//копирование массива firstArray в secondArray
	delete[] firstArray;

	firstArray = new int[N];

	for (int i = 0; i < N; i++)
	{
		firstArray[i] = secondArray[i];
	}

	std::cout << "First array:\t";
	showArray(firstArray, N);
	std::cout << "Second array:\t";
	showArray(secondArray, N);
	//////////////////////////////////////
	int M = 7;

	int* arr = new int[M];

	fillArray(arr, M);
	showArray(arr, M);

	push_back(arr, M, 111);
	showArray(arr, M);

	pop_pack(arr, M);
	showArray(arr, M);

	delete[] arr;

	delete[] firstArray;
	delete[] secondArray;

	return 0;
}