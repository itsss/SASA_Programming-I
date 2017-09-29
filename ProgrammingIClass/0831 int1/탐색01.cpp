#include <stdio.h>

int main()
{
    int a[10] = {54, 27, 74, 7, 92, 20, 18, 63, 88, 37};
    for(int i = 0; i < 10; i++)
    {
        if(a[i] == 20) printf("%d\n", i+1);
    }
}
