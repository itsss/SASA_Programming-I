/*
 인접행렬로 표현된 그래프를 입력받아 BFS 방법으로 탐색하는 프로그램을 작성하시오.
 단 정점의 이름은 대문자 'A'부터 순서대로 부여되며, 첫번째 방문하는 정점은 'A'이다.
 또한 한 정점에서 서로 다른 여러 개의 정점을 방문할 수 있을 때 알파벳 순서가 빠른 것부터 방문한다고 가정한다.
 
 <입력>
 4
 0 1 0 1
 1 0 1 1
 0 1 0 1
 1 1 1 0
 
 <출력>
 A B D C 
 */

#include <stdio.h>

int visited[10], arr[100][100], n, rear=0, front=0, queue[10];

void bfs(int s)
{
    visited[s] = 1;
    queue[rear++] = s; //Queue에서 다 뺄때까지
    while(front < rear)
    {
        s = queue[front++];
        for(int i = 1; i <= n; i++)
        {
            if(arr[s][i] == 1 && visited[i] != 1)
            {
                visited[i] = 1;
                printf("%c ", i+65);
                queue[rear++] = i;
            }
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
    bfs(0);
}
