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
bool isposs (ll n , ll h , ll k , vll a)
{ 
      ll sum = 0;
    
      sort (a.begin() , a.end());
      lp (i , 0 ,a.size()-1)
      { 
          sum += min(a[i+1] - a[i]  ,  k);
      }
      sum += k ;  // for last index
      if (sum >=h)  return  true;
      return false;

}
 int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n , h;
        cin>>n >>h;
        vll a(n);
        lp (i , 0 ,n)  cin>>a[i];
        ll l = 1;
        ll hi = 1e18;
        ll ans = 0;
        while (l<=hi)
        {
            ll mid = l + (hi-l)/2;

            if (isposs(n , h , mid , a))
            { 
                ans = mid;
                hi = mid-1;
            }
            else
            l = mid+1;

        }
   cout  << ans << endl;

    }
  
}
