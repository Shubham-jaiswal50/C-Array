#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, 4, 3, 2, 9};
    int s = sizeof(arr) / sizeof(arr[0]);
     "Original array:\n";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int temp;
    
    // Bubble Sort to arrange the array in ascending order
    for (int i = 0; i < s - 1; i++) {          // Loop through each element
        for (int j = 0; j < s - i - 1; j++) {   // Inner loop for comparison
            if (arr[j] > arr[j + 1]) {          // Compare adjacent elements
                // Swap if the current element is greater than the next
                temp = arr[j];  //temp=8
                arr[j] = arr[j + 1];// 8=4
                arr[j + 1] = temp;  //4=8
            }
        }
    }

    cout << "Array in ascending or  der:\n";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
     