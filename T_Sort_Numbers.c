#include<stdio.h>
void sorter(int x, int y, int z)
{
    if(x < y && x < z)
    {
        printf("%d\n", x);
    }
    else if(y < x && y < z)
    {
        printf("%d\n", y);
    }
    else
    {
       printf("%d\n", z); 
    }

    if(x > y && x < z)
    {
        printf("%d\n", x);
    }
    else if(y > x && y < z)
    {
        printf("%d\n", y);
    }
    else
    {
       printf("%d\n", z); 
    }

    if(x > y && x > z)
    {
        printf("%d\n", x);
    }
    else if(y > x && y > z)
    {
        printf("%d\n", y);
    }
    else
    {
       printf("%d\n", z); 
    }

    printf("\n");

}

int main()
{ 
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    sorter(A,B,C);

    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}
