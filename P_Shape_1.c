#include<stdio.h>
int main()
{ 
    int N;
    scanf("%d", &N);

    int k = N;

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }

        k--;
        printf("\n");

    }
    return 0;
}
