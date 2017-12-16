#include <stdio.h>
#include <stack>

int G[101][101];
int chk[101];

using namespace std;

std::stack<char> st;

void visit(int n)
{
    st.push('A'+n);
    chk[n] = 1;
    printf("%c ", 'A'+n);
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &G[i][j]);
        }
    }
    visit(0);
    while(!st.empty())
    {
        for(int i =0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(G[i][j] == 1 && !chk[j])
                {
                    visit(j);
                    i=st.top()-'A';
                    j=0;
                }
            }
        }
    }
}
