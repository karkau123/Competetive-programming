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
int ans = 0;
void dfs(int ind, vector<vector<int>>& adj, vector<int>& iscat, int m, int cats) {
    if (iscat[ind]) {
        cats++;
    } else {
        cats = 0;
    }

    if (cats > m) {
        return;
    }
 
    if (adj[ind].size() == 1 && ind != 1) {
        ans++;
        return;
    }

    for (auto it : adj[ind]) {
        if (!iscat[it]) {
            dfs(it, adj, iscat, m, cats);
        }
    }
    if (iscat[ind] == 1) cats--;
 }

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> iscat(n + 1, 0);
    lp(i, 1, n + 1) {
        cin >> iscat[i];
    }

    vector<vector<int>> adj(n + 1);
    lp(i, 0, n - 1) {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    // Now my graph is ready
    dfs(1, adj, iscat, m, 0);

    cout << ans << endl;
    return 0;
}
