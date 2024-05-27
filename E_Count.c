#include<stdio.h>
int main()
{ 
    char S[3] = {'1','9','5'};

    // scanf("%c ", &S[0]);
    // scanf("%c ", &S[1]);
    // scanf("%c ", &S[2]);
    
    int x = (int) S[0];
    int y = (int) S[1];
    int z = (int) S[2];

    int sum = x + y + z;

    printf("%d\n", sum);



    return 0;
}
