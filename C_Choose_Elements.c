#include<stdio.h>
int main()
{ 
    int n;
    scanf("%d", &n);

    int a[n];

    int k;
    scanf("%d", &k);

    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] < a[j])
            {
                int osthaye;
                osthaye = a[i];
                a[i] = a[j];
                a[j] = osthaye;
            }
        }
    }

    long long int sum = 0;

    for(int i=0;i<k;i++)
    {
        if(a[i] > 0)
        {
            sum = sum + a[i];
        }
    }

    printf("%lld\n", sum);


    




    return 0;
}
