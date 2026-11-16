/*
 * Problem: #326 Power of Three
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/power-of-three/
 * Approach: Used recursion, checking if n is divisible by 3 and repeatedly dividing until base cases are met.
 * Time Complexity: O(log n) | Space Complexity: O(log n)
 */

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;
        if (n <= 0 || n % 3 != 0) return false;
        return isPowerOfThree(n / 3);
    }
};