/*
 * Problem: #9 Palindrome Number
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/palindrome-number/
 * Approach: Reversed the number using a loop and compared it with the original number. Returned false early for negative numbers.
 * Time Complexity: O(log x) | Space Complexity: O(1)
 */

class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false;
        }
        
        long long rev = 0;

        for (int i = x; i > 0 or i < 0; i = i / 10) {
            int digit = i % 10;
            rev = rev * 10 + digit;
        }
        return rev==x;
    }
};