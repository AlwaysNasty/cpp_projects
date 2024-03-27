#include <iostream>

#define DEBUG //если закомментировать, то ifdef не будет работать(так как не определен DEBUG)
#define NDEBUG
#define CONSTANT 5

int main()
{
#ifdef DEBUG
	std::cout << "cout 1\n";
#else
	std::cout << "cout 2\n";//видно, если DEBUG не определен
#endif // DEBUG


#ifndef NDEBUG
	std::cout << "cout 3\n";
#else
	std::cout << "cout 4\n";
#endif // !NDEBUG


#if CONSTANT > 4
	std::cout << "constant - true\n";
#elif
	std::cout << "constant - false\n";	
#endif // CONSTANT > 4

}
