#include<stdio.h>
void mixer(int * A, int X)
{
    int min = A[0];

    for(int i=1;i<X;i++)
    {
        if(min > A[i])
        {
            min = A[i];
        }
    }

    printf("%d ", min);

    int max = A[0];

    for(int i=1;i<X;i++)
    {
        if(max < A[i])
        {
            max = A[i];
        }
    }

    printf("%d\n", max);

}


int main()
{ 
    int N;
    scanf("%d", &N);

    int A[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d", &A[i]);
    }

    mixer(A,N);

    return 0;
}
