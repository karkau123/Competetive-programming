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

int main()
{
    ll n;
    cin >> n;
    vector<string> names;
    lp(i, 0, n)
    {
        string s;
        cin >> s;
        names.pb(s);
    }

    vector<vector<int>> graph(26);
    for (int i = 1; i < n; i++)
    {
        string w1 = names[i - 1];
        string w2 = names[i];
        int l = 0;
        int r = 0;
        int siz = min(w1.size(), w2.size());
        while (l < siz && r < siz)
        {
            if (w1[l] == w2[r])
            {
                l++;
                r++;
            }
            else
            {
                graph[(w1[l] - 'a')].pb((w2[r] - 'a'));
                break;
            }
        }
    }

    // Topological sort
    vector<int> indegree(26, 0);
    for (int i = 0; i < 26; i++)
    {
        for (auto it : graph[i])
        {
            indegree[it]++;
        }
    }
    
    queue<int> q;
    string topo;
    for (int i = 0; i < 26; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        topo.push_back(node + 'a');
        for (auto it : graph[node])
        {
            indegree[it]--;
            if (indegree[it] == 0)
                q.push(it);
        }
    }

 
    unordered_map<char, int> order;
    for (int i = 0; i < topo.size(); ++i)
    {
        order[topo[i]] = i;
    }

    auto comparator = [&order](char a, char b) {
        return order[a] < order[b];
    };

    string s = "abcdefghijklmnopqrstuvwxyz";
    sort(s.begin(), s.end(), comparator);

    if (topo.size() != 26)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        cout << s << endl;
    }

    return 0;
}
