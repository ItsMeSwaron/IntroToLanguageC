#include<stdio.h>
int main()
{ 
    int T, N, X;

    scanf("%d", &T);

    while(T!=0)
    {
        int signal = 0;

        scanf("%d", &N);

        int A[N];

        for(int i=0;i<N;i++)
        {
            scanf("%d", &A[i]);
        }

        scanf("%d", &X);

        for(int i=0;i<N;i++)
        {
            if(X == A[i])
            {
                printf("YES\n");
                signal++;
                break;
                
            }
        }

        if(signal == 0)
        {
            printf("NO\n");
        }

        T--;
    }
    


    
    return 0;
}
