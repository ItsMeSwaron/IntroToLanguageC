#include<stdio.h>

void printer(int * a, int n, int i)
{
    if(i < 0)
    {
        return;
    }

    if(i%2 != 0)
    {
        i--;
    }
    
    printf("%d ", a[i]);
    printer(a,n,i-2);


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

    printer(A,N,N-1);

    return 0;
}
