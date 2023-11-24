#include "Header.h"


int main() 
{
	srand(time(NULL));

	int* pa = new int;
	*pa = 10;
	std::cout << pa <<"\n";

	delete pa;
	pa = nullptr;

	int size = 0;
	std::cin >> size;
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 1000;
	}

	for (int i = 0; i < size; i++) {
		std::cout << arr[i]<<"\n";
	}

	int rows, cols;
	std::cout << "enter rows and cols: "<<std::endl;
	std::cin >> rows>> cols;

	int** matrix = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}
	//////////////////////////////////
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
	delete []arr;

	return 0;
}