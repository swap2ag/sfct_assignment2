#include"graph.h"
graph::graph(int n)
{
    adjMat = new int[n*n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            *(adjMat+i*n+j) = 0;
        }
    }
    numNodes = n;
}										// Number of nodes have to be passed and and a graph with no edges will be constructed by this
//=====Getters======
int graph::getNumNodes()
{
    return numNodes;
}									//returns the number of nodes in the graph
int graph::getEdge(int i, int j)
{
    return *(adjMat+i*numNodes+j);
}							//Returns cost of edge between ith and jth node of graph otherwise returns false. This info is stored in adjacency matrix of the graph.
//=====Setters=====
void graph::setEdge(int i,int j, int val)
{
    *(adjMat+i*numNodes+j) = val;
    *(adjMat+j*numNodes+i) = val;
}				//set the edge between the ith and jth vertex as the val by modifying the adjacency matrix
