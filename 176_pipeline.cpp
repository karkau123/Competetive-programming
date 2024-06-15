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

ll sum(ll n){
    return (n*(n+1))/2;
}

int main()
{
    ll n,k;
    cin>>n>>k;
    n-=1;
    ll s=sum(k-1);
    if(s<n)
    cout<<-1;
    else{
        ll l=0,h=k-1;
        while(l<=h){
            ll mid=l+(h-l)/2;
            if(s-sum(mid)>=n) l=mid+1;
            else h=mid-1;
        }
        cout<<k-1-h; // k-1-(h+1)+1
    }

    return 0;
}