/*
 * Problem: #242 Valid Anagram
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/valid-anagram/
 * Approach: Used an array to count characters appearance in the first string and subtracted the count for the second string. Finally, checked if all counts are zero.
 * Time Complexity: O(n) | Space Complexity: O(1)
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        vector<int> a(26, 0);

        for (int i = 0; i < s.size(); i++) {
            a[s[i] - 97] += 1;
            a[t[i] - 97] -= 1;
        }
        for (int k = 0; k < 26; k++) {
            if (a[k] != 0) {
                return false;
            }
        }

        return true;
    }
};