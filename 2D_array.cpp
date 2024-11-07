#include <iostream>
using namespace std;

void sum(int** a, int m , int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
    }

    // Diagonal
    for (int row = 0; row < m; row++) { 
        int start_row = row, start_col = 0; 
        while (start_row >= 0 && start_col < n) { 
            sum += a[start_row][start_col]; 
            start_row--; 
            start_col++; 
        } 
    }
    for (int col = 1; col < n; col++) {
        int start_row = m - 1;
        int start_col = col;
        while (start_row >= 0 && start_col < n) {
            sum += a[start_row][start_col];
            start_row--;
            start_col++;
        }
    }

    // Anti-diagonal
    for (int col = 0; col < n; col++) {
        int start_row = 0, start_col = col;
        while (start_row < m && start_col >= 0) {
            sum += a[start_row][start_col];
            start_row++;
            start_col--;
        }
    }
    for (int row = 1; row < m; row++) {
        int start_row = row, start_col = n - 1;
        while (start_row < m && start_col >= 0) {
            sum += a[start_row][start_col];
            start_row++;
            start_col--;
        }
    }
}

void rotate(int a[][3], int m, int n) {
    int res[3][3];

    // Clockwise
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            res[j][n - i - 1] = a[i][j];
        }
    }

    // Copy from a to res
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            a[i][j] = res[i][j]; 
            } 
    }

    // Counter-clockwise
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            res[n - j - 1][i] = a[i][j];
        }
    }
}

int main() {
    const int ROW = 3; 
    const int COL = 3; 
    int matrix[ROW][COL] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    rotate(matrix, ROW, COL); 
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}