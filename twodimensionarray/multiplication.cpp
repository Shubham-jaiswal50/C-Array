#include <iostream>
using namespace std;

int main() {
    int arr1[2][3];  // 2x3 matrix
    int arr2[3][3];  // 3x3 matrix
    int result[2][3] = {0};  // 2x3 result matrix, initialized to zero

    cout << "Enter values for the first array (2x3):\n";
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            cin >> arr1[r][c];
        }
    }

    cout << "Enter values for the second array (3x3):\n";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cin >> arr2[r][c];
        }
    }

    // Perform matrix multiplication: result[i][j] = sum(arr1[i][k] * arr2[k][j])
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;  // Initialize result element to 0
            for (int k = 0; k < 3; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Display the result matrix
    cout << "Result of matrix multiplication (2x3):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
