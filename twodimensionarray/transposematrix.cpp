#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {6, 2, 1, 5, 9, 8, 4, 7, 3};

    // Display the original matrix
    cout << "Original matrix:\n";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cout << arr[r][c] << "\t";
        }
        cout << "\n";
    }

    // Transpose the matrix
    for (int r = 0; r < 3; r++) {
        for (int c = r + 1; c < 3; c++) {
            int temp = arr[r][c];
            arr[r][c] = arr[c][r];
            arr[c][r] = temp;
        }
    }

    // Display the transposed matrix
    cout << "\nTransposed matrix:\n";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cout << arr[r][c] << "\t";
        }
        cout << "\n";
    }

    return 0;
}