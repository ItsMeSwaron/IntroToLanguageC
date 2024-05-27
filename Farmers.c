#include<stdio.h>
int main()
{ 
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int m1,m2,d;
        scanf("%d%d%d",&m1,&m2,&d);
        int case1=m1*d;
        int case2=case1/(m1+m2);
        int case3=d-case2;
        printf("%d\n",case3);
    }

    return 0;
}