/*
 * Problem: #344 Reverse String
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/reverse-string/
 * Approach: Checked even/odd length, iterated up to the middle, and swapped elements from both ends using a temporary variable.
 * Time Complexity: O(n) | Space Complexity: O(1)
 */

class Solution {
public:
    void reverseString(vector<char>& s) {
        int temp;
        if (s.size() % 2 == 0) {
            for (int i = 0; i < s.size() / 2; i++) {
                temp = s[i];
                s[i] = s[s.size() - 1 - i];
                s[s.size() - 1 - i] = temp;
            }
        } else {
            for (int i = 0; i <= s.size() / 2; i++) {
                temp = s[i];
                s[i] = s[s.size() - 1 - i];
                s[s.size() - 1 - i] = temp;
            }
        }
    }
};