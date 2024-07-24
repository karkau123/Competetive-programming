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
 
 void fun (int i , vll &a , ll csum , ll tsum , ll &mini)
 {
    int n = a.size();
    // base case 
    if (i >= n)
    {
       ll diff = abs((tsum - csum) - csum);

       mini = min (mini  , diff);
       return;
    }
    // np
    fun(i+1 , a , csum , tsum , mini);
    //pick
    csum += a[i];
    fun (i+1 , a, csum , tsum , mini);
    csum-=a[i];

 }
  int main()
 {
  ll n;
  cin>>n;
  vll a (n);
  lp (i , 0 , n)  cin  >> a[i];
  ll mini = LLONG_MAX;
  // if you are passing 0 make sure that 0 is long long 
  ll tsum  =  accumulate (a.begin() , a.end() , 0LL);
  fun (0 , a , 0 , tsum , mini);
  cout << mini << endl;
 }


 