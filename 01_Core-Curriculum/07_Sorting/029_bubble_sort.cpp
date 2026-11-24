/*
 * Problem: 467. Bubble Sort
 * Platform: Takeuforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/bubble-sort
 * Approach: Repeatedly swapped adjacent elements if they were in the wrong order, pushing the largest element to the end in each pass.
 * Time Complexity: O(N^2) | Space Complexity: O(1)
 */

class Solution {
   public:
    vector<int> bubbleSort(vector<int>& nums) {
        for (int i = nums.size() - 1; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }

        return nums;
    }
};
