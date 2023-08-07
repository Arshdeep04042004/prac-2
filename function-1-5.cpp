#include <iostream>

void add_matrices(int array1[4][4], int array2[4][4], int result[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }
}

void print_matrix(int array[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

