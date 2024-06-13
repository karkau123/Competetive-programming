 #include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool   isPrime(int n) {
    if (n <= 1)
        return false;
            for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
      int t;
        cin >> t;
     while (t--) {
        string s;
         cin >> s;
          int ans = -1;
 int n = s.size();
        for (int i = 0; i < pow(2, n); i++) {
      string subseq = "";
      for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    subseq += s[j];
                }
            }
 if (!subseq.empty()) {
                int num = stoi(subseq);
                if (isPrime(num) && subseq.size() >= 2) {
                    ans = num;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}
 