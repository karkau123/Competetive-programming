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
void row (int i )
{
    for (int i=1 ; i<=2*i-1 ;i++)
  {
    cout << '*';
  }
}
void print (int i , int n )
{
    if (i == n)  
    {
        row (i);
        return;
    }
    row(i);
    cout << endl;
    print(i+1 , n);
}
 int main()
{
  ll n;
  cin>> n;
  print (1 , n);
  return 0;
}
