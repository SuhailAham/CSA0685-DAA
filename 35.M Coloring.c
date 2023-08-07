// C program for the above approach
 
#include <stdbool.h>
#include <stdio.h>
#define V 4 
void printSolution(int color[]);
bool isSafe(bool graph[V][V], int color[])
{
	int i,j;
    for (i = 0; i < V; i++)
        for (j = i + 1; j < V; j++)
            if (graph[i][j] && color[j] == color[i])
                return false;
    return true;
}
bool graphColoring(bool graph[V][V], int m, int i,
                   int color[V])
{
    if (i == V) 
	{
        if (isSafe(graph, color)) {
            // Print the solution
            printSolution(color);
            return true;
        }
        return false;
    }
    int j;
    for (j = 1; j <= m; j++) {
        color[i] = j;
 
        // Recur of the rest vertices
        if (graphColoring(graph, m, i + 1, color))
            return true;
 
        color[i] = 0;
    }
 
    return false;
}
 
/* A utility function to print solution */
void printSolution(int color[])
{
	int i;
    printf("Solution Exists:"
           " Following are the assigned colors \n");
    for (i = 0; i < V; i++)
        printf(" %d ", color[i]);
    printf("\n");
}
 
// Driver code
int main()
{
    /* Create following graph and
       test whether it is 3 colorable
      (3)---(2)
       |   / |
       |  /  |
       | /   |
      (0)---(1)
    */
    bool graph[V][V] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 },
    };
    int i,m = 3;
    int color[V];
    for (i = 0; i < V; i++)
        color[i] = 0;
 
    // Function call
    if (!graphColoring(graph, m, 0, color))
        printf("Solution does not exist");
 
    return 0;
}
