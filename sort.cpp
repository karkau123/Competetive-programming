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

int charToIdx(char c) {
    return c - 'a';
}
 
 int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n, q;
        cin >> n >> q;

        string a, b;
        cin >> a >> b;

       
        vector<vector<ll>> freqA(n + 1, vector<ll>(26, 0));
        vector<vector<ll>> freqB(n + 1, vector<ll>(26, 0));

 
        for (ll i = 0; i < n; ++i) {
            for (int j = 0; j < 26; ++j) {
                freqA[i + 1][j] = freqA[i][j];
                freqB[i + 1][j] = freqB[i][j];
            }
            freqA[i + 1][charToIdx(a[i])]++;
            freqB[i + 1][charToIdx(b[i])]++;
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--;  
            r--;  

            vector<ll> fA(26, 0);
            vector<ll> fB(26, 0);

            for (int j = 0; j < 26; ++j) {
                fA[j] = freqA[r + 1][j] - freqA[l][j];
                fB[j] = freqB[r + 1][j] - freqB[l][j];
            }

            int ops = 0;
            for (int j = 0; j < 26; ++j) {
                ops += abs(fA[j] - fB[j]);
            }

            cout << ops / 2 << endl;
        }
    }

    return 0;
}