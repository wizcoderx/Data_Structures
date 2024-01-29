#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5 + 2;

bool vis[N];
vector<int> adj[N];

// DFS function
void dfs(int node) {
    // Preorder
    vis[node] = true;

    // Inorder
    vector<int>::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++) {
        if (!vis[*it]) {
            dfs(*it);
        }
    }

    // Postorder
    cout << node << " ";
}

int main() {
    // Take the number of nodes
    cout << "Enter the number of nodes: ";
    int n;
    cin >> n;

    // Take the number of edges
    cout << "Enter the number of edges: ";
    int m;
    cin >> m;

    int x, y;

    // Initialize the visited array
    for (int i = 0; i <= n; i++) {
        vis[i] = false;
    }

    // Take the edges
    cout << "Enter the edges (node1 node2):" << endl;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;

        // Add edges to the adjacency list
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    // Perform DFS
    cout << "DFS Traversal:" << endl;
    dfs(1); // Starting from the root node

    cout << endl;

    return 0;
}
