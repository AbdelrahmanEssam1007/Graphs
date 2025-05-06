#pragma once

#include <vector>
#include <iostream>
#include <stack>
#include <bitset>


class Graph{
  int vertexNum;
  std::vector<std::vector<int>> adjacent;

  public:
    Graph(int V);
    void addEdge(int u, int v);
    void topoSortUtil(int v, std::bitset<100>& visted, std::stack<int>& s);
    void topoSort();
};