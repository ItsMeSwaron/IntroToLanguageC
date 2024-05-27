#include<stdio.h>
int main()
{ 
    int N, x, i, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &x);

    for(i = 1; i <= x; i++)
    {
        scanf("%d", &N);

        if(N%2 == 0)
        {
            even++;
        }

        if(N%2 != 0)
        {
            odd++;
        }

        if(N > 0)
        {
            pos++;
        }

        if(N < 0)
        {
            neg++;
        }

    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    
    return 0;
}
