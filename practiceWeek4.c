// #include<stdio.h>
// int main()
// { 
//     int n;
//     scanf("%d", &n);

//     int k=2*n-1, s=0;

//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=s;j++)
//         {
//             printf(" ");
//         }

//         for(int j=1;j<=k;j++)
//         {
//             printf("*");
//         }

//         s++;
//         k-=2;

//         printf("\n");


//     }
//     return 0;
// }


// #include<stdio.h>

// int char_to_ascii(char x)
// {
//     int conv = x;
//     return conv;
// }

// int main()
// { 
//     char a;
//     scanf(" %c", &a);

//     int val = char_to_ascii(a);

//     printf("%d\n", val);
    
//     return 0;
// }

#include<stdio.h>

char small_to_capital(char x)
{
    char chng = x + 32;
    return chng;
}

int main()
{ 
    char a;
    scanf("%c", &a);

    char final = small_to_capital(a);

    printf("%c\n", final);
    
    return 0;
}
