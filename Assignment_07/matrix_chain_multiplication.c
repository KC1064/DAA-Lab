#include <stdio.h>
#include<limits.h>

void printOptimalParenthesis(int i, int j, int n, int bracket[n][n], char name[]) {
    if (i == j) {
        printf("%c", name[i-1]);
        return;
    }

    printf("(");
    printOptimalParenthesis(i, bracket[i][j], n, bracket, name);
    printOptimalParenthesis(bracket[i][j] + 1, j, n, bracket, name);

    printf(")");
}

int matrixChainMultiplication(int p[], int n) {
    int m[n][n];
    int bracket[n][n]; 

    for (int i = 1; i < n; i++) {
        m[i][i] = 0;
    }
    for (int L = 2; L < n; L++) {
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    bracket[i][j] = k; 
                }
            }
        }
    }
    char name[n];
    for (int i = 0; i < n - 1; i++) {
        name[i] = 'A' + i;
    }
    printf("Optimal Parenthesization is : ");
    printOptimalParenthesis(1, n-1, n, bracket, name);
    printf("\n");
    return m[1][n - 1];
}

int main() {
    int arr[] = {40, 20, 30, 10, 30};  
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Minimum number of multiplications is %d\n", matrixChainMultiplication(arr, size));
    return 0;
}

