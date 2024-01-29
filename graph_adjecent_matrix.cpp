#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    int vertices;
    vector<vector<int>> adjacencyMatrix;

public:
    Graph(int v) : vertices(v), adjacencyMatrix(v, vector<int>(v, 0)) {}

    void addEdge(int source, int destination) {
        // Assuming the graph is undirected
        adjacencyMatrix[source][destination] = 1;
        adjacencyMatrix[destination][source] = 1;
    }

    void display() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < vertices; ++i) {
            for (int j = 0; j < vertices; ++j) {
                cout << adjacencyMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Creating a graph with 4 vertices
    Graph graph(4);

    // Adding edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);

    // Displaying the adjacency matrix
    graph.display();

    return 0;
}