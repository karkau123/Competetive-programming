#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll result = k + (k - 1) / (n - 1);
        cout << result << endl;
    }
    return 0;
}
