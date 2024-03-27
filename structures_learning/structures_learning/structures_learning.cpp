#include "structures_learning.h"

struct page {
    int index;
    int sz;
    char* data;
};

int main() {
    std::unordered_map<int, std::string> myMap;
    myMap[0] = "Zero";
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";

    // Поиск элемента по ключу
    int keyToFind = 2;
    auto it = myMap.find(keyToFind);
    if (it != myMap.end()) {
        std::cout << "value of a key " << keyToFind << ": " << it->second << std::endl;
    }
    else {
        std::cout << "element with key " << keyToFind << " not found." << std::endl;
    }

    for (const auto& pair : myMap) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
    std::cout << "\n";
    std::map<int, std::string> sortedMap(myMap.begin(), myMap.end());

    for (const auto& pair : sortedMap) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }

    std::vector<std::string> dictionary{ "zero", "one", "two", "three", "four", "five", "six" };
    std::unordered_map<int, std::string> um;

    for (int i = 0; i < dictionary.size(); ++i)
        um[i] = dictionary[i];

    std::cout << '\n';

    for (const auto& pair : um) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }

    std::cout << '\n';

    std::set<int> numbers;

    std::vector<int> numsToFill{ 6,4,8,2,45,6,8,23,5,7,2,1,1,7,8,6,5 };

    for (int elem : numsToFill)
        std::cout << elem << " ";

    std::cout << "\n";
    std::cout << "size of numsToFill: " << numsToFill.size() << std::endl;

    for (int& i : numsToFill)
        numbers.insert(i);


    for (int elem : numbers)
        std::cout << elem << " ";

    std::cout << std::endl << "size of numbers: " << numbers.size() << "\n";

    std::string a{ "hello, " };
    std::string b{ "world" };
    std::cout << a + b << "\n";

    std::unordered_map<std::string, int> persons;

    persons.insert(std::make_pair("Artem", 10));
    persons.insert(std::make_pair("Maksim", 20));
    persons.insert(std::make_pair("Sasha", 30));

    for (const auto& pairs : persons)
        std::cout << pairs.first << " is " << pairs.second << " years.\n";

    return 0;
}

