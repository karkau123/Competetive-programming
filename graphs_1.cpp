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
   int n , m;
   cin>>n>>m;
   vector<int> vis(1e6 , 0);
   queue<pair<ll , ll>> q;
   q.push({n , 0});  // source , steps
   ll ans = 0 ;
   while (!q.empty())
   {
     auto temp = q.front();
     q.pop();
     int num = temp.first;
     vis[num] = 1;
     int steps = temp.second;
     if (num == m) 
     {
        ans = steps;
        break;
     } 
     else{
          if (!vis[num*2] && num < 1e5 && num>0)
          {
              q.push({num*2 , steps+1});
          }
          if (!vis[num-1] && num < 1e5 && num >0)
          {
             q.push({num-1 , steps+1});
          }
     }
     
   }
  cout << ans <<endl;
}

 