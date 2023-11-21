// CMakeProject1.cpp: определяет точку входа для приложения.
#include "CMakeProject1.h"

//void Foo(int* pa, int* pb, int* pc) {
//	std::vector<int> v;
//
//	for (int i = *pa; i < (*pb) + 1; i += (*pc))
//		v.push_back(i);
//
//	for (int i = 0; i < v.size(); i++)
//		std::cout << v[i] << " ";
//
//	std::cout << std::endl;
//}

void main()
{
	setlocale(LC_ALL, "Russian");
	int x = 10;
	int* px = &x;

	std::cout << x << " " //output variable
		<< px << " "//output pointer to adress of x 
		<< *px << std::endl;//output unnamed pointer to adress of x

	*px = 20;

	std::cout << x << " " //output variable
		<< px << " "//output pointer to adress of x 
		<< *px << std::endl;//output unnamed pointer to adress of x

	x = 40;

	std::cout << x << " " //output variable
		<< px << " "//output pointer to adress of x 
		<< *px << std::endl;//output unnamed pointer to adress of x
	
	//int a=0, b=0, c=0;
	//std::cin >> a >> b >> c;
	//Foo(&a, &b, &c);

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
