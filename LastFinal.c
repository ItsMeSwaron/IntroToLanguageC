#include<stdio.h>
int main()
{ 
    int TCase;
    scanf("%d", &TCase);

    for(int i=1;i<=TCase;i++)
    {
        int N;
        scanf("%d", &N);

        int A[N];

        for(int i=0;i<N;i++)
        {
            scanf("%d", &A[i]);
        }

        int B[N];

        for(int i=0;i<N;i++)
        {
            B[i] = A[i];
        }

        for(int i=0;i<N-1;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if(B[i] > B[j])
                {
                    int osthaye;
                    osthaye = B[i];
                    B[i] = B[j];
                    B[j] = osthaye;
                }
            }
        }

        int C[N];

        for(int i=0;i<N;i++)
        {
            C[i] = A[i] - B[i];
        }

        for(int i=0;i<N;i++)
        {
            if(C[i] < 0)
            {
                printf("%d ", C[i] * -1);
            }
            else
            {
                printf("%d ", C[i]);
            }
        }

        printf("\n");


    }

    return 0;
}
