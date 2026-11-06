/*
 * Problem: #7 Reverse Integer
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/reverse-integer/
 * Approach: Used a loop to extract digits and build the reversed number. Checked for integer overflow before multiplying by 10.
 * Time Complexity: O(log x) | Space Complexity: O(1)
 */

class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        for (int i = x; i > 0 or i < 0; i = i / 10) {
            int digit = i % 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                return 0;
            rev = rev * 10 + digit;
        }
        return rev;
    }
};