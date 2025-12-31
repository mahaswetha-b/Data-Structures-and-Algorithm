#include<stdio.h>
#define MAX 5
int adjmatrix[MAX][MAX];   // global adjacency matrix initialized to 0

// Function to add a directed edge
void addedge(int u,int v)
{
    adjmatrix[u][v] = 1;   // only one direction for directed graph
}

// Function to print adjacency matrix
void printgraph(int vertices)
{
    printf("Adjacency matrix:\n");
    for(int i = 0; i < vertices; i++)
    {
        for(int j = 0; j < vertices; j++)
        {
            printf("%d ", adjmatrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int vertices, edges;
    int u, v;

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    for(int i = 0; i < edges; i++)
    {
        printf("Enter edge(u,v): ");
        scanf("%d %d", &u, &v);
        addedge(u, v);
    }

    printgraph(vertices);
    return 0;
}
