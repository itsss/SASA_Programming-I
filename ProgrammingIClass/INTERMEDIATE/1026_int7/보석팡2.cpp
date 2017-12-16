/*
 현재 보석들의 정보를 입력받아 한번에 가장 많이 터뜨릴 수 있는 그룹을 찾는 프로그램을 작성하시오.
 단 인접이라는 것은 대각선이 아닌 가로 또는 세로로 인접한 것을 의미한다.
 
 <입력>
 첫 줄에 행과 열의 개수 r과 c이 입력된다.(3<=r,c<=10)
 둘째 줄부터 r행마다 c개의 보석종류가 입력된다.(보석종류는 1-9사이의 정수)
 
 6 4
 1 1 2 3
 3 1 2 3
 3 4 5 3
 5 1 6 3
 1 2 2 1
 5 5 5 4
 
 <출력>
 한번에 가장 많은 보석을 터뜨릴 수 있는 보석종류와 개수를 출력한다.
 단 터뜨릴 수 없는 보석이 없다면 0을 출력한다.
 3 4
*/

#include <stdio.h>
#include <queue>

std::queue<int> q;
int r, c, jp[12][12], cnt, sum, maxV, maxC;

void visit(int r, int c)
{
    q.push(r*100+c);
    sum++;
    jp[r][c] = -1;
}

void cntBFS(int r, int c)
{
    sum = 0;
    int v = jp[r][c];
    if(v < 1) return;
    visit(r, c);
    while(!q.empty())
    {
        r = q.front()/100;
        c = q.front()%100;
        
        if(jp[r-1][c] == v) visit(r-1, c);
        if(jp[r+1][c] == v) visit(r+1, c);
        if(jp[r][c-1] == v) visit(r, c-1);
        if(jp[r][c+1] == v) visit(r, c+1);
        q.pop();
    }
    if(sum>maxC)
    {
        maxC=sum;
        maxV=v;
    }
}

int main()
{
    scanf("%d %d", &r, &c);
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= c; j++)
        {
            scanf("%d", &jp[i][j]);
        }
    }
    
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= c; j++) cntBFS(i, j);
    }
    if(maxC < 3) printf("0");
    else printf("%d %d", maxV, maxC);
    return 0;
}
