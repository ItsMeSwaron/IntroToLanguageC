#include<stdio.h>
int main()
{ 
    int N;
    scanf("%d", &N);

    int get;

    get = N/2 + 1;

    int k = 1, s = get + 4;

    int FinalN = s + 1;

    for(int i=1;i<=FinalN;i++)
    {   
        
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }

        for(int j=1;j<=k;j++)
        {
            printf("*");
        }

        printf("\n");

        s--;
        k += 2;

    }

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf(" ");
        }

        for(int j=1;j<=N;j++)
        {
            printf("*");
        }

        printf("\n");

    }
       


    return 0;
}
