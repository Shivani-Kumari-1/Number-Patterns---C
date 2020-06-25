/*

1
22
333
2222
11111
2222
333
22
1

*/

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\nEnter number = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            {
                if(i <= n/2)
                    printf("%d",i);
                else
                    printf("%d", n-i+1);
            }
            printf("\n");
    }
    for(i=n-1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
            {
                if(i <= n/2)
                    printf("%d",i);
                else
                    printf("%d", n-i+1);
            }
            printf("\n");
    }
    return 0;
}
