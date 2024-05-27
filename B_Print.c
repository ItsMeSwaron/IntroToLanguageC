#include<stdio.h>
void flow(int x)
{
    for(int i=1;i<=x;i++)
    {
        if(i<x)
        {
            printf("%d ", i);
        }
        else 
        {
            printf("%d", i);
        }
    }
}

int main()
{ 
    int N;
    scanf("%d", &N);

    flow(N);
    
    return 0;
}
