#include "weightedGraph.hpp"
#include <iostream>
#include <climits>

WeightedGraph::WeightedGraph(int V)
{
    vertexNum = V;
    adjacent.resize(V);
}

void WeightedGraph::addEdge(int u, int v, int weight)
{
    adjacent[u].emplace_back(v, weight);
    adjacent[v].emplace_back(u, weight); // undirected graph
}

void WeightedGraph::primMST(int start) {
    std::vector<int> parent(vertexNum, -1);       // Store MST edges
    std::vector<int> key(vertexNum, INT_MAX);     // Weights used to pick min edge
    std::vector<bool> inMST(vertexNum, false);    // Track included vertices

    using Pair = std::pair<int, int>; // (weight, vertex)
    std::priority_queue<Pair, std::vector<Pair>, std::greater<>> minHeap;

    key[start] = 0;
    minHeap.emplace(0, start);

    while (!minHeap.empty()) {
        int u = minHeap.top().second;
        minHeap.pop();

        if (inMST[u]) continue;
        inMST[u] = true;

        for (auto &[v, weight] : adjacent[u]) {
            if (!inMST[v] && weight < key[v]) {
                key[v] = weight;
                parent[v] = u;
                minHeap.emplace(key[v], v);
            }
        }
    }

    std::cout << "Edge \tWeight\n";
    for (int v = 0; v < vertexNum; ++v) {
        if (parent[v] != -1) {
            std::cout << parent[v] << " - " << v << "\t" << key[v] << "\n";
        }
    }
}
