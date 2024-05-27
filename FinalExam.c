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

    if(N != M)
    {
        printf("NO\n");
    }
    else
    {
        int MainDiagSignal = 0, SecDiagSignal = 0;

        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(i==j)
                {
                    if(A[i][j] == 1)
                    {
                        MainDiagSignal++;
                    }
                }
            }
        }

        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(i+j == N-1)
                {
                    if(A[i][j] == 1)
                    {
                        SecDiagSignal++;
                    }
                }
            }
        }

        int PawaGeseAshami = 0;

        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if((i != j) && (i+j != N-1))
                {
                    if(A[i][j] != 0)
                    {
                        PawaGeseAshami++;
                    }
                }
            }
        }

    
        if(PawaGeseAshami == 0 && MainDiagSignal == N && SecDiagSignal == N)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
            
    }






    return 0;
}


