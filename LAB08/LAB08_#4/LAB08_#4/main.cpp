////
////  main.cpp
////  LAB08_#4
////
////  Created by Jungmin Kim on 2023/05/10.
////
//
#include <iostream>
//A.
int NumPaths (int row, int col, int n) {
    if ((row ==n) || (col == n))
        return 1;
    else
        return NumPaths(row+1, col, n) + NumPaths(row, col+1, n);
}
//B.
int MAX_ROWS = 5;
int MAX_COLS = 5;

int NumPaths_C ( int row, int col, int n ) {
    int mat[MAX_ROWS][MAX_COLS];
    memset(mat, -1, sizeof(mat));
    if(mat[row][col] == -1) {
        mat[row][col] = NumPaths(row + 1, col, n) + NumPaths(row, col + 1, n);
    }
    return mat[row][col];
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << NumPaths(1, 1, 5) << std::endl;
    std::cout << NumPaths_C(1, 1, 5) << std::endl;
}



