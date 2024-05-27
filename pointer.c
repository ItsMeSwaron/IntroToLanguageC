#include <stdio.h>
// void bang(int * a)
// {
//     printf("%d\n", *a);

//     *a = 20;

// }

int main()
{

    // int ary[4] = {1, 2, 3, 4};

    // int *p;

    // p = ary + 2;

    // printf("address %p\n", p);
    // printf("address %d\n", *p);

    // *p = 5;

    // printf("%d\n", ary[2]);

    int x = 10;

    int * pt = &x;

    int * qt = pt;


    printf("x address = %p\n", &x);
    printf("pt address = %p\n", pt);
    printf("qt address = %p\n", qt);


}