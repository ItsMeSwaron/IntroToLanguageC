#include<stdio.h>
int main()
{ 
    long long int n,m,k, jinish = 0;

    scanf("%lld %lld %lld", &n, &m, &k);

    if(n >= 1 && k >= 1)
    {
        if(n >= 1 && m >= 1 && k >= 1)
        {
            jinish++;
            n = n - 1;
            m = m - 1;
            k = k - 1;
        }

        if(n >= 2 && k >= 1)
        {
            jinish++;
            n = n - 2;
            k = k - 1;
        }
        
    }
    else
    {
        printf("0\n");
    }

    if(jinish != 0)
    {
        printf("%lld\n", jinish);
    }
   
    return 0;
}
