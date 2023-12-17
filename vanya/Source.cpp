#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    getline(cin, s1);

    for (int i = 0; i < s1.size(); i++) {
        if ((s1[i] == 'o') && (s1[i - 1] == 'n')) {
            char temp = s1[i - 1];
            s1[i - 1] = s1[i];
            s1[i] = temp;
        }
    }

    for (char elem : s1)
        cout << elem;   
}