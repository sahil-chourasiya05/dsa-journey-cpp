/*
 * Problem: Swap using References in C++
 * Platform: GeeksforGeeks (GFG)
 * Link: https://www.geeksforgeeks.org/problems/pass-by-reference-and-value/1
 * Approach: Used a temporary variable and pass-by-reference (&a, &b) to swap the original values.
 * Time Complexity: O(1) | Space Complexity: O(1)
 */

class Solution{
public:
    void swapValues(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
};