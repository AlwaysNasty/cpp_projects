#include <iostream>
#include <string>
#include <vector>


void localisation() {
    setlocale(LC_ALL, "Russian");
}

class Character {
public:
    std::string name;
    int age;
    std::string job;

    void printData() {
        std::cout << "name of the character is " << name << std::endl;
        std::cout << name << " is " << age << " years old" << std::endl;
        std::cout << name << " is a " << job << std::endl;
    }
};


void prints(std::string str) {
    std::cout << str;
}

template <typename T>
void printv(std::vector<T>& v) {
    std::cout << "[ ";

    for (auto& element : v) {
        std::cout << element << ", ";
    }

    std::cout << "]" << std::endl;
}



int main() {
    localisation();
    
    prints("artem\n");

    std::vector<int> v;

    for (auto i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    printv(v);

    const int SIZE = 5;
    int arr[SIZE] = { 5,4,3,2,1 };

    for (const int i : arr) {
        std::cout << i;
    }
    std::cout << std::endl;
    for (int j = 0; j < SIZE; ++j) {
        std::cout << arr[j];
    }
    return 0;
}

/*Character boss;

    cout << "type in the name of the character: " << endl;
    getline(cin, boss.name);

    cout << "type in the job of the character: " << endl;
    getline(cin, boss.job);

    cout << "type in the age of the character: " << endl;
    cin >> boss.age;

    cout << endl;

    boss.printData();

    vector<int> v = { 1,2,3,4,5,6,7 };

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }

    v.push_back(8);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }*/