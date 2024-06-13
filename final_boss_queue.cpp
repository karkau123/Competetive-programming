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
  int t;
  cin>>t;
  while (t--)
  {
      ll h , n;
      cin >> h >> n;
      vll a (n); 
     lp (i , 0 ,n)  cin >> a[i];
      vll c (n);
         lp (i , 0 ,n)  cin >> c[i];
       priority_queue <pll , vector<pll> , greater<pll>> q;
    q.push({0LL , h});
    ll ans = 0;
    while (!q.empty())
    {
        auto temp = q.top();
        q.pop();
        if (temp.second <= 0) 
        {
            ans = temp.first;
            break;
        }
        ll turn = temp.ff;
        ll g_left  = temp.ss;
        for (int i=0 ; i<n;i++)
        {
            q.push({turn+c[i], g_left-a[i]});
        }
    }
    cout << ans << endl;
  }
}
