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
   ll n;
   cin >> n;  
   ll l = 0;
   ll h = 1e10+200;
   ll ans = 0;
   while (l<=h)
   {
     ll mid = l + (h-l)/2;

     ll sum = (mid * (mid+1))/2;
     
     if (sum <= n+1 )
     {
        ans = mid;
        l = mid+1;
     }
     else
     { 
       h = mid-1;
     }
  
   }
cout << n+1-ans << endl;
  return 0;
}
