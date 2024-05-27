#include<stdio.h>

void printer(int N)
{
    if(N == 0)
    {
        return;
    }

    if(N > 1)
    {
        printf("%d ", N);
    }
    else
    {
        printf("1");
    }
    printer(N-1);


}

int main()
{ 
    int N;
    scanf("%d", &N);
    printer(N);
    return 0;
}
