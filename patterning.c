#include<stdio.h>
int main()
{ 
    int n, k, s;
    scanf("%d", &n);
    k = n;
    s = n - 2;

    for(int i=1;i<=n;i++)
    {
        if(i == 1 || i == n)
        {
            for(int j=1;j<=k;j++)
            {
                printf("* ");
            }
            
        }

        if(i > 1 && i < n)
        {
            printf("* ");

            for(int j=1;j<=s;j++)
            {
                printf("  ");
            }

            printf("* ");

        }
        printf("\n");
    }
    return 0;
}
