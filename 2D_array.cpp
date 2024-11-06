#include <iostream>
using namespace std;

void sum(int** a, int m , int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
    }
    for (int line = 0; line < m; line++) { 
        int start_row = line, start_col = 0; 
        while (start_row >= 0 && start_col < n) { 
            sum += a[start_row][start_col]; 
            start_row--; 
            start_col++; 
        } 
    }
    for (int line = 1; line < m; line++) {
        int start_row = m - 1;
        int start_col = line;
        while (start_row >= 0 && start_col < n) {
            sum += a[start_row][start_col];
            start_row--;
            start_col++;
        }
    }
}

void rotate(int** a, int m, int n) {
    // Clockwise
    int res[m][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[j][n - i - 1] = a[i][j];
        }
    }

    // Counter-clockwise
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[n - j - 1][i] = a[i][j];
        }
    }
}