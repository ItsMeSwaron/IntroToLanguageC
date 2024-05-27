#include<stdio.h>
#include<string.h>
int main()
{ 
    char A[11], B[11];
    scanf("%s", A);
    scanf("%s", B);

    int sizeA = strlen(A);
    int sizeB = strlen(B);
    
    printf("%d %d\n", sizeA, sizeB);

    char C[23];

    for(int i=0;i<sizeA;i++)
    {
        C[i] = A[i];
    }

    for(int i=0;i<sizeB;i++)
    {
        C[i+sizeA] = B[i];
    }

    C[sizeA+sizeB] = '\0';

    printf("%s\n", C);

    char tempo;

    tempo = A[0];
    A[0] = B[0];
    B[0] = tempo;

    printf("%s ", A);
    printf("%s\n", B);

    return 0;
}
