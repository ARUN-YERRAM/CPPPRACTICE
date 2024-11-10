#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(int city, vector<vector<int>>& graph, vector<bool>& visited, vector<int>& component) {
    visited[city] = true;
    component.push_back(city);
    for (int neighbor : graph[city]) {
        if (!visited[neighbor]) 
            dfs(neighbor, graph, visited, component);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1); // Adjacency list representation

    // Input the existing roads
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<bool> visited(n + 1, false);
    vector<vector<int>> components;

    // Find all connected components
    for (int city = 1; city <= n; ++city) {
        if (!visited[city]) {
            vector<int> component;
            dfs(city, graph, visited, component);
            components.push_back(component);
        }
    }

    // Calculate minimum roads needed to connect all components
    int k = components.size() - 1;
    cout << k << endl;

    // Output the roads to connect components
    for (int i = 1; i < components.size(); ++i) {
        cout << components[i - 1][0] << " " << components[i][0] << endl;
    }

    return 0;
}

