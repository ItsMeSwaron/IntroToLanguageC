#include<stdio.h>

void printer(int N, int i)
{
    if(i == N+1)
    {
        return;
    }
    printf("%d\n", i);
    printer(N,i+1);


}

int main()
{ 
    int N;
    scanf("%d", &N);
    printer(N,1);
    return 0;
}
