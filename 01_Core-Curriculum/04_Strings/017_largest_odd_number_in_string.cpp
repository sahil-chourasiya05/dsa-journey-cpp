/*
 * Problem: #1903 Largest Odd Number in String
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/largest-odd-number-in-string/
 * Approach: Iterated from the end of the string, and returned the substring up to the first odd digit found.
 * Time Complexity: O(n) | Space Complexity: O(1)
 */

class Solution {
public:
    string largestOddNumber(string num) {
        for (long long i = num.length() - 1; i >= 0; i--) {
            long long c = num[i] - '0';
            if (c % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};