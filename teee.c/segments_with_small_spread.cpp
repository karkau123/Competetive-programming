#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) cin >> a[i];
    ll cnt = 0;
    deque<ll> maxDeque, minDeque;       
    ll i = 0;
    for (ll j = 0; j < n; ++j) {
        // Update the maxDeque
        while (!maxDeque.empty() && a[maxDeque.back()] <= a[j]) maxDeque.pop_back();
        maxDeque.push_back(j);
        
        // Update the minDeque
        while (!minDeque.empty() && a[minDeque.back()] >= a[j]) minDeque.pop_back();
        minDeque.push_back(j);

        // Shrink the window if the condition is not met
        while (a[maxDeque.front()] - a[minDeque.front()] > k) {
            ++i;
            if (!maxDeque.empty() && maxDeque.front() < i) maxDeque.pop_front();   // jo bhi index i ke pahle aaya the  i mean current window mh nhi hai usko pop krke hta do
            if (!minDeque.empty() && minDeque.front() < i) minDeque.pop_front();
        }

        // Count the number of good segments ending at j
        cnt += (j - i + 1);
    }

    cout << cnt << endl;
    return 0;
}
