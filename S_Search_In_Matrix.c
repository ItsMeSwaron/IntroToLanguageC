#include<stdio.h>
int main()
{ 
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N][M];

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int X;
    scanf("%d", &X);

    int signal = 0;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
           if(X == A[i][j])
           {
                printf("will not take number\n");
                signal++;
                break;
           }
       
        }
        if(signal > 0)
        {
            break;
        }
    }

    if(signal == 0)
    {
        printf("will take number\n");
    }


    return 0;
}
