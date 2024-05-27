#include<stdio.h>
int main()
{ 
    int N, min;
    scanf("%d", &N);

    int A[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d", &A[i]);
    }

    min = A[0];

    for(int i=1;i<N;i++)
    {
        if(min > A[i])
        {
            min = A[i];
        }
        
    }

    for(int i=0;i<N;i++)
    {
        if(min == A[i])
        {
            printf("%d %d\n", min, i+1);
            break;
        }
    }

    return 0;

}