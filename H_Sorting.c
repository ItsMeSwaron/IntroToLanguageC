#include<stdio.h>
int main()
{ 
    int N;
    scanf("%d", &N);

    int A[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(A[i] > A[j])
            {
                int osthaye = A[i];
                A[i] = A[j];
                A[j] = osthaye;
            }
        }
    }

    for(int i=0;i<N;i++)
    {
        printf("%d ", A[i]);
    }
    
    return 0;
}
