#include<stdio.h>
int main()
{ 
     char X;

     scanf("%c", &X);

     if(X >= 'a' && X <= 'y')
     {
        printf("%c\n", X+1);
     }

    if(X == 'z')
    {
       printf("a\n");
    }
    
    return 0;
}