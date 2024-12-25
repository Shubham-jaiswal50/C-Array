#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, 6, 7, 21, 12,11};  // Array of numbers
    int size = sizeof(arr) / sizeof(arr[0]);  // Size of the array

    // Loop through each element in the array
    for(int i = 0; i < size; i++) { 
        int count = 0;  // Reset count for each number 

        // Check if the number is greater than 1
        if(arr[i] > 1) {
            // Check divisibility starting from 2 to arr[i] - 1
            for(int j = 2; j  <= arr[i]-1; j++) {
                if(arr[i] % j == 0) {
                    count++;
                    break;  // No need to check further if a divisor is found
                }
            }

            // If count is still 0, it's a prime number
            if(count == 0) {
                cout << arr[i] << "\n";  // Print the prime number
            }
        }
    }

    return 0;
}

