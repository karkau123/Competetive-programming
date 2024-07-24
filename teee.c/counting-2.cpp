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
    ll n , q;
    cin >> n>> q;
    vll a (n);
    lp (i , 0 ,n) cin>>a[i];
    sort (a.begin() , a.end());
    while (q--)
    {    
         ll x;
         cin>>x;
         cout << n - (lower_bound(a.begin() , a.end() , x)-a.begin())<< endl;
    }
  return 0;
}
