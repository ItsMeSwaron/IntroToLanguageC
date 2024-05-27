#include<stdio.h>

long long int printer(int * A, long long int N, int i)
{
    if(i == N)
    {
        return 0;
    }

    long long int len = printer(A,N,i+1);

    return len+A[i];
}

int main()
{ 
    long long int N;
    scanf("%lld", &N);

    int A[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d", &A[i]);
    }

    long long int size = printer(A,N,0);

    printf("%lld\n", size);

    return 0;
}
