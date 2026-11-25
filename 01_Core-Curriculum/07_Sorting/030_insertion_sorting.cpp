/*
 * Problem: 1013. Insertion Sorting
 * Platform: Takeuforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/insertion-sorting
 * Approach: Iterated from the second element, stored it as key, and shifted larger elements one position ahead until the correct position for the key was found.
 * Time Complexity: O(N^2) | Space Complexity: O(1)
 */

class Solution {
   public:
    vector<int> insertionSort(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            int key = nums[i];
            int j = i - 1;
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
        }

        return nums;
    }
};
