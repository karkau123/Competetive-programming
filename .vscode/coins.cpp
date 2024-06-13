#include <bits/stdc++.h> 
using namespace std; 
using ll = long long int; 

void maxCoins() { 
    int n; 
    cin >> n; 
    string path; 
    cin >> path; 
    int collectedCoins = 0; 
    int position = 0; 
    while (position < n) { 
        if (path[position] == '.') { 
            position++; 
        } else if (path[position] == '@') { 
            collectedCoins++; 
            position++; 
        } else { 
            if (path[position + 1] == '*') { 
                break; 
            } else { 
                position++; 
            } 
        } 
    } 
    cout << collectedCoins << endl; 
} 

int main() { 
    int testCases = 1; 
    cin >> testCases; 
    while (testCases--) { 
        maxCoins(); 
    } 
    return 0; 
} 
