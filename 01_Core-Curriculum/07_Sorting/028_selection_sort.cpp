/*
 * Problem: 1031. Selection Sort
 * Platform: Takeuforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/selection-sort
 * Approach: Repeatedly found the minimum element from the unsorted part and swapped it with the first unsorted element.
 * Time Complexity: O(N^2) | Space Complexity: O(1)
 */

class Solution {
   public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;

            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }

            if (minIndex != i) {
                swap(nums[i], nums[minIndex]);
            }
        }

        return nums;
    }
};
