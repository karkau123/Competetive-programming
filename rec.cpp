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
void  print (int ind , int n )
 {
    if (ind ==  n)
    {
    cout << "I love Recursion" << endl;
    return;
    }
    
    cout << "I love Recursion" << endl;

    print(ind+1 , n);


 }
 int main()
{
     ll n ;
     cin >> n;
     print(1 , n);
  return 0;
}
