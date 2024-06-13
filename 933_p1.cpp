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
        int n,m,k;
        cin>>n>>m>>k;
        int a[n];
        int b[m];
        lp(i,0,n){
            cin>>a[i];
        }
        lp(i,0,m){
            cin>>b[i];
        }
        long long  cnt = 0;
        lp(i , 0 , n){
            lp (j , 0  , m){
                if (a[i] + b[j] <=k)
                {
                    cnt++;
                }
            }
        }

   cout << cnt << endl;
     }
  return 0;
}
