#include "Header.h"


void fillArray( int* const arr,const int size) 
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void readArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
	}
	std::cout << "\n";
}

int main() 
{
	srand(time(NULL));

	int* pa = new int;
	*pa = 10;
	std::cout << pa <<"\n";

	delete pa;
	pa = nullptr;

	int rows, cols;
	std::cout << "enter rows and cols: "<<std::endl;
	std::cin >> rows>> cols;

	int** matrix = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}
	//////////////////////////////////

	//заполнение двумерного динамического массива.
	for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j < cols; j++) 
		{
			matrix[i][j] = rand() % 10;
			std::cout<<"|" << matrix[i][j]<<"|" << "\t";
		}

		std::cout << "\n";

		for (int j = 0; j < cols; j++) 
		{
			std::cout << "---" << "\t";
		}

		std::cout << "\n";
	}

	/////////////////////////////////
	for (int i = 0; i < rows; i++) 
	{
		delete[] matrix[i];
	}
	delete []matrix;
	std::cout << "\n";
	//////////////////////////////////////////////

	int size = 10;
	int* arr1 = new int[size];
	int* arr2 = new int[size];

	fillArray(arr1, size);
	fillArray(arr2, size);


	std::cout << "first array: \n";
	readArray(arr1, size);
	std::cout << "second array: \n";
	readArray(arr2, size);

	std::cout << "==================================\n";

	delete[] arr1;//чистим адрес массива, чтобы потом корректно скопировать в него значение второго массива.
	//если не почистить память массива, то тогда при присваивание значений второго массива первому мы просто присвоим адрес второго массива первому.

	arr1 = new int[size];//заново выделяем память, чтобы заполнить массив 1 значениями массива 2.

	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr2[i];
	}

	std::cout << "first array: \n";
	readArray(arr1, size);
	std::cout << "second array: \n";
	readArray(arr2, size);

	delete[]arr1;
	delete[]arr2;

	return 0;
}