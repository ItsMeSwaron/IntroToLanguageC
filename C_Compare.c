#include<stdio.h>
#include<string.h>
int main()
{ 
    char X[21], Y[21];
    scanf("%s", X);
    scanf("%s", Y);

    int val = strcmp(X,Y);

    if(val > 0)
    {
        printf("%s\n", Y);
    }
    else if(val < 0)
    {
        printf("%s\n", X);
    }
    else
    {
        printf("%s\n", X);
    }

    return 0;
}
