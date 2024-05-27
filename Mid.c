#include<stdio.h>
int main()
{ 
    int T;
    scanf("%d", &T);

    int M1, M2, D, FinalAns;
    double X, ans = 0;

    for(int i=1;i<=T;i++)
    {
        scanf("%d %d %d", &M1, &M2, &D);

        if(M2 == 0)
        {
            printf("0\n");
        }
        else
        {
            X = (double) M1 / D;
            
            ans = (double) D - (M1 + M2) * X;
            FinalAns = (int) ans;
            
            if(FinalAns > 0)
            {
                printf("%d\n", FinalAns);
            }
            else
            {
                printf("1\n");
            }
        }

        ans = 0;

    }
    

    
    return 0;
}
