#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

void main() {
	int64_t x;

	cin >> x;
	int64_t m = x;
	cout << "INITIAL VALUE: " << m << "\n";

	cin >> x;
	while (x!=0)
	{
		if (x%2==0)
		{
			m = max(m, x);
		}
		cin >> x;
	}
	cout << "Maximum is: " << m;
}