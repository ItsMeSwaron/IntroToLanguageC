#include<stdio.h>
int main()
{ 
    int N, max, min;
    scanf("%d", &N);

    int A[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d", &A[i]);
    }

    max = A[0];

    for(int i=1;i<N;i++)
    {
        if(max < A[i])
        {
            max = A[i];
        }
    }

    min = A[0];

    for(int i=1;i<N;i++)
    {
       if(min > A[i])
       {
            min = A[i];
       }
    }

    int indexMax;

    for(int i=0;i<N;i++)
    {
        if(max == A[i])
        {
            indexMax = i;
        }
    }

    int indexMin;

    for(int i=0;i<N;i++)
    {
        if(min == A[i])
        {
            indexMin = i;
        }
    }

    A[indexMax] = min;
    A[indexMin] = max;

    for(int i=0;i<N;i++)
    {
        printf("%d ", A[i]);
    }
 
    return 0;
}
