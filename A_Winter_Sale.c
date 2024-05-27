#include<stdio.h>
int main()
{ 
    float X, P;
    scanf("%f %f", &X, &P);

    float OriginPri;

    OriginPri = P / (1 - (X/100));

    printf("%.2f\n", OriginPri);

    return 0;
}
