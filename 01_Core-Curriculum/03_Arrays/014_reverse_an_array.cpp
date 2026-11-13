/*
 * Problem: 741. Reverse an array
 * Platform: TakeUforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/reverse-an-array
 * Approach: Checked even or odd length, iterated up to middle of the array, and swapped elements of both side of the middle using a temporary variable.
 * Time Complexity: O(n) | Space Complexity: O(1)
 */

class Solution {
   public:
    void reverse(int arr[], int n) {
        int temp;
        int idx = n - 1;
        if (n % 2 == 0) {
            for (int i = 0; i < n / 2; i++) {
                temp = arr[i];
                arr[i] = arr[idx - i];
                arr[idx - i] = temp;
            }
        } else {
            for (int i = 0; i <= n / 2; i++) {
                temp = arr[i];
                arr[i] = arr[idx - i];
                arr[idx - i] = temp;
            }
        }
    }
};
