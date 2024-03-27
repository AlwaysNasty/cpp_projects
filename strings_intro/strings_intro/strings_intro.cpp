#include <iostream>
#include <cstring>
#include <string>
#include <vector>

int strLength(const char* fstr) {
    int counter = 0;

    for (int i = 0;; i++)
    {
        if (fstr[i] == '\0')
            break;
        counter++;
    }
    return counter;
}
int main()
{
    char symbols[255] = "hello, world!";
    std::cout << symbols<<"\n";

    char error[]{ 'e','r','r','o','r', '\0'};//выводится мусор, если не поставить \0
    std::cout << error<<"\n";


    //строки и указатели
    char str1[] = "hello!";
    const char* str = str1;
    std::cout << str;

    const char* strArr[] = { "hello,", "world.", "my", "name","is","artem" };
    for (int i = 0; i < sizeof(strArr)/sizeof(strArr[0]); i++)
    {
        std::cout << strArr[i] << " ";
    }
    std::cout << "\n";

    const char* fstr = "Foo test";
    std::cout << strLength(fstr);
}

