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
void print(int n , int len)
{
  if (len == 0)
  {
     if (((1<<len) & n ) == 0)  cout << 0;
     else
     cout << 1;
     return;
  }

  int   num = (1<<len) & n ;
  int bit = (num == 0) ? 0 : 1;
  cout << bit;
  print(n , len-1);
}
 int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        int len = log2(n);
        print(n , len);
        cout << endl;
    }

  return 0;
}
