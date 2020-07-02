// You are using GCC
#include<stdio.h>
int main()
{
    int n,i,j,k=1,c=1;
    scanf("%d",&n);
    int a[n][n];
    
    if(n>=1 && n<=55)
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j!=0 && j<n)
            printf("*");
            printf("%d",k);
               a[i][j]=k++;
        }
        printf("\n");
    } 
    k=k-n;
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(j!=0 && j<n)
            printf("*");
            printf("%d",k);
                k++;
        }
        
        k=a[i][0]-i;
        printf("\n");
    }
    }
}