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
 int main()
{
   ll n , m;
   cin >> n >> m;
   vector<vector<int>> adj(n);
   lp (i , 0 , m)
   {
       ll e1 , e2;
       cin >> e1;
       cin>> e2;
       adj[e1].pb(e2);
       adj[e2].pb(e1);
   } 
   // kahna algo problem
   
}
