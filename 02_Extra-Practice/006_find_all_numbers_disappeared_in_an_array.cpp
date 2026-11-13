/*
 * Problem: #448 Find All Numbers Disappeared in an Array
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 * Approach: Used the array itself to mark visited numbers by negating the value at the corresponding index. Collected the indices that remained positive.
 * Time Complexity: O(n) | Space Complexity: O(1)
 */

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};