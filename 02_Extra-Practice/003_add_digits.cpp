/*
 * Problem: #258 Add Digits
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/add-digits/
 * Approach: Used a loop to repeatedly sum the digits until a single digit is obtained.
 * Time Complexity: O(log num) | Space Complexity: O(1)
 */

class Solution {
public:
    int addDigits(int num) {
        int sum = 0;

        if (num / 10 == 0) {
            return num;
        }

        for (int i = num; i > 9; i = sum) {
            sum = 0;
            for (int j = i; j > 0; j = j / 10) {
                if (j / 10 != 0) {
                    sum = sum + j % 10;
                } else {
                    sum = sum + j;
                    break;
                }
            }
        }

        return sum;
    }
};