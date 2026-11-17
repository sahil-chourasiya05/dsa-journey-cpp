/*
 * Problem: #342 Power of Four
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/power-of-four/
 * Approach: Used recursion, checking if n is divisible by 4 and repeatedly dividing until base cases are met.
 * Time Complexity: O(log n) | Space Complexity: O(log n)
 */

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) {
            return true;
        }
        if (n <= 0 || n % 4 != 0) {
            return false;
        }
        return isPowerOfFour(n / 4);
    }
};