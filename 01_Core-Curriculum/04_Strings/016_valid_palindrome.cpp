/*
 * Problem: #125 Valid Palindrome
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/valid-palindrome/
 * Approach: Filtered alphanumeric characters into a new string, converted to lowercase, and used two index variables (left and right) to compare characters from both ends.
 * Time Complexity: O(n) | Space Complexity: O(n)
 */

class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
                if (c >= 'A' && c <= 'Z') {
                    c = c + 32;
                }
                result += c;
            }
        }
        int left = 0, right = result.length() - 1;
        while (left <= right) {
            if (result[left] != result[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};