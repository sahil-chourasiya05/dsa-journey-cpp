/*
 * Problem: #231 Power of Two
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/power-of-two/
 * Approach: Used bit manipulation (n & (n-1)) to check if the number has exactly one set bit.
 * Time Complexity: O(1) | Space Complexity: O(1)
 */

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;
        return (n & (n - 1)) == 0;
    }
};