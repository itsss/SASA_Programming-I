#include <stdio.h>

int n, k, A[100001];

int solve(int start, int end)
{
    int mid;
    while(end - start > 0)
    {
        mid = (end + start) / 2;
        if(A[mid] <= k) start = mid + 1; //if문 등호만 다름
        else end = mid;
    }
    return end + 1;
}

int main()
{
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) scanf("%d", &A[i]);
    printf("%d\n", solve(0, n));
}

//upper bound
