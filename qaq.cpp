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
    string s;
    cin>> s;
   
    ll n = s.size();
    ll cnt = 0;
    for (int i=0 ; i<n ;i++)
    {
        if (s[i]=='Q')
        {
             for (int j = i+1 ; j < n ;j++)
             {
                if (s[j] == 'A')
                {
                    for (int k = j+1 ; k<n ; k++)
                    {
                        if (s[k] == 'Q') cnt++;
                    }
                }
             }
        }
    }
    cout << cnt << endl;
   return 0;
 }
 