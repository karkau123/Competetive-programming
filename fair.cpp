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
int dijkstra (ll node , ll s , vvll &adj )
{


}
 int main()
{
  ll n , m , k ,s ;
  cin >> n >> m >>k >> s;
  vll goods (n);
  lp (i , 0 , n)  cin >> goods[i];
  vvll adj(n);
  lp (i , 0 , m)
  {
     ll x , y;
     cin >> x >> y;
     adj[x].pb(y);
     adj[y].pb(x);
  }
  // print the minimum no of coins for each city
  // i want s diff kinds of goods at nearest ditsnce form me
 



  return 0;
}
