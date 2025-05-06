#include <vector>
#include <iostream>
#include <stack>
#include <bitset>
#include "graph.hpp"

Graph::Graph(int v){
    vertexNum = v;
    adjacent.resize(v);
}

void Graph::addEdge(int u, int v){
    adjacent[u].push_back(v); // create edge from u to v
}

void Graph::topoSortUtil(int v, std::bitset<100> &visited, std::stack<int> &st){
    visited[v] = true;
    for (const int neighbour: adjacent[v]){
        if (!visited[neighbour]){
            topoSortUtil(neighbour,visited,st);
        }
    }
    st.push(v); // push curr vertex to stack after visiting neighbour
}

void Graph::topoSort(){
    std::stack<int> st;
    std::bitset<100> visited;

    for (int i = 0; i < vertexNum; ++i){
        if(!visited[i]){
            topoSortUtil(i,visited,st);
        }
    }

    while (!st.empty()){
    
        std::cout << st.top() << " ";
        st.pop();
    }
    std::cout << '\n';
}
