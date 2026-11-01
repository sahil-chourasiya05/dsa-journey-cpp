/*
 * Problem: Decision Making
 * Platform: GeeksforGeeks (GFG)
 * Link: https://www.geeksforgeeks.org/problems/decision-making/1
 * Approach: Used simple if-else conditions to compare n and m.
 * Time Complexity: O(1) | Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if(n<m){
        cout<<"less";
    }else if(n==m){
        cout<<"equal";
    }
    else{
        cout<<"greater";
    }
    
    return 0;
}