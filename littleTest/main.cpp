#include <iostream>
#include <vector>

using namespace std;

void main() {
	vector<int> v1(10, 1);

	for (int i : v1) {
		cout << i << " ";
	}
}