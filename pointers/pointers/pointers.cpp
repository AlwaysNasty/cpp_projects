#include <iostream>
#include <bits-stdc++.h>
using namespace std;

void Foo(int *pa, int *pb, int *pc) {
	(*pa) = 555;
	(*pb)++;
	(*pc) = -20;
}

void Swap(int *px, int *py) {
	int Temp = *px;
	*px = *py;
	*py = Temp;

}

int main()
{
	int a = 0, b = 0, c = 1;
	cout << a<<" " << b << " " << c << endl;

	cout << "foo" << endl;
	Foo(&a, &b, &c);

	cout << a << " " << b << " " << c << endl;

	int x, y;
	x = 10;
	y = 20;
	cout << x << " " << y << endl;
	Swap(&x, &y);
	cout << x << " " << y << endl;

	return 0;
}
