#include<stdio.h>

void printer(int N)
{
    if(N == 0)
    {
        return;
    }
    printf("I love Recursion\n");
    printer(N-1);

}

int main()
{ 
    int N;
    scanf("%d", &N);
    printer(N);
    return 0;
}
