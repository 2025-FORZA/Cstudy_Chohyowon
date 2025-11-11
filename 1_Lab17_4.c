#include <stdio.h>

#define MAX_COMPUTER 101 

int N;
int M;
int adj[MAX_COMPUTER][MAX_COMPUTER] = { 0, };
int visited[MAX_COMPUTER] = { 0, };
int virus_count = 0;

void dfs(int start_node) {
    visited[start_node] = 1;
    for (int next_node = 1; next_node <= N; next_node++) {
        if (adj[start_node][next_node] == 1 && visited[next_node] == 0) {
            virus_count++;
            dfs(next_node);
        }
    }
}

int main() {
    int u, v;

    scanf("%d", &N);
    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    dfs(1);
    printf("%d\n", virus_count);

    return 0;
}