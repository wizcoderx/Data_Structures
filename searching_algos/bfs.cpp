#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int N = 1e5+2;

bool vis[N];

vector<int> adj[N];

int main() {
    // Initialize the visited array
    for (int i = 0; i < N; i++) {
        vis[i] = false;
    }

    // Take the number of nodes
    cout << "Enter the number of nodes: ";
    int n;
    cin >> n;

    // Take the number of edges
    cout << "Enter the number of edges: ";
    int m;
    cin >> m;

    // Take the edges
    cout << "Enter the edges (node1 node2):" << endl;
    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;

        // Add edges to the adjacency list
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    // Perform BFS
    queue<int> q;
    cout << "BFS Traversal:" << endl;
    q.push(1);
    vis[1] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        // Explore neighbors
        for (int neighbor : adj[node]) {
            if (!vis[neighbor]) {
                vis[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    cout << endl;

    return 0;
}
