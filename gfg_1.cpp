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
class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        
        int cnt = 0;
        for (int i=1;i<=n ; i++)
        {
            int num = i;
            while (num>0)
            {
                int rem = num%10;
                if (rem == 4)
                {
                    cnt++;
                    break;
                }
                num = num /10;
            }
        }
        return cnt;
    }
};
 int main()
{
    Solution sol;
 //   cout << "Enter the Number: " << endl;
     int n ;
     cin>>n;
     int ans =   sol.countNumberswith4(n);
     cout << ans << endl;
}
