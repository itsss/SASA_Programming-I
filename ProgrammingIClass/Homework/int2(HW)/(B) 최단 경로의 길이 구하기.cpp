/*
 최단 경로의 길이 구하기
 
 그래프에서 한 정점 s로부터 다른 정점 e로 이동할 수 있는 경로는 여러 개 존재할 수도 있다.
 그래프 G와 시작정점 s, 도착정점 e를 입력받아 s로부터 e까지의 경로 중에서 가장 짧은 경로의 길이를 출력하는 프로그램을 작성하시오.
 
 <입력>
 첫 줄에 정점의 개수 n(2<=n<=10)과 간선의 개수 m(2<=m<=45)이 입력된다.
 둘째줄부터 인접한 2개의 정점이 m+1째 줄까지 입력된다.
 마지막 줄에 시작정점 s와 도착정점 e가 입력된다.
 단 정점은 1 이상의 정수로 표현되며, 비어있는 수는 없다고 가정한다.
 
 5 5
 1 2
 1 3
 3 4
 3 5
 2 4
 4 5
 
 <출력>
 시작정점부터 도착정점까지 최단경로에 포함된 정점의 수를 출력한다.
 단 도착정점에 도착할 수 있는 경로가 없다면 -1을 출력한다.
 
 3
 */

#include <stdio.h>
#include <stack>
#include <queue>

using namespace std;

queue<int> q;
stack<int> st;

int n, m, s, e, map[100][100], visited[100], arr[100];

void visit(int a, int b)
{
    q.push(b);
    visited[b] = 1;
    arr[b] = arr[a]+1;
}

void solve(int s, int e)
{
    visit(0, s);
    while(!q.empty())
    {
        for(int i = 1; i <= n; i++)
            if(map[q.front()][i] && !visited[i])
            {
                visit(q.front(), i);
                if(i == e)
                {
                    printf("%d", arr[i]);
                    return;
                }
            }
        q.pop();
    }
    printf("-1");
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++)
    {
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        map[a][b] = map[b][a] = 1;
    }
    scanf("%d %d", &s, &e);
    solve(s, e);
}
