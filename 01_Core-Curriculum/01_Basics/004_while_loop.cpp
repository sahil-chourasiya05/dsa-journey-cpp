/*
 * Problem: While Loop
 * Platform: GeeksforGeeks (GFG)
 * Link: https://www.geeksforgeeks.org/problems/while-loop/1
 * Approach: Used a while loop to print numbers from 0 to n, handling spaces correctly.
 * Time Complexity: O(n) | Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 0;

    while (i <= n)
    {
        cout << i;
        if (i < n)
        {
            cout << " ";
        }
        i++;
    }

    return 0;
}