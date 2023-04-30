/* 
Here's the directed graph for 10 nodes where each node is numbered from 2 to 11, with an edge from node A to node B if B is a multiple of A:
Adjacent list:
2 -> 4 6 8 10
3 -> 6 9
4 -> 8
5 -> 10
6 ->
7 ->
8 ->
9 ->
10 ->
11 ->
This graph has 10 nodes and 8 edges. Node 2 has edges to nodes 4, 6, 8, and 10. Node 3 has edges to nodes 6 and 9, and so on. Note that nodes 6 to 11 do not have any outgoing edges, since they are not multiples of any smaller nodes.

As for the question of whether this graph is a DAG (Directed Acyclic Graph) if there are a million nodes, the answer is yes, it is still a DAG. The reason is that each node can only have outgoing edges to smaller nodes, due to the condition that B must be a multiple of A. This means that there can be no cycles in the graph, since a cycle would require a node to have an outgoing edge to a larger node, which is not possible. Therefore, the graph is always acyclic, regardless of the number of nodes.

*/