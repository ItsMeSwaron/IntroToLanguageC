#include<stdio.h>

void printer(int N)
{
    if(N == 0)
    {
        return;
    }

    int digi = N%10;
    N = N/10;
    printer(N);
    printf("%d ", digi);

}
int main()
{ 
    int try;
    scanf("%d", &try);

    for(int i=1;i<=try;i++)
    {   
        int N;
        scanf("%d", &N);
        if(N == 0)
        {
            printf("0");
        }
        printer(N);
        printf("\n");
    }

    return 0;
}
