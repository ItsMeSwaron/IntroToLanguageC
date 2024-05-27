#include<stdio.h>
#include<string.h>

int is_palindrome(char * a)
{   
    int signal = 0;
    int i = 0;
    int j = strlen(a) - 1;

    while(i<j)
    {
        if(a[i] == a[j])
        {
            signal++;
        }
        i++;
        j--;
    }

    if(signal == strlen(a) / 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }


}

int main()
{ 
    char S[1001];

    scanf("%s", S);

    int ans = is_palindrome(S);

    if(ans == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    
    return 0;
}
