#include<stdio.h>
int main()
{ 
    int N; 
    long long int sum = 0;
    scanf("%d", &N);

    int A[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i=0;i<N;i++)
    {
        sum = sum + A[i];
    }

    if(sum < 0)
    {
        sum = sum * (-1);
        printf("%lld\n", sum);
    }
    else
    {
        printf("%lld\n", sum);
    }
    return 0;
}
