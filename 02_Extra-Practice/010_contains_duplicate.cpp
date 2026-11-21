/*
 * Problem: #217 Contains Duplicate
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/contains-duplicate/
 * Approach: Sorted the array first. Then iterated through the array and checked if any adjacent elements are equal.
 * Time Complexity: O(n log n) | Space Complexity: O(1)
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
};