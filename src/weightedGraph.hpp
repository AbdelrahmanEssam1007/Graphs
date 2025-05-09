#pragma once

#include <vector>
#include <queue>
#include <utility>

class WeightedGraph {
    int vertexNum;
    std::vector<std::vector<std::pair<int, int>>> adjacent; // pair: (neighbor, weight)

public:
    explicit WeightedGraph(int V);
    void addEdge(int u, int v, int weight); // undirected
    void primMST(int start); // start is the source vertex
};
