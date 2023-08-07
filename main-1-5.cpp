int main() {
    int matrix1[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int matrix2[4][4] = {
        {4, 3, 2, 1},
        {8, 7, 6, 5},
        {12, 11, 10, 9},
        {16, 15, 14, 13}
    };

    int result[4][4];

    add_matrices(matrix1, matrix2, result);
    print_matrix(result);

    return 0;
}
