#include<stdio.h>
int main()
{ 
    int n, s;
    scanf("%d", &n);
    int k = n;

    s = 0;

    for(int i=1;i<=n;i++)
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
        s++;
        k--;
    }
    return 0;
}
