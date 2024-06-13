#include<bits/stdc++.h>
#define ll long long int
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define lpa(i,a,b,x) for(ll i=a;i<b;i+=x)
#define pl(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define ms(a,x) memset(a,x,sizeof(a))
#define all(v) v.begin(),v.end()
#define pll pair<ll,ll>
#define vpll vector<pll>
#define vll vector<ll>
#define vvll vector<vll>
#define ff first
#define ss second
using namespace std;

bool canBake(ll mid, vll &a, vll &b, ll n, ll k) {
    ll needed_magic_powder = 0;
    lp(i, 0, n) {
        ll total_needed = mid * a[i];
        if (total_needed > b[i]) {
            needed_magic_powder += total_needed - b[i];
        }
        if (needed_magic_powder > k) {
            return false;
        }
    }
    return needed_magic_powder <= k;
}

int main() {
    ll n, k;
    cin >> n >> k;
    vll a(n);
    vll b(n);
    lp(i, 0, n) cin >> a[i];
    lp(i, 0, n) cin >> b[i];

    ll l = 0, h = 1e10;
    ll ans = 0;
    while (l <= h) {
        ll mid = l + (h - l) / 2;
        if (canBake(mid, a, b, n, k)) {
            ans = mid;
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
