#include <stdio.h>
#define MAX(a, b) ((a) >= (b) ? (a) : (b))

int n, m, mine[220][220], table[220][220];

int back(int row, int col)
{
    if(table[row][col]) return table[row][col];
    if(row == n && col == m) return mine[row][col];
    if(row > n || col > m) return 0;
    return table[row][col] = mine[row][col] + MAX(back(row+1, col), back(row, col+1));
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++)
    {
        for(int k = 1; k <= m; k++)
        {
            scanf("%d", &mine[i][k]);
        }
    }
    printf("%d", back(1, 1));
    return 0;
}
