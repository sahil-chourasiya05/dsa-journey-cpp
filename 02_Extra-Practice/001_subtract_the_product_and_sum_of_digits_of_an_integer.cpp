/*
 * Problem: #1281 Subtract the Product and Sum of Digits of an Integer
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
 * Approach: Extracted each digit using modulo operator, calculated product and sum simultaneously, and returned their difference.
 * Time Complexity: O(log n) | Space Complexity: O(1)
 */

class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul = 1;
        int sum = 0;

        for (int i = n; i > 0; i = i / 10) {
            mul = mul * (i % 10);
            sum = sum + i % 10;
        }

        return mul - sum;
    }
};