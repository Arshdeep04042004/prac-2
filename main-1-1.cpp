// main-1-1.cpp
#include <iostream>

int sum_diagonal(int array[4][4]);
int main() {
    int array[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int result = sum_diagonal(array);
    std::cout << "Sum of the main diagonal: " << result << std::endl;

    return 0;
}
