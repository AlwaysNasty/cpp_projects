// CMakeProject1.cpp: определяет точку входа для приложения.
#include "CMakeProject1.h"


void Foo1(int a) {
	a = 1;
}

void Foo2(int& a) {
	a = 2;
}

void Foo3(int* a) {
	*a = 3;
}

void Bar(int& a, int& b, int& c) {
	a = 10;
	b *= 2;
	c -= 100;
}

void main()
{
	setlocale(LC_ALL, "Russian");

	int value = 5;
	std::cout << "value is: " << std::endl;
	

	Foo1(value);
	std::cout << value << std::endl;

	Foo2(value);
	std::cout << value << std::endl;

	Foo3(&value);
	std::cout << value << std::endl;

	int a = 0, b = 4, c = 200;

	std::cout << a << " " << b << " " << c << std::endl;

	Bar(a, b, c);

	std::cout << a << " " << b << " " << c << std::endl;


	//int g = 110;
	//int& gRef = g;

	//std::cout << &gRef;

	std::unordered_map<int, std::string> myMap;

	// Вставляем элементы в хэш-таблицу
	myMap[1] = "One";
	myMap[2] = "Two";
	myMap[3] = "Three";

	// Поиск элемента по ключу
	int keyToFind = 2;
	auto it = myMap.find(keyToFind);
	if (it != myMap.end()) {
		std::cout << "Значение для ключа " << keyToFind << ": " << it->second << std::endl;
	}
	else {
		std::cout << "Элемент с ключом " << keyToFind << " не найден." << std::endl;
	}

}
