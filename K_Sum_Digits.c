#include<stdio.h>
#include<string.h>
int main()
{ 
    int N, sum = 0;
    scanf("%d", &N);

    char A[N];
    scanf("%s", A);

    for(int i = 0; i < N; i++)
    {
        sum = sum + (A[i] - 48);
    }

    printf("%d", sum);
    
    return 0;
}
