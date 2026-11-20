/*
 * Problem: 965. Sum of Digits in a Given Number
 * Platform: Takeuforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/sum-of-digits-in-a-given-number
 * Approach: Used a loop to calculate the sum of digits, then recursively called the function with the sum until a single digit is obtained.
 * Time Complexity: O(log n) | Space Complexity: O(log n)
 */

class Solution {
   public:
    int addDigits(int num) {
        if (num / 10 == 0) {
            return num;
        }

        int sum = 0;

        for (int i = num; i > 0; i /= 10) {
            sum += i % 10;
        }

        return addDigits(sum);
    }
};