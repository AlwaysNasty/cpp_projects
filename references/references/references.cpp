#include <iostream>
//#include <bits-stdc++.h>
#include <vector>
#include <cstdlib>

using namespace std;

void Swap(int *x1, int *x2) {
	int Temp = *x1;
	*x1 = *x2;
	*x2 = Temp;
}

void Foo(int a) {
	a = 1;
}

void Bar(int &a) {
	a = 2;
}

void Ref(int *a) {
	*a = 3;
}

void Func(int& a, int& b, int& c) {
	a = 10;
	b *= 2;
	c -= 100;
}

int main() {
	int a = 5;
	int *pa = &a;
	int &aRef = a;

	cout << "pa: " << pa << "\t*pa: " << *pa << endl;
	cout << "aref: " << aRef << endl;

	aRef = 25;
	cout << "aref: " << aRef << endl;

	int *pb = &aRef;
	int &bRef = *pb;
	cout << *pb << bRef << endl;
	
	int x, y;
	x = 10;
	y = 20;

	cout << x << y << endl;
	Swap(&x,&y);
	cout << x << y << endl << endl;

	int value = 5;
	cout << value << endl << endl;

	Foo(value);
	cout << value << endl;

	Bar(value);
	cout << value << endl;

	Ref(&value);
	cout << value << endl << endl;

	int v1 = 0, v2 = 4, v3 = 34;
	cout << "v1 = " << v1 << endl;
	cout << "v2 = " << v2 << endl;
	cout << "v3 = " << v3 << endl << endl;

	Func(v1, v2, v3);

	cout << "v1 = " << v1 << endl;
	cout << "v2 = " << v2 << endl;
	cout << "v3 = " << v3 << endl << endl;
	
	return 0;
}