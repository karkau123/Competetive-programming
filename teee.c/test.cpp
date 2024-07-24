#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int dfs(int node, const vector<int>& edges, vector<bool>& visited) {
    if (visited[node]) {
        return node;  
    }
    visited[node] = true;
    int nextNode = edges[node];
    return dfs(nextNode, edges, visited);
}

int main() {
    int N;
    cin >> N;

    vector<int> edges(N);
    for (int i = 0; i < N; ++i) {
        cin >> edges[i];
    }

    vector<bool> visited(N, false);
    int maxCycleSum = -1;

    for (int i = 0; i < N; ++i) {
        if (!visited[i]) {
            int cycleStart = dfs(i, edges, visited);
            if (cycleStart != -1) {
                int cycleSum = 0;
                int node = cycleStart;
                do {
                    cycleSum += node;
                    node = edges[node];
                } while (node != cycleStart);
                maxCycleSum = max(maxCycleSum, cycleSum);
            }
        }
    }

    cout << maxCycleSum << endl;
    return 0;
}
