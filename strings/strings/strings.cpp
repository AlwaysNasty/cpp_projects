﻿#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include <cstring>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{ 
    char out[256], in[256];

    gets_s(out);
    strcpy_s(in, out);
    cout << out << in<<endl;

    strcat_s(in, out);
    cout << in << ";" << out << endl;

    cout<<strnlen_s(in,256)<<endl;

    int arr[] = {9,8,7,6,5,4,3,2,1,0};

    sort(begin(arr), end(arr));

    for (int i = 0; i < 10; i++) {
        cout << arr[i];
    }
    
    cout << endl;

    vector<int> mass{ 9,3,6,1,4,2,5,8,7,0 };
    sort(mass.begin(), mass.end());

    cout << mass.size();

    for (int j = 0; j<mass.size(); j++)
    {
        cout << mass[j];
    }

}