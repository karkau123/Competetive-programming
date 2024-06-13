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
        int n;
        cin>>n;
        int nums[n];
        for (int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
       long long  sum = 0;
       int cnt = 0;
       int maxi = INT_MIN;
       lp (i , 0 , n)
       {
        maxi = max (maxi , nums[i]);
        sum += nums[i];

        if (sum-maxi == maxi)  cnt ++;
       }
       cout << cnt << endl;
    }
  return 0;
}
