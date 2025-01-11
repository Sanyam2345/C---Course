// #include <iostream>
// using namespace std;
//
// int *create_array (size_t size, int init_value = 0) {
//     int *new_storage {nullptr};
//     new_storage = new int [size];
//     for (size_t i {0}; i < size; i++)
//         *(new_storage + i) = init_value + i;
//     return new_storage;
// }
//
// int main () {
//     int *my_array;
//     my_array = create_array(5,10);
//     for (size_t i = 0; i < 5; i++)
//         cout << my_array[i] << endl;
//     delete []my_array;
//     return 0;
// }