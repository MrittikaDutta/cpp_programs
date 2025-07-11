#include <iostream> // For input and output operations
#include <vector>   // For using vectors
#include <stack>    // For using stacks
#include <queue>    // For using queues
#include <algorithm> // For using algorithms like sort, find, etc.
#include <cmath>    // For mathematical operations and functions
#include <string>   // For string operations
#include <map>      // For using maps
#include <set>      // For using sets
#include <iomanip>  // For input/output manipulations
using namespace std;
class Solution{
    public:
    vector<int>dijkstra(int v,vector<vector<int>>adj[], int s){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int> dist(v);
        int ew,an;
        for(int i=0;i<v;i++) dist[i]=1e9;

        dist[s]=0;
        pq.push({0,s});
        while(!pq.empty()){
            int dis=pq.top().first;
            int node=pq.top().second;
            pq.pop();

            for(auto it:adj[node]){
                int ew=it[1];
                int an=it[0];
            }
            if(dis+ew < dist[an]){
                dist[an]=dis+ew;
                pq.push({dist[an],an});
            }
        }
        return dist;
    }
    
};
int main(){
    int v, e; // v is the number of vertices, e is the number of edges
    cout << "Enter the number of vertices and edges: ";
    cin >> v >> e;

    // Adjacency list representation of graph
    vector<vector<pair<int, int>>> adj(v);

    // Taking input for edges and weights
    for(int i = 0; i < e; i++){
        int u, v, w;
        cout << "Enter edge (u v w): ";
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); // Adding edge (u, v) with weight w
        adj[v].push_back({u, w}); // For undirected graph, adding edge (v, u) with weight w
    }

    // Source vertex for Dijkstra's algorithm
    int s;
    cout << "Enter the source vertex: ";
    cin >> s;

    // Creating an object of Solution class
    Solution obj;

    // Calling Dijkstra's algorithm function
    vector<int> distances = obj.dijkstra(v, adj, s);

    // Printing the distances from source vertex to all other vertices
    cout << "Shortest distances from source vertex " << s << ":\n";
    for(int i = 0; i < v; i++){
        cout << "Vertex " << i << ": " << distances[i] << "\n";
    }

    return 0;
}