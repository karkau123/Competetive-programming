#include <bits/stdc++.h>
#define ll long long int
#define lp(i, a, b) for (ll i = a; i < b; i++)
#define lpa(i, a, b, x) for (ll i = a; i < b; i += x)
#define pl(i, a, b) for (ll i = a; i >= b; i--)
#define pb push_back
#define ms(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define pll pair<ll, ll>
#define vpll vector<pll>
#define vll vector<ll>
#define vvll vector<vll>
#define ff first
#define ss second
using namespace std;
void sumu(int i, int j, vvll &a, vvll &b, vvll &ans , vvll &vis)
{
    int r = a.size();
    int c = a[0].size();
    if (i >= r || j >= c)
        return; // base case
    if (vis[i][j] == 1) return ;
    vis[i][j] = 1;
    ans[i][j] = a[i][j] + b[i][j];
    sumu (i , j+1 , a , b , ans , vis);
    sumu (i+1 , j , a , b , ans , vis);
    sumu (i+1 , j+1 , a , b , ans , vis);
}
int main()
{
    ll r, c;
    cin >> r >> c;
    vvll a(r, vll(c)), b(r, vll(c));
    lp(i, 0, r)
    {
        lp(j, 0, c)
        {
            cin >> a[i][j];
        }
    }
    lp(i, 0, r)
    {
        lp(j, 0, c)
        {
            cin >> b[i][j];
        }
    }
    vvll vis (r , vll(c , 0));
    // input done
    vvll ans(r, vll(c, 0));
    sumu(0, 0, a, b, ans , vis);
    lp(i, 0, r)
    {
        lp(j, 0, c)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
