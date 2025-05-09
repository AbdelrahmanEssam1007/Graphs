// C++ program to represent undirected and weighted graph
// using STL. The program basically prints adjacency list
// representation of graph and constructs MST using Prim's algorithm
#include <vector>
#include <iostream>
#include <stack>
#include <bitset>
#include "weightedGraph.hpp"

weightedGraph::weightedGraph(int v){
    vertexNum = v;
    adj.resize(v);
}

// Function to add an undirected edge with weight
void weightedGraph::addEdge(int u,int v, int wt)
{
    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});
}

// Utility function to find the vertex with the minimum key value
int minKey(std::vector<int> &key, std::vector<bool> &mstSet) {
    int min = INT_MAX, min_index = -1;

    for (int v = 0; v < mstSet.size(); v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}

// Function to print the MST
void weightedGraph::printMST(std::vector<int> &parent) {
    std::cout << "Edge \tWeight\n";
    for (int i = 1; i < vertexNum; ++i) {
        for (auto &[v, wt] : adj[i]) {
            if (v == parent[i]) {
                std::cout << parent[i] << " - " << i << " \t" << wt << '\n';
                break;
            }
        }
    }
}

// Prim's algorithm to construct MST starting from vertex 0
    void weightedGraph::primMST(int startNode) {
        std::vector<int> key(vertexNum, INT_MAX);
        std::vector<bool> mstSet(vertexNum, false);
        std::vector<int> parent(vertexNum, -1);
    
        key[startNode] = 0;
    
        for (int count = 0; count < vertexNum - 1; ++count) {
            // Find the vertex with the minimum key value not yet included in MST
            int u = -1;
            int minKey = INT_MAX;
            for (int v = 0; v < vertexNum; ++v) {
                if (!mstSet[v] && key[v] < minKey) {
                    minKey = key[v];
                    u = v;
                }
            }
            mstSet[u] = true;   
            // Update keys and parent for adjacent vertices
            for (auto &[v, weight] : adj[u]) {
                if (!mstSet[v] && weight < key[v]) {
                    key[v] = weight;
                    parent[v] = u;
                }
            }
        } 
        printMST(parent);
    }