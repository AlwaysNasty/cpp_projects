#include <iostream>
#include <cmath>

int main(){
    setlocale(LC_ALL, "ru");
    srand(time(nullptr));

    int arr[5];

    for (int i = 0; i < sizeof(arr)/sizeof(arr[1]); i++) {
        arr[i] = rand();
        std::cout<<arr[i]<<std::endl;
    }
    
    return 0;
}