/*
 * Problem: #485 Max Consecutive Ones
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/max-consecutive-ones/
 * Approach: Iterated through the array, incrementing the current count for 1s, updating the max count, and resetting the current count when a 0 is encountered.
 * Time Complexity: O(n) | Space Complexity: O(1)
 */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentCount = 0;
        int maxCount = 0;

        for (int num = 0; num < nums.size(); num++) {
            if (nums[num] == 1) {
                currentCount++;
                if (currentCount > maxCount) {
                    maxCount = currentCount;
                }
            } else {
                currentCount = 0;
            }
        }

        return maxCount;
    }
};