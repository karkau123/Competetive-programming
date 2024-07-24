#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;     
        vector<int> arr1(n);
        for (int i = 0; i < n; ++i) {
            arr1[i] = i + 1;
        }
        vector<int> arr2(n);
        for (int i = 0; i < n; ++i) {
            arr2[i] = n - i;
        }

       
        for (int i = 0; i < n; ++i) {
            cout << arr1[i] << " ";
        }
        cout << endl ;
        for (int i = 0; i < n; ++i) {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
