#include <stdio.h>
#include <queue>

using namespace std;
queue<int> q;
int d[1200];

int main()
{
    int a, b, able[3];
    scanf("%d %d", &a, &b);
    for(int i = 0; i < 3; i++) scanf("%d", &able[i]);
    q.push(a);
    while(!q.empty())
    {
        int value = q.front();
        if(value == b)
        {
            printf("%d", d[value]);
            return 0;
        }
        q.pop();
        for(int i = 0; i < 3; i++)
        {
            int temp = value + able[i];
            if(temp <= b && !d[temp])
            {
                q.push(temp);
                d[temp] = d[value] + 1;
            }
        }
    }
    printf("-1");
    return 0;
}

