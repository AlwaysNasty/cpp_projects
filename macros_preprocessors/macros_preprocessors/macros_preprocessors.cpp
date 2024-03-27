#include <iostream>
#include <vector>
#include <algorithm>

#define PI 3.1415
#define all v.begin(), v.end()

#define FOO(x,y)((x)*(y))

int main()
{
    std::cout << PI<<"\n";

    std::vector<int> v{9, 8, 7, 6, 5, 4};
    std::sort(all);

    for (auto elem : v)
        std::cout << elem;
    std::cout << "\n";

    std::cout << FOO(3, 5);
}
