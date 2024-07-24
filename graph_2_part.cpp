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

int maxi = 0;

void dfs(int ind, vector<vector<int>>& adj, vector<int>& vis, int cnt) {
    vis[ind] = 1;
    cnt++;
    maxi = max(maxi, cnt);
    for (auto it : adj[ind]) {
        if (!vis[it]) {
            dfs(it, adj, vis, cnt);
        }
    }
    cnt--;
    vis[ind] = 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> inp(n + 1);
    lp(i, 1, n + 1) {
        int pi;
        cin >> pi;
        inp[i] = pi;
    }

    // Let's make an adjacency list
    vector<vector<int>> adj(n + 1);
    lp(i, 1, n + 1) {
        if (inp[i] != -1) {
            adj[inp[i]].push_back(i);
        }
    }

    // Now my graph is ready
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) { // Only call DFS if the node hasn't been visited
            dfs(i, adj, vis, 0);
        }
        // fill(vis.begin(), vis.end(), 0); // Clear the visited array for the next DFS call
    }

    cout << maxi << endl;
    return 0;
}
