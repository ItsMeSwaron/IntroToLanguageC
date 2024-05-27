#include<stdio.h>
int main()
{ 
    int N;
    scanf("%d", &N);

    int A[N][N];

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int sumMd = 0;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i == j)
            {
                sumMd = sumMd + A[i][j];
            }
        }
    }

    int sumSd = 0;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i+j == N - 1)
            {
                sumSd = sumSd + A[i][j];
            }
        }
    }

    if(sumMd - sumSd >= 0)
    {
        printf("%d\n", sumMd - sumSd);
    }
    else
    {
        printf("%d\n", -1 * (sumMd - sumSd));
    }


    return 0;
}
