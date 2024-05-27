#include<stdio.h>
int main()
{ 
    int n;
    scanf("%d", &n);

    int arr[n+1];

    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int posi;
    scanf("%d", &posi);

    for(int i=n+1;i>posi;i--)
    {
        arr[i] = arr[i-1];
    }

    int newVal;
    scanf("%d", &newVal);

    arr[posi] = newVal;

    for(int i=0;i<n+1;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
