/*
 * Problem: 1020. Merge Sorting
 * Platform: Takeuforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/merge-sorting
 * Approach: Used Divide and Conquer. Recursively divided the array into halves, sorted them, and merged the sorted halves using a temporary array.
 * Time Complexity: O(N log N) | Space Complexity: O(N)
 */

class Solution {
   public:
    void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> temp;
        int i = left, j = mid + 1;
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }
        while (j <= right) {
            temp.push_back(nums[j]);
            j++;
        }
        for (int k = 0; k < static_cast<int>(temp.size()); k++) {
            nums[left + k] = temp[k];
        }
    }
    void sort(vector<int>& nums, int low, int high) {
        if (low >= high) {
            return;
        }
        sort(nums, low, (low + high) / 2);
        sort(nums, (low + high) / 2 + 1, high);
        merge(nums, low, (low + high) / 2, high);
    }
    vector<int> mergeSort(vector<int>& nums) {
        sort(nums, 0, nums.size() - 1);
        return nums;
    }
};
