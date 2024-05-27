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

    int src, flag = 0;
    scanf("%d", &src);

    for(int i=0;i<N;i++)
    {
        if(src == A[i])
        {
            printf("%d\n", i);
            flag++;
            break;
        }
    }

    if(flag == 0)
    {
        printf("-1\n");
    }



    return 0;
}
