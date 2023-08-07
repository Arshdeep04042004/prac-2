#include <iostream>

void print_scaled_matrix(int array[4][4], int scale) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << array[i][j] * scale;
            if (j < 3) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

