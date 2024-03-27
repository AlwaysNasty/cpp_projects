#include<iostream>
#include <ctime>
#include <cmath>


void fillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void showArray(const int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i]<<" ";
	}
	std::cout << "\n";
}

void push_back(int*& arr, int& size, const int value)
{
	int* newArr = new int[size+1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}

	newArr[size++] = value;
	
	delete[] arr;
	arr = newArr;
}

void pop_back(int*& arr, int& size) 
{
	size--;
	int* newArr = new int[size];

	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}

	delete[] arr;
	arr = newArr;
}


void main() 
{
	int size;
	std::cin >> size;
	int* arr = new int[size];

	fillArray(arr, size);
	showArray(arr, size);

	push_back(arr, size, 10);
	showArray(arr, size);

	pop_back(arr, size);
	showArray(arr, size);

	delete[] arr;
}