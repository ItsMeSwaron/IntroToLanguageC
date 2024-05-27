#include<stdio.h>
int main()
{ 
    int arr[5], tempo;

    for(int i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i] < arr[j])
            {
                tempo = arr[i];
                arr[i] = arr[j];
                arr[j] = tempo;
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
