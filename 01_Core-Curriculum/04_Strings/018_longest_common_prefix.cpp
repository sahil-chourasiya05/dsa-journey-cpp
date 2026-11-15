/*
 * Problem: #14 Longest Common Prefix
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/longest-common-prefix/
 * Approach: Sorted the array of strings. The longest common prefix of the whole array must be the common prefix of the first and last strings after sorting.
 * Time Complexity: O(n log n * m) | Space Complexity: O(1)
 */

lass Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string match = "";
        int small;
        sort(strs.begin(), strs.end());
        if (strs[0].length() >= strs[strs.size() - 1].length()) {
            small = strs[strs.size() - 1].length();
        } else {
            small = strs[0].length();
        }
        for (int i = 0; i < small; i++) {
            if (strs[0][i] != strs[strs.size() - 1][i]) {
                break;
            }
            match = match + strs[0][i];
        }

        return match;
    }
};