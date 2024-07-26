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

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<pair<ll, ll>>> adj(n + 1); // ith node , node 2 , weight
    for (int i = 0; i < m; i++)
    {
        ll e1, e2, w;
        cin >> e1 >> e2 >> w;
        adj[e1].pb({e2, w});
        adj[e2].pb({e1, w});
    }
    // min heap
    vll dist(n + 1, LLONG_MAX);
    vector<ll> parent(n + 1, -1);
    for (int i = 1 ; i<=n ;i++) parent[i] = i;
    priority_queue<pll, vector<pll>, greater<pll>> q;
    q.push({0, 1}); // w , node
    dist[1] = 0;
    while (!q.empty())
    {
        auto temp = q.top();
        q.pop();
        ll dis = temp.ff;
        ll node = temp.ss;
        for (auto it : adj[node])
        {
            ll adjnode = it.ff;
            ll w = it.ss;
            if (dis + w < dist[adjnode])
            {
                dist[adjnode] = dis + w;
                q.push({dis + w, adjnode});
                parent[adjnode] = node;
            }
        }
    }
 vector <ll> ans;
    if (dist[n] == LLONG_MAX)
    {
        cout << -1 << endl;
    }
   
    else
    {
        ll node =  n;
        while (node != parent[node])
        {
             ans.pb(node);
             node = parent[node];
        }
      ans.pb(1);
      reverse(ans.begin() , ans.end());
      for (int i=0 ; i< ans.size() ; i++)
      {
         cout << ans[i] << " ";
      }
      cout << endl;
    }

    return 0;
}
