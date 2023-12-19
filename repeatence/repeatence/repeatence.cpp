#include <iostream>

using namespace std;

int main() {
	unsigned char ch = 1;

	while (ch)
	{
		cout << ch;
		ch++;

	}
	cout << endl;
	cout << endl;
	cout << endl;
	for (int i = 0; i < 100; i++) {
		cout << rand()<<" ";
	}
	cout << endl << endl;
	int x = 0;
loop1:
	x++;
	cout<<"\t" << x;
	if (x<10)
	{
		goto loop1;
	}
	cout << endl << endl;


	int matrx[3][3];

	for (int j = 0; j < 3; j++) {
		for (int t = 0; t < 3; t++) {
			matrx[j][t] = (j * 3) + t + 1;
			cout << matrx[j][t];
		}
		cout << endl;
	}

	return 0;
}