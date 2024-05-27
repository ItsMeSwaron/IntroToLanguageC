#include<stdio.h>
int main()
{ 
    char S[200];

    fgets(S, 200, stdin);

    for(int i=0;S[i]!='\\';i++)
    {
        printf("%c", S[i]);
    }

    return 0;
}
