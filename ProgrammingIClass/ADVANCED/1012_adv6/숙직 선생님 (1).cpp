#include <stdio.h>
#include <time.h>

int a, b, abt[3], ans=2000;

void solve(int nxt, int cnt)
{
    if(nxt > b) return;
    if(b == nxt) if(cnt < ans) ans = cnt;
    for(int i = 0; i < 3; i++) solve(nxt+abt[i], cnt+1);
}

int main()
{
    scanf("%d %d", &a, &b);
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &abt[i]);
    }
    clock_t s = clock();
    solve(a, 0);
    clock_t e = clock();
    
    if(ans != 2000) printf("%d", ans);
    else printf("-1");
    
    printf("\nresult = %f (sec)\n", (float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}

//숙직 선생님
