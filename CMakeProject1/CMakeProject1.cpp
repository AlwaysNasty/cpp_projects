// CMakeProject1.cpp: определяет точку входа для приложения.
#include "CMakeProject1.h"

void Swap(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void Foo(int* pa, int* pb, int* pc) {
	std::vector<int> v;
	for (int i = *pa; i < (*pb) + 1; i+= (*pc)) {
		v.push_back(i);
	}
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i]<<" ";
}


int main()
{
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

	int var1 = 66;
	int var2 = 99;

	std::cout << var1 << "\t" << var2 << std::endl;

	Swap(&var1, &var2);

	std::cout << var1 << "\t" << var2 << std::endl << std::endl;
	
	int a=0, b=0, c=0;
	std::cin >> a >> b >> c;
	Foo(&a, &b, &c);



	return 0;
}
