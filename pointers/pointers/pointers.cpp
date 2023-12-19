//#include <iostream>
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
	const int SIZE = 10;
	int arr[SIZE] = { 9,8,7,6,5,4,3,2,1,0 };
	int length = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < length; i++)
	{
		cout << arr[i];
	}
	cout << endl;

	sort(arr, arr + length);

	for (int i = 0; i < length; i++)
	{
		cout << arr[i];
	}

	cout << endl;

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

	int variable = 9;
	int *pvar1 = &variable;
	int* pvar2 = &*pvar1;

	cout << variable << *pvar1 << *pvar2 << endl;

	return 0;
}
