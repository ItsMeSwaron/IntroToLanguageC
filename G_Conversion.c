#include<stdio.h>
#include<string.h>
int main()
{ 
    char S[100001];
    scanf("%s", S);

    for(int i=0;i<=strlen(S);i++)
    {
        if(S[i] == ',')
        {
            S[i] = ' ';
        }

        if(S[i] >= 'a' && S[i] <= 'z')
        {
            S[i] = S[i] - 32;
        }
        else if(S[i] >= 'A' && S[i] <= 'Z')
        {
            S[i] = S[i] + 32;
        }

    }

    printf("%s\n", S);
        
    

    return 0;
}
