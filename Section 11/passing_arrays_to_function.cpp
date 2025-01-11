#include <iostream>
using namespace std;

void print_array(int [], size_t);

int main() {
    int arr[5] {1,2,3,4,5};
    print_array(arr,5);
return 0;
}

void print_array(int numbers[], size_t size) {
    for (size_t i {0}; i < size; ++i)
        cout << numbers[i] << endl;
}
