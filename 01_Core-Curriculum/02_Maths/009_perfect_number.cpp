/*
 * Problem: #507 Perfect Number
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/perfect-number/
 * Approach: Calculated the sum of proper divisors by iterating up to sqrt(num) for better time complexity.
 * Time Complexity: O(sqrt(num)) | Space Complexity: O(1)
 */

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1)
            return false;

        int sum = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                if (i != num / i) {
                    sum += num / i;
                }
            }
        }

        return num == sum;
    }
};