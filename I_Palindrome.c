#include<stdio.h>
#include<string.h>
int main()
{ 
    char S[1001], T[1001], temp;
    scanf("%s", S);

    for(int i=0;S[i]!='\0';i++)
    {
        T[i] = S[i];
    }

    int i = 0, j;

    j = strlen(S) - 1;

    while(i<j)
    {
        temp = S[i];
        S[i] = S[j];
        S[j] = temp;
        i++;
        j--;
    
    }

    int signal = 0;

    for(int i=0;T[i]!='\0';i++)
    {
        if(T[i] == S[i])
        {
            signal++;
        }
    }

    if(signal == strlen(S))
    {
         printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }



    return 0;
}
