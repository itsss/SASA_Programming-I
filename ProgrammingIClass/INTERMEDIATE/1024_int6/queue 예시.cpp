#include <stdio.h>
#include <queue>

using namespace std;
queue<char> q;

int main()
{
    for(int i = 0; i < 5; i++)
    {
        q.push((char)i+'A');
    }
    while(!q.empty())
    {
        printf("%c ", q.front());
        q.pop();
    }
}
