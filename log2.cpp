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
    ll n ;
    cin>>n;
    /// vo power jiska 2 pe power just n se chota ho
    ll l= 0;
    ll h = 60;
    ll  ans = 0;
    while (l<=h)
    {
         ll mid = l+(h-l)/2;
         ll x = 1LL << mid;
         if (x > n )
         {
            h = mid-1;
         }
         else
         {
            ans = mid;
            l = mid+1;
         }
    }
    cout << int(ans) << endl;
}
