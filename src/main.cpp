#include <iostream>
#include "graph.hpp"

using namespace std;

int main(){
    Graph graph(8);
    graph.addEdge(7,6);
    graph.addEdge(7,5);
    graph.addEdge(6,4);
    graph.addEdge(5,4);
    graph.addEdge(6,3);
    graph.addEdge(5,2);
    graph.addEdge(3,1);
    graph.addEdge(2,1);
    graph.addEdge(1,0);

    graph.topoSort();
}