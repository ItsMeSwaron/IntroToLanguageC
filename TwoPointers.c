#include<stdio.h>
int main()
{ 
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int A[n];
    int B[m];
    int C[n+m];

    for(int i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    
    for(int i=0;i<m;i++)
    {
        scanf("%d", &B[i]);
    }

    
    for(int i=0;i<n;i++)
    {
        C[i] = A[i];
    }
    
    for(int i=0;i<m;i++)
    {
        C[n+i] = B[i];
    }

    for(int i=0;i<n+m;i++)
    {
        printf("%d ", A[i]);
    }



    return 0;
}
