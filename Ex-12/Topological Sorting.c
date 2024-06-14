#include <stdio.h> 
 
#define MAX_VERTICES 10 
 
int graph[MAX_VERTICES][MAX_VERTICES] = {0}; 
int visited[MAX_VERTICES] = {0}; 
int vertices; 
 
void createGraph() { 
    int i, j; 
    printf("Enter the number of vertices: "); 
    scanf("%d", &vertices); 
    printf("Enter the adjacency matrix:\n"); 
    for (i = 0; i < vertices; i++) { 
        for (j = 0; j < vertices; j++) { 
            scanf("%d", &graph[i][j]); 
        } 
    } 
} 
 
void dfs(int vertex) { 
    int i; 
    printf("%d ", vertex); 
    visited[vertex] = 1; 
    for (i = 0; i < vertices; i++) { 
        if (graph[vertex][i] && !visited[i]) { 
            dfs(i); 
        } 
    } 
} 
 
int main() { 
    int i; 
    createGraph(); 
    printf("Ordering of vertices after DFS traversal:\n"); 
    for (i = 0; i < vertices; i++) { 
        if (!visited[i]) { 
            dfs(i); 
        } 
    } 
    return 0; 
}
