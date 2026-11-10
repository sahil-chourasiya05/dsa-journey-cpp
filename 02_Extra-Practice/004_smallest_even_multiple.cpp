/*
 * Problem: #2413 Smallest Even Multiple
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/smallest-even-multiple/
 * Approach: If n is odd, return 2*n, else return n.
 * Time Complexity: O(1) | Space Complexity: O(1)
 */

class Solution {
public:
    int smallestEvenMultiple(int n) { return n % 2 ? 2 * n : n; }
};