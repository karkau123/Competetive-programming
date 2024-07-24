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
int fun (ll n , ll csum , ll dest)
{
     if (n == 0)  
     {
        if (csum == dest)
        return 1;
        else
        return 0;
     }
   return fun (n-1 , csum+1 , dest) + fun (n-1 , csum-1 , dest);

}
 int main()
{
  string s1 , s2; ;
 
  cin>> s1 >> s2 ;
   int n  = s1.length();
  // looks like a typical recursion problem
  ll dest = 0;
  lp (i , 0 , n )
  {
       if (s1[i] == '+')
       {
         dest++;
       }
       else
       dest--;
  }
  ll cntq = 0;
  ll pos = 0;
  lp (i , 0 ,n )
  {
      if (s2[i] == '+')
      pos++;
      else if (s2[i] == '-')
      pos--;
      else
      cntq++;
  }
  // now fill 0 or 1 at every pos and see ethat if we can reach a total sum of dest or not if yes , then print thr no of ways
 
 ll ans =  fun (cntq , pos , dest);
 
 double p = double(ans) / (1<<cntq);

std::cout << std::fixed << std::setprecision(12) << p << std::endl;
  return 0;
}
