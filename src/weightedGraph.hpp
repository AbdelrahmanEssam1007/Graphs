#pragma once

#include <vector>
#include <iostream>
#include <stack>
#include <bitset>


class weightedGraph{
  int vertexNum;
  std::vector<std::vector<std::pair<int, int>>> adj;

  public:
    explicit weightedGraph(int V);
    void addEdge(int u, int v, int wt);
    void printMST(std::vector<int> &parent);
    void primMST(int startNode);
};
