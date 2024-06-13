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

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        for (int i = 1; i < n - 1; i++) {
            if (arr[i - 1] <= arr[i + 1] && arr[i] >= 2 * arr[i - 1]) {
                arr[i + 1] -= arr[i - 1];
                arr[i] -= 2 * arr[i - 1];
                arr[i - 1] = 0;
            }
        }
        
        if (count(arr.begin(), arr.end(), 0) != n) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}