/*
 * Problem: Nth Fibonacci Number
 * Platform: Coding Ninjas (Code 360)
 * Link: https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156
 * Approach: Used iterative approach with two variables to calculate the nth Fibonacci number.
 * Time Complexity: O(n) | Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int next = 1; 

    if (n == 1 or n == 2)
    {
        cout << 1;
    }
    else
    {
       int a = 1, b = 1;
        for (int i = 3; i <= n; i++)
        {
            next = a+b;
            a=b;
            b=next;
        }
        cout<<next;
    }

    return 0;
}