#include<stdio.h>
#include<string.h>
int main()
{ 
    char S[1001], T[1001];

    gets(S);
    gets(T);

    int x = strlen(S);
    int y = strlen(T);

    printf("%d ", x);
    printf("%d\n", y);

    printf("%s %s", S, T);

    return 0;
}
