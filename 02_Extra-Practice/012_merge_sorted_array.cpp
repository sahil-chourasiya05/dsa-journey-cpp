/*
 * Problem: #88 Merge Sorted Array
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/merge-sorted-array/
 * Approach: Merged the two arrays from the end (backwards) to avoid overwriting elements in nums1. Compared elements from the end and placed the larger one at the end of nums1.
 * Time Complexity: O(m + n) | Space Complexity: O(1)
 */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};