#include <iostream>
#include <cctype>
using namespace std;

int main() {
	int test_integer = 10;
	int* pti = &test_integer;

	cout << "\n" << *pti << "\t" << test_integer;

	*pti = 20;

	cout << "\n" << *pti << "\t" << test_integer;

	(*pti)++;

	cout << "\n" << *pti << "\t" << test_integer<<"\n\n";
//////////////////////////////////////////////////////////////////////
	int* i, j[10];
	double* f, g[10];
	
	i = j;
	f = g;

	for (int x = 0; x < 10; x++)
	{
		cout << i + x << " " << f + x << '\n';
	}
	cout << "\n";
//////////////////////////////////////////////////////////////////////
	char* p;
	char str[80] = "This Is A Test";

	cout << str<<"\n";
	p = str;

	while (*p) {
		if (isupper(*p))
			*p = tolower(*p);
		else if (islower(*p))
			*p = toupper(*p);
		p++;
	}
	cout << str<<"\n";
	
	return 0;
}
