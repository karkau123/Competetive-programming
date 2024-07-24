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
void print(int n , vll &a )
{
     if (n == 0)
     {
        cout << a[0] <<" ";
         return;
     }
     if (n%2 == 0) 
     cout << a[n] << " ";
     print(n-1 , a);
}
 int main()
{
    ll n;
    cin >>n ;
    vll a (n);
    lp (i , 0 ,n) cin>>a[i];
    print(n-1 , a);
  return 0;
}
