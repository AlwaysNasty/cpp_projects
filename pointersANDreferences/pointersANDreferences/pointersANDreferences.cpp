#include <iostream>

using namespace std;

int main() {
	int Total;
	int *ptr;
	int val;

	Total = 3200;
	ptr = &Total;
	val = *ptr;
	cout << Total << endl << ptr << endl << *ptr << endl << val << endl;

	int a = 110; //создаем переменную
	int* pa = &a; //создаем указатель pa и получаем адрес переменной а
	cout << pa << "\t" << *pa << endl;//вывод адреса переменной и вывод разименованного указателя(значение а)
	
	int uva;//создаем переменную для значения переменной а
	uva = *pa; //присваиваем ей значение разим. указателя
	cout << uva << endl;

	return 0;
}