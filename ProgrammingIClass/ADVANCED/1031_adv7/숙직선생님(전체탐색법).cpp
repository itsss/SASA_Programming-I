#include <stdio.h>

int a, b, able[3], ans=2000;

void back(int next, int cnt)
{
    //printf("function: back(%d, %d)\n", next, cnt);
    if(next > b) return;
    if(b == next)
    {
        //printf("if: b(%d) == next(%d)\n", b, next);
        if(cnt < ans) ans = cnt; printf("if: cnt < ans => %d\n", ans);
    }
    for(int i = 0; i < 3; i++)
    {
        //printf("function_rec: back(%d, %d)\n", next+able[i], cnt+1);
        back(next+able[i], cnt+1);
    }
}

int main()
{
    scanf("%d %d", &a, &b);
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &able[i]);
    }
    back(a, 0);
    if(ans != 2000) printf("%d", ans);
    else printf("-1");
    return 0;
}
