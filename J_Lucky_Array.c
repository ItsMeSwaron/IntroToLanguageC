#include<stdio.h>
int main()
{ 
    int N;
    scanf("%d", &N);

    int A[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d", &A[i]);
    }

    int min = A[0];

    for(int i=1;i<N;i++)
    {
        if(min > A[i])
        {
            min = A[i];
        }
    }

    int Totalmin = 0;

    for(int i=0;i<N;i++)
    {
        if(min == A[i])
        {
            Totalmin++;
        }
    }

    if(Totalmin%2 != 0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }




    return 0;
}
