#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18; // Set a large number as infinity

int main() {
    int n, m;
    cin >> n >> m;

    // Adjust vector size to be n+1 to handle 1-indexed cities
    vector<vector<pair<int, int>>> adj(n + 1);

    // Reading the graph edges
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    // Dijkstra's algorithm to find the shortest paths
    vector<long long> dist(n + 1, INF);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

    dist[1] = 0; // Distance from Syrjälä (city 1) to itself is 0
    pq.push({0, 1}); // Push the starting node with distance 0

    while (!pq.empty()) {
        int u = pq.top().second;
        long long d = pq.top().first;
        pq.pop();

        if (d > dist[u]) continue; // Ignore if we've already found a shorter path

        for (auto edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    // Output the shortest distances from Syrjälä to each city
    for (int i = 1; i <= n; i++)
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}
