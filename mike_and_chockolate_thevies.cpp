#include <bits/stdc++.h>
# define ll long long 
using namespace std;

long long get(long long n) {
    long long ans = 0;
    for (long long i = 2; i * i * i <= n; ++i)
        ans += n / (1ll * i * i * i);
    return ans;
}

int main() {
    long long m, n = -1;
    cin >> m;
    
    long long l = 0, r = 5e15;
    ll ans = -1;
    while (l < r) {
        long long mid = (l + r) / 2;
        if (get(mid) == m) 
        {
            ans = mid;
            r = mid-1;
        } 
        if (get(mid) < m) l = mid + 1;
        else r = mid;
    }
    
    // if (get(l) == m) n = l;

    cout << ans << '\n';
    return 0;
}
