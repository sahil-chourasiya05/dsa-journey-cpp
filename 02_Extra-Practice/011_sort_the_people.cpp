/*
 * Problem: #2418 Sort the People
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/sort-the-people/
 * Approach: Used Selection Sort to sort the heights in descending order while simultaneously swapping the corresponding names to keep them in sync.
 * Time Complexity: O(N^2) | Space Complexity: O(1)
 */


class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
        int maxIndex;

        for (int i = 0; i < n - 1; i++) {
            maxIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (heights[j] > heights[maxIndex]) {
                    maxIndex = j;
                }
            }

            if (i != maxIndex) {
                swap(heights[i], heights[maxIndex]);
                swap(names[i], names[maxIndex]);
            }
        }

        return names;
    }
};