#include <iostream>
#include <cstdlib>
using namespace std;
#include <array>
void print (const int *const arr, size_t size) {
    for (int i {0}; i < size; i++)
        cout << *(arr + i) << endl;
    cout << endl;
}

int *apply_all (const int *const arr1, size_t size1, const int *const arr2, size_t size2) {
    int *arr3 = new int [size1*size2];
    int k {0};
    for (size_t i = 0; i < size2; ++i)
    {
        for (size_t j = 0; j < size1; ++j)
        {
            arr3[k] = arr1[j] * arr2[i];
            ++k;
        }
    }
    return arr3;
}
int main () {
    int A [] {1,2,3,4,5};
    int B [] {10,20,30};
    print(A,5);
    print(B,3);
    int *result = apply_all(A,5,B,3);
    print(result,15);
    delete [] result;
    return 0;
}