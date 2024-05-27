#include<stdio.h>

long long int printer(long long int * A,int N,int i)
{   
    if(i == N)
    {
        return A[i-1];
    }

    long long int max = printer(A,N,i+1);

    if(max < A[i])
    {
        max = A[i];
        return max;
    }
    else
    {
        return max;
    }

}

int main()
{ 
    int N;
    scanf("%d", &N);

    long long int A[N];

    for(int i=0;i<N;i++)
    {
        scanf("%lld", &A[i]);
    }

    long long int Big = printer(A,N,0);

    printf("%lld", Big);

    return 0;
}
