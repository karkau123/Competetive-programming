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
        ll n ;
        cin>>n;
        vll vec(n,0);
        lp (i , 0 , n){
            cin>> vec[i];
        }
        int cnt = 0;
        lp (i,0,n){
            if (vec[i]%2==1)
            cnt++;
        }
        if (cnt == 0)  
        cout << "NO" << endl;
        else{
            if (cnt == n & n%2==0)
            {
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }

    }
  return 0;
}
