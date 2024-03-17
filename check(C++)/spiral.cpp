#include <iostream>
using namespace std;

void trverse(int a[][100], int n, int m, int start, int end) {
    // base case
    if (start > end || n == 0 || m == 0)
        return;

    // processing
    for (int i = start; i <= end; i++) {
        cout << a[i][start] << ", ";
    }
    for (int j = start + 1; j < m; j++) {
        cout << a[end][j] << ", ";
    }
    for (int i = end - 1; i >= start; i--) {
        cout << a[i][m - 1] << ", ";
    }
    for (int j = m - 2; j > start; j--) {
        cout << a[start][j] << ", ";
    }

    // recursive case
    trverse(a, n - 1, m - 1, start + 1, end - 1);
}

int main() {
    int arr[10][10] = {0};
    int row, col;
    int num = 1;
    cin >> row >> col;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            arr[i][j] = num++;
    }

    trverse(arr, row, col, 0, row - 1);

    return 0;
}
