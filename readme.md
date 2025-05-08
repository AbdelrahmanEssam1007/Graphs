# Graphs
Objective: Implement algorithms for Topological Sort and Minimum Spanning Tree (MST) using Prim's algorithm. This assignment focuses on building familiarity with graph data structures and their applications, particularly in real-world scenarios like task scheduling and network design.
Completed Features for the Assignment
1. Topological Sort

Topological Sort is a way of ordering vertices in a Directed Acyclic Graph (DAG) such that for each directed edge uv, vertex u comes before v. The primary goal is to find an ordering of the nodes that respects the directed edges, useful in various applications like task scheduling and dependency resolution.

Key Operations:

    Depth First Search (DFS) or Kahn’s Algorithm can be used to implement topological sorting.

    Ensure the graph is a DAG to guarantee that topological sort can be applied.

    The algorithm should work efficiently for large graphs and produce a valid ordering of vertices.

2. Minimum Spanning Tree (MST)

The goal is to compute a Minimum Spanning Tree (MST) for a connected, weighted, undirected graph using Prim’s Algorithm. The MST is a subset of the edges that connects all the vertices together without any cycles, with the minimum possible total edge weight.

Key Operations:

    Prim’s Algorithm: Grows the MST from an arbitrary starting node, adding the smallest edge that connects a new vertex to the growing MST.

    Priority Queue (Min-Heap): Used to efficiently select the smallest edge at each step.

    Edge Selection: At each step, the edge with the least weight is chosen.

Technology Stack

    Language: C++ (for both Topological Sort and Prim’s Algorithm)

    Data Structures:

        Graph Representation: Adjacency list for storing the graph.

        Priority Queue: Used in Prim’s algorithm to select the minimum-weight edge efficiently.

        Stack: For topological sorting (in DFS implementation).

        Vectors: To keep track of visited nodes and edge weights.

Project Members

    Abdelrahman Essam

    Ahmed Alaa

    Mahmoud Waleed

Contributing

Feel free to contribute by improving the efficiency of the algorithms, adding additional graph algorithms, or improving the interface for better user interaction.
