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

void solve (ll n , ll &cnt)
{
    // base case  
    if (n == 1)  return ;
    if (n%2 == 0) 
    {
        solve (n/2 , cnt);
        cnt++;
    }
    else
    {
         solve (3*n+1 , cnt);
         cnt++;
    }
}
using namespace std;
 int main()
{
    ll n;
    cin>>n;
    ll cnt= 0;
   solve (n , cnt);
   cout << cnt + 1 << endl;
  return 0;
}
