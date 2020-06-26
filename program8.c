/*

1
24
135
2468
13579
2468
135
24
1

*/

#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter number = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
            k = 2;
        else
            k = 1;

        for(j=1; j<=i; j++, k+=2)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    for(i=n-1; i>=1; i--)
    {
        if(i%2 == 0)
            k = 2;
        else
            k = 1;

        for(j=1; j<=i; j++, k+=2)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
