#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string target1 = "map";
        string target2 = "pie";
        int count = 0;
        int i = 0;
        while (i < s.length()) {
            if ( s.substr(i, 3) == target1) {
                count++;
                i += 3;
            } else if ( s.substr(i, 3) == target2) {
                count++;
                i += 3;
            } else {
                i++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
