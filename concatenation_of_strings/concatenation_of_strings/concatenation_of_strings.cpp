#include <bits/bits-stdc++.h>


int main()
{
	char result[255]{};
	char str1[255]{ "hello" };
	char str2[255]{ "world" };

	strcat_s(result, str1);
	strcat_s(result, str2);

	std::cout << result << "\t" << str1 << "\t" << str2<<"\n";

	std::string st1 = "hello";
	std::string st2 = "world";
	std::cout << st1 + " " + st2;
}
