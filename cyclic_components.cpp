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
vector <int> arr;
void dfs (int ind , vvll &adj , vll &vis )
{
    
   vis[ind] = 1;
   arr.pb(ind);
    for (auto it : adj[ind])
    {
         if (!vis[it]  )
         {
            dfs (it , adj , vis );
         }
    }

}
 int main()
{
 ll n , m;
 cin >> n >> m;
vvll adj(n+1);
 vll ind(n+1 , 0);
 lp (i , 0 , m)
 {
    ll e1 , e2;
    cin>>e1>>e2;
    adj[e1].pb(e2);
    adj[e2].pb(e1);
    ind[e1]++;
    ind[e2]++;
 }
 vll vis (n+1 , 0);
 ll cnt = 0;

 for (int i=1 ; i<=n ;i++)
 {
    vector <int> a ;
     if (vis[i] == 0 && ind[i] == 2)
     {
         dfs(i , adj , vis );
         a = arr;
         bool iscyclic = true;
         for (int j = 0 ; j < a.size() ; j++)
         {
            if (ind[a[j]]!=2)  
            {
                iscyclic = false;
                break;
            }
         }
         if (iscyclic)  cnt++;
         arr.clear();
     }
 }
     cout << cnt << endl;
 
}
