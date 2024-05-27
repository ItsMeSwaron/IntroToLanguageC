#include<stdio.h>
#include<string.h>
int main()
{ 
    int N, M;
    scanf("%d %d", &N, &M);

    int count[100001] = {0};

    int A[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i=0;i<N;i++)
    {
       int val = A[i];
       count[val]++;
    }

    for(int i=1;i<=M;i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}
