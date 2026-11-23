/*
 * Problem: 742. Second Highest Occurring Element
 * Platform: Takeuforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/second-highest-occurring-element
 * Approach: Used a map to count frequencies. Then iterated through the map to find the maximum and second maximum frequencies, also handling the tie-breaker for the smallest element.
 * Time Complexity: O(N log N) | Space Complexity: O(N)
 */

class Solution {
   public:
    int secondMostFrequentElement(vector<int>& nums) {
        map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }

        int maxFreq = 0;
        int secondMaxFreq = 0;
        int maxEle = -1;
        int secondMaxEle = -1;

        for (const auto& [ele, freq] : mp) {
            if (freq > maxFreq) {
                secondMaxFreq = maxFreq;
                secondMaxEle = maxEle;
                maxFreq = freq;
                maxEle = ele;
            } else if (freq < maxFreq && freq > secondMaxFreq) {
                secondMaxFreq = freq;
                secondMaxEle = ele;
            }
        }

        return (secondMaxFreq == 0) ? -1 : secondMaxEle;
    }
};