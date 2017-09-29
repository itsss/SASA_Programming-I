#include <stdio.h>

int arr[10][10];

int main()
{
    int c=0, d=0;
    char a, b;
    scanf("%d %d", &c, &d);
    
    for(int i = 0; i < d; i++)
    {
        scanf(" %c %c", &a, &b);
        int tmp1 = a - 'A';
        int tmp2 = b - 'A';
        arr[tmp1][tmp2]=1;
        //arr[tmp2][tmp1]=1;
    }
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < c; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
}
