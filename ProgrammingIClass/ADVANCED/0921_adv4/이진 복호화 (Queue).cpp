#include <stdio.h>
#include <queue>

std::queue<char> Q;
char arr[1 << 19], arr2[1 << 19];
int n, p;

void solve(int k,int s, int v)
{
    if(Q.empty()) return;
    if(v == '-')
    {
        Q.pop();
        solve(k, s/2, Q.front());
        Q.pop();
        solve(k+s/2, s/2, Q.front());
    }
    else
    {
        for(int i = k; i < k + s; i++) arr2[i] = v;
    }
}

int main()
{
    scanf("%d %s", &n, arr);
    for(int i = 0; arr[i]; i++) Q.push(arr[i]);
    solve(0, n, Q.front());
    printf("%s", arr2);
}
