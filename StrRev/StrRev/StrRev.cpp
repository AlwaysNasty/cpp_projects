#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "This is a test of a programm";
    char* start, * end;
    int len;
    char temp;

    cout << "Start: " << str << "\n";

    len = strlen(str);

    start = str;
    end = &str[len - 1];

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    cout << "Reversed: " << str << "\n";
}

