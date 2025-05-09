#include <iostream>
#include "graph.hpp"
#include "weightedGraph.hpp"

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

    WeightedGraph weightedGraph(10);
    weightedGraph.addEdge(7,6,5);
    weightedGraph.addEdge(7,5,4);
    weightedGraph.addEdge(6,4,3);
    weightedGraph.addEdge(5,4,3);
    weightedGraph.addEdge(6,3,2);
    weightedGraph.addEdge(5,2,1);
    weightedGraph.addEdge(3,1,1);
    weightedGraph.addEdge(2,1,0);
    weightedGraph.addEdge(1,0,8);
    weightedGraph.addEdge(8, 7, 2);
    weightedGraph.addEdge(9, 8, 1);

    weightedGraph.primMST(0);
}