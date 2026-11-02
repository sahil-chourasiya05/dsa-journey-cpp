/*
 * Problem: Switch Statement
 * Platform: GeeksforGeeks (GFG)
 * Link: https://www.geeksforgeeks.org/problems/switch-statement/1
 * Approach: Used switch-case to map numbers 1, 2, 3 to specific traffic light actions and default for others.
 * Time Complexity: O(1) | Space Complexity: O(1)
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    switch(n){
        case 1:
            cout<<"Stop";
            break;
        case 2:
            cout<<"Standby";
            break;
        case 3:
            cout<<"Go";
            break;
        default:
            cout<<"Unknown";
    }

    return 0;
}