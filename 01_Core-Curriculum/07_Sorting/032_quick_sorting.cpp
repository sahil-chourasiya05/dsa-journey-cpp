/*
 * Problem: 1024. Quick Sorting
 * Platform: Takeuforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/quick-sorting
 * Approach: Used Divide and Conquer with a partition function. Selected the first element as pivot, partitioned the array such that smaller elements are on the left and larger on the right, then recursively sorted the sub-arrays.
 * Time Complexity: O(N log N) average | O(N^2) worst | Space Complexity: O(log N)
 */

class Solution {
   public:
    int part(vector<int>& nums, int low, int high) {
        int i = low, j = high;
        while (i < j) {
            while (nums[i] <= nums[low] && i < high) {
                i++;
            }
            while (nums[j] > nums[low] && j > low) {
                j--;
            }
            if (i < j) {
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[low], nums[j]);
        return j;
    }
    void qs(vector<int>& nums, int low, int high) {
        if (low < high) {
            int p = part(nums, low, high);
            qs(nums, low, p - 1);
            qs(nums, p + 1, high);
        }
    }
    vector<int> quickSort(vector<int>& nums) {
        qs(nums, 0, nums.size() - 1);
        return nums;
    }
};
