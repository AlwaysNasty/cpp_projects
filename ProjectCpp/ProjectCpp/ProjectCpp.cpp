#include <bits-stdc++.h>
#include <algorithm>
#include <iostream>
#include <memory.h>
#include <iterator>
#include <cassert>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <cstdio>
#include <string>
#include <queue>
#include <deque>
#include <cmath>
#include <ctime>
#include <stack>
#include <set>
#include <map>

using namespace std;


int fact(int N) {
	if (N == 0)
		return 0;
	if (N == 1)
		return 1;

	return N * fact(N - 1);

}


int main() {
	setlocale(LC_ALL, "ru");
	int N;
	cin >> N;
	cout << fact(N);

	return 0;
}