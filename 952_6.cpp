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
ll health;
bool is_possible( vector<long long>& attack_damage,  vector<long long>& attack_cooldown, long long val) {
    long long total_damage = 0;
    for (int i = 0; i < attack_damage.size(); i++) {
        long long current_damage = ((val / attack_cooldown[i]) + 1) * attack_damage[i];
        total_damage += current_damage;
        if (total_damage >= health) return true;
    }
    return total_damage >= health;
}
int main() {
    int t;
     cin >> t;
    while (t--) {
        ll h, n;
         cin >> h >> n;
        health = h;
         vector<ll> a(n), c(n);
        for (int i = 0; i < n; i++) {
             cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
             cin >> c[i];
        }
        ll lo = 0, hi = 1e12;
        while (hi - lo > 1) {
            ll mid = (lo + hi) / 2;
            if (is_possible(a, c, mid)) {
                hi = mid;
            } else {
                lo = mid;
            }
        }
        if (is_possible(a, c, lo)) {
             cout << lo + 1 <<  endl;
        } else {
             cout << hi + 1 <<  endl;
        }
    }
    return 0;
}
