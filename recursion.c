#include<stdio.h>

void fun(int i, int * N)
{
    if(i==*N+1)
    {
        return;
    }
    printf("%d ", i);
    fun(i+1,*N);

}

int main()
{ 
    int n;
    scanf("%d",&n);
    fun(1,&n);
    return 0;
}
