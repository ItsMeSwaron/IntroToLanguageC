#include<stdio.h>
#include<string.h>
int main()
{ 
    char S[1000001];
    scanf("%s", S);

    int checker[26] = {0};

    for(int i=0;i<strlen(S);i++)
    {
        int val = S[i] - 97;
        checker[val]++;
    }

    for(int i=0;i<26;i++)
    {
        if(checker[i] != 0)
        {
            printf("%c : %d\n", i+97, checker[i]);
        }
        
    }
    
    return 0;
}
