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
  ll t;
  cin >> t;
  while (t--)
  {
     ll n, k;
     cin >> n>> k;
     vector<string>v(n);
     lp (i , 0 , n)
     {
        string s;
        cin >> s;
        v[i] = s;
     }
     ll siz = n/k;
     vector <string> ans(siz);
   for (int i = 0; i < n; i += k) {
    string s;
    for (int j = 0; j < n; j += k) {
        s.pb(v[i][j]);
    }
    ans[i / k] = s;  
}
   for (int i=0 ; i<ans.size() ; i++)
  {
     for (int j=0 ; j<ans.size() ; j++)
     {
        cout << ans[i][j];
     }
     cout << endl;
  }
  }  
  return 0;
}
