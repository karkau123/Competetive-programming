#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        string s;
        cin >> s;
        vector<long long> ans(n);
        int i = 0, j = n - 1;
        long long p = 1;
        for (int i = 0; i < n; i++) {
            p = (p * v[i]) % m;
        }
        ans[0] = p;
        for (int x = 1; x < n; x++) {
            if (s[x - 1] == 'L') {
                p = 1;
                for (int k = i + 1; k <= j; k++) {
                    p = (p * v[k]) % m;
                }
                i++;
            } else {
                p = 1;
                for (int k = i; k < j; k++) {
                    p = (p * v[k]) % m;
                }
                j--;
            }
            ans[x] = p;
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
