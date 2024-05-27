#include<stdio.h>
int main()
{ 
    int N, CopyN;
    scanf("%d", &N);

    CopyN = N;

    int count = 0;

    while(CopyN!=0)
    {
        CopyN = CopyN/10;
        count++;
    }

    int arr[count];
    int j = 0;

    while(N!=0)
    {     
        int osthaye = N%10;
        N = N/10;
        for(int i=j;i<count;)
        {
            arr[i] = osthaye;
            j++;
            break;
        }
    }

    for(int i=count-1;i>=0;i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
