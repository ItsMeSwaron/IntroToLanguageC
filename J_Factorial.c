#include<stdio.h>

long long int printer(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return n * printer(n-1);

}    

int main()
{ 
    int N;
    scanf("%d", &N);

    if(N == 0)
    {
        printf("1");
    }
    else
    {    
        long long int ans = printer(N);
        printf("%lld\n", ans);
    }



    return 0;
}
