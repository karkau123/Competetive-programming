#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool is_possible(ll mid, int cntb, int cnts, int cntc, ll r, int nb, int ns, int nc, int pb, int ps, int pc) {
    ll v1 = max(0LL, cntb * mid - nb);
    ll v2 = max(0LL, cnts * mid - ns);
    ll v3 = max(0LL, cntc * mid - nc);
    ll cost = v1 * pb + v2 * ps + v3 * pc;
    return r >= cost;
}

int main() {
    string s;
    cin >> s;
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll r;
    cin >> r;

    int cntb = 0, cnts = 0, cntc = 0;
    for (char c : s) {
        if (c == 'B') cntb++;
        else if (c == 'S') cnts++;
        else if (c == 'C') cntc++;
    }

    ll l = 0, h = LLONG_MAX;
    ll ans = 0;
    
    while (l <= h) {
        ll mid = l + (h - l) / 2;
        if (is_possible(mid, cntb, cnts, cntc, r, nb, ns, nc, pb, ps, pc)) {
            ans = mid;
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    
    cout << ans << endl;
    return 0;
}
