#include <bits/stdc++.h>
#define ll long long int
#define lp(i, a, b) for (ll i = a; i < b; i++)
#define lpa(i, a, b, x) for (ll i = a; i < b; i += x)
#define pl(i, a, b) for (ll i = a; i >= b; i--)
#define pb push_back
#define ms(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define pll pair<ll, ll>
#define vpll vector<pll>
#define vll vector<ll>
#define vvll vector<vll>
#define ff first
#define ss second
using namespace std;

int main() {
    ll n, d;
    cin >> n >> d;
    vector<vector<int>> v(n, vector<int>(2, 0));
    lp(i, 0, n) {
        cin >> v[i][0] >> v[i][1];
    }
    sort(v.begin(), v.end());
    ll i = 0, j = 0;
    ll maxi = 0;
    ll sum = 0;
    while (j < n) {
        ll diff = v[j][0] - v[i][0];
        while (i <= j && diff >= d) {
            sum -= v[i][1];
            i++;
            if (i <= j) diff = v[j][0] - v[i][0];
        }
        sum += v[j][1];
        maxi = max(sum, maxi);
        j++;
    }
    cout << maxi << endl;
    return 0;
}
