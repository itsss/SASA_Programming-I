#include <stdio.h>

int main(void)
{
    int num_node, num_line;
    int arr[10000][10000];
    
    char a, b;
    
    scanf("%d %d", &num_node, &num_line);
    
    for(int i=0; i<num_line; i++)
    {
        scanf("%c %c", &a, &b);
        arr[a-'A'][b-'A']=1;
        arr[b-'A'][a-'A']=1;
    }
    
    for(int i=0; i<num_node; i++)
    {
        for(int j=0; j<num_node; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
}
