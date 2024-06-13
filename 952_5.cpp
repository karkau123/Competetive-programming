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
        int length_x, width_y, height_z;
        long long total_volume_k;

        cin >> length_x >> width_y >> height_z >> total_volume_k;

        long long max_volume = 0;
        // ######
        for (int a = 1; a <= length_x; ++a) {
            if (total_volume_k % a != 0) continue;
            long long volume_ab = total_volume_k / a;

            for (int b = 1; b <= width_y; ++b) {
                if (volume_ab % b != 0) continue;
                long long c = volume_ab / b;

                if (c <= height_z) {
                    long long p = (length_x - a + 1);
                    long long q = (width_y - b + 1);
                    long long r = (height_z - c + 1);
                    max_volume = max(max_volume, p * q * r);
                }
            }
        }

        cout << max_volume << endl;
    }

    return 0;
}