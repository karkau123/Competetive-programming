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
int getNumPairs(vector <int> &arr,int l , int r  )
{
     int n = arr.size();
     int pairs = 0;
       for (int i=0;i<n;i++)
       {
           auto low = lower_bound (arr.begin()+i+1 , arr.end() , l-arr[i]);
           auto high = upper_bound (arr.begin()+i , arr.end() , r-arr[i]);
           pairs += high-low;
       }
}
 int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int l, r;
    cin >> l >> r;

    long long result = getNumPairs(arr, l, r);

    cout << result << endl;

    return 0;
}
