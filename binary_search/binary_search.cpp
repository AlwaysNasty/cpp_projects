#include <cstdlib>
#include <iostream>
#include <vector>

int binarySearch(const std::vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid; // Элемент найден, возвращаем его индекс.
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // Искать справа от середины.
        }
        else
        {
            right = mid - 1; // Искать слева от середины.
        }
    }

    return -1; // Элемент не найден.
}

int main()
{
    setlocale(LC_ALL, "Russian");

    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int target = 5;
    int result = binarySearch(arr, target);

    if (result != -1)
    {
        std::cout << "Элемент " << target << " найден по индексу " << result << std::endl;
    }
    else
    {
        std::cout << "Элемент " << target << " не найден." << std::endl;
    }

    return 0;
}
