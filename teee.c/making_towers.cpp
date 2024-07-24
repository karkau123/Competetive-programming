#include <bits/stdc++.h>
#define ll long long int
#define lp(i, a, b) for (ll i = a; i < b; i++)
#define lpa(i, a, b, x) for (ll i = a; i < b; i += x)
#define pl(i, a, b) for (ll i = a; i >= b; i--)
#define pb push_back
#define ms(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define pll pair<ll, ll>
#define vpll vector<pll>
#define vll vector<ll>
#define vvll vector<vll>
#define ff first
#define ss second
using namespace std;
int main()
{
    ll n, t;
    cin >> n >> t;
    vll a(n);
    lp(i, 0, n) cin >> a[i];
    int i  = 0 , j = 0;
    int cnt =  0;
    int sum = 0;
    int maxi = 0;
    while (j<n)
    {
          while (sum > t && i<=j)
          {
              sum -= a[i];
              i++;
          }
         
          if (sum <= t)
          {
             sum += a[j];
           if (sum <= t)  maxi = max (maxi , j-i+1); 
             j++;
          }
           
        
    }
    cout << maxi << endl;
    return 0;
}
