#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {2, 3, 5, 6, 7, 8, 9, 11, 15};

    cout << "Prime numbers in the array:\n";

    // Loop through each element in the 2D array
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            bool isPrime = true;

            // Check if the current element is a prime number
            if (arr[r][c] < 2) {
                isPrime = false;  // Numbers less than 2 are not prime
            } else {
                for (int j = 2; j <= arr[r][c] / 2; j++) {
                    if (arr[r][c] % j == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }

            // Print the element if it is prime
            if (isPrime) {
                cout << arr[r][c] << " ";
            }
        }
    }

    return 0;
}
