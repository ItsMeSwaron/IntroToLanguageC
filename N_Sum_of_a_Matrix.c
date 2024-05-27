#include<stdio.h>
int main()
{ 
    int R, C;
    scanf("%d %d", &R, &C);

    int A[R][C], B[R][C];

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            printf("%d ", A[i][j]+B[i][j]);
        }
        printf("\n");
    }


    return 0;
}
