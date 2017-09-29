#include <stdio.h>
int a, b, arr[500001];

int sol(int start, int end)
{
    int mid;
    while(end - start > 0)
    {
        mid = (start + end) / 2;
        if(arr[mid] < b) start = mid + 1;
        else end = mid;
    }
    return end + 1;
}

int main()
{
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("%d\n", sol(0, a));
    return 0;
}
//SOL1

/*
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, arr[100001];
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++) scanf("%d", &arr[i]);
    printf("%d\n", lower_bound(arr, arr+a, b)-arr+1);
}
//SOL2
*/
