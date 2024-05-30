#include <stdio.h>

int a[20][20], s[20], visited[20], n, i, j, top = -1;

void dfs(int v);

int main() {
    int v;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the value of starting vertex: ");
    scanf("%d", &v);
    for (i = 0; i < n; i++) {
        s[i] = 0;
        visited[i] = 0;
    }
    dfs(v);
    printf("The visited vertices are: ");
    for (i = 0; i < n; i++) {
        if (visited[i]) {
            printf("%d\t", i);
        }
    }
    return 0;
}

void dfs(int v) {
    s[++top] = v;  
    while (top != -1) {
        v = s[top--];  
        if (!visited[v]) {
            printf("Visited %d\n", v);
            visited[v] = 1;  
            for (i = n - 1; i >= 0; i--) {  
                if (a[v][i] && !visited[i]) {
                    s[++top] = i;
                }
            }
        }
    }
}

