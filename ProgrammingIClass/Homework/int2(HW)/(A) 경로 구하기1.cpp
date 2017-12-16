/*
 경로 구하기 1
 사이클이 없는 그래프 G의 한 정점에서 다른 정점까지 이동할 수 있는 경로는 1가지만 존재한다.
 그래프 G와 시작정점 s, 도착정점 e를 입력받아 s로부터 e까지의 경로에 포함되는 정점들을 순서대로 출력하는 프로그램을 작성하시오.
 
 <입력>
 첫 줄에 정점의 개수 n(2<n<=10)과 간선의 개수 m(=n-1)이 입력된다.
 둘째줄부터 인접한 2개의 정점이 m+1째 줄까지 입력된다.
 마지막 줄에 시작정점 s와 도착정점 e가 입력된다.
 단 정점은 1 이상의 정수로 표현되며, 비어있는 수는 없다고 가정한다.
 
 5 4
 1 2
 1 3
 3 5
 2 4
 4 5
 
 <출력>
 시작정점 s로부터 도착정점 e까지의 경로에 포함되는 정점들을 방문 순서대로 출력한다.
 
 4 2 1 3 5
 */

#include <stdio.h>
#include <stack>

using namespace std;
stack<int> st;

int n, m, endd, map[100][100], visited[100];

void visit(int a)
{
    visited[a]=1;
    st.push(a);
}

void dfs(char k)
{
    int i;
    visit(k);
    while(!st.empty())
    {
        if(st.top()==endd) return;
        for(i = 1; i <= n; i++)
        {
            if(map[st.top()][i] && !visited[i])
            {
                visit(i);
                break;
            }
        }
        if(i == n+1)
            st.pop();
    }
}

void print()
{
    if(st.empty()) return;
    int ans = st.top();
    st.pop();
    print();
    printf("%d ", ans);
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++)
    {
        int v1, v2;
        scanf("%d %d", &v1, &v2);
        map[v1][v2]=map[v2][v1] = 1;
    }
    int start;
    scanf("%d %d", &start, &endd);
    
    dfs(start);
    print();
    return 0;
}

