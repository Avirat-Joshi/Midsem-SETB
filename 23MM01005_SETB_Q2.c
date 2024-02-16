#include<stdio.h>
int main()
{
    int l,u,sum=0;
    printf("Input lower limit: ");
    scanf("%d",&l);
    printf("\nInput upper limit: ");
    scanf("%d",&u);
    printf("\nPerfect numbers: ");
    for(int i=l;i<=u;i++)
    {
        sum=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            printf("%d ",i);
    }
    return 0;
}