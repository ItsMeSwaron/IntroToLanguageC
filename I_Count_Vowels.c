#include<stdio.h>

int printer(char * s, int i)
{

    if(s[i]  == '\0')
    {
        return 0;
    }

    int ans = printer(s,i+1);

    if(s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }
    
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }



}


int main()
{ 
    char S[201];
    fgets(S,201,stdin);

    int ans = printer(S,0);
    printf("%d", ans);
    
    return 0;
}