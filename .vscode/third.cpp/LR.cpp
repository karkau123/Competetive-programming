#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while (t--)
 {
    int n,m;
    cin>>n>>m;
    vector <int> v(n);
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    string s;
    cin>>s;
    int l=0;
    int r = n-1;
    for (int i=0;i<n-1;i++)
    {
        if (s[i]=='L') l++;
        else
        r--;
    }
    long long x = v[l];
    vector <int> ans;
     for (int i=n-1;i>=0;i--)
     {
           ans.push_back(x%m);
        if (s[i-1] == 'L') 
        {
               l--;
               x = (x*v[l])%m;
        }
        else
        {
            r++;
            x = (x*v[r])%m;
        }
     }    
  
  for (int i=v.size()-1;i>=0;i--)
  {
      cout << ans[i]<<" ";
  }
  cout << endl ;
  
 }
return 0 ;
}
