#include<stdio.h>
int main()
{ 
    int N, i, max = 0, m;

    scanf("%d", &N);
    
    for(i = 1; i <= N; i++)
    {
        scanf("%d", &m);

        if(m >= max)
        {
            max = m;
        }

    }

    printf("%d\n", max);
    


    return 0;
}
