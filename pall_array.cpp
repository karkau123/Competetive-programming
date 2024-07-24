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
bool pall (ll i , ll j , vll &a)
{
   if (i>=j)  
   return true;
   else if 
   (a[i] != a[j])  return false;
   return pall(i+1 , j-1 , a);
}
 int main()
{
    ll n;
    cin>> n;
    vll a (n);
    lp (i , 0 , n)  cin>>a[i];
    bool x = pall (0 , n-1 , a);
    if (x)
    {
         cout << "YES" << endl;
    }
    else
    cout << "NO" << endl;
    return 0;
}
