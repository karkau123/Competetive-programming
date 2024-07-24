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
 ll fact (int n)
 { 
    if (n==0 || n==1)
    {
         return 1;
    }
    return n * fact(n-1);

 }
 int main()
{
   ll n , r;
   cin >> n>> r;
   ll p = 1;
   for (int i = (r+1) ; i <=n ; i++)
   {
    p = p * i;
   }   
   ll f = fact (n-r);
   ll ans = p/f;
   cout << ans << endl; 
  return 0;
}
