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
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }
        int miniX = n, minY = m, maxX = -1, maxY = -1;
        
        for (int i = 0; i < n; ++i)
         {
            for (int j = 0; j < m; ++j) 
            {
                if (grid[i][j] == '#')
                 {
                    miniX = min(miniX, i);
                    minY = min(minY, j);
                    maxX = max(maxX, i);
                    maxY = max(maxY, j);
                }
            }
        }
        int cX = ((miniX + maxX) / 2) + 1;
        int cY = ((minY + maxY)) / 2 + 1;

        cout << cX << " " << cY << endl;
    }
    return 0;
}

 