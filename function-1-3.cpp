// function 1-3.cpp
#include <iostream>
#include <string>

void count_digits(int array[4][4]) {
    int count[10] = {0}; // 

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int digit = array[i][j];
            count[digit]++;
        }
    }

        for (int digit = 0; digit < 10; digit++) {
        std::cout << digit << ":" << count[digit];
        if (digit < 9) {
            std::cout << ";";
        }
    }
    std::cout << std::endl;
}

