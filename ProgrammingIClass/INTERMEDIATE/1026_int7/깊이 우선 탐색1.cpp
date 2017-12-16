/*
 인접행렬로 표현된 그래프를 입력받아 DFS 방법으로 탐색하는 프로그램을 작성하시오.
 단 정점의 이름은 대문자 'A'부터 순서대로 부여되며, 첫번째 방문하는 정점은 'A'이다.
 또한 한 정점에서 서로 다른 여러 개의 정점을 방문할 수 있을 때 알파벳 순서가 빠른 것부터 방문한다고 가정한다.
 
 <입력예시>
 4
 0 1 1 1
 1 0 1 0
 1 1 0 1
 1 0 1 0
 
 <출력예시>
 A B C D
 
 

#include <stdio.h>

int k, S[101][101], SS[10], n;

void solve(int k)
{
    printf("%c ", k+65);
    SS[k] = 1;
    for(int i = 0; i <n; i++) if(!SS[i] && S[k][i]) return solve(k+1);
}

int main()
{
    int k = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            scanf("%d", &S[i][j]);
        }
    }
    solve(k);
}
*/
#include <stdio.h>

int visited[10], arr[100][100], n;

void dfs(int v)
{
    visited[v] = 1;
    for(int i = 1; i <= n; i++)
    {
        if(visited[i] != 1 && arr[v][i] == 1)
        {
            printf("%c ", i+65);
            dfs(i);
        }
    }
}

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("A ");
    dfs(0);
}

