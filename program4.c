/*

1
23
345
4567
56789
4567
345
23
1

*/
#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the number = ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        k=i;
        for(j=1; j<=i; j++, k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    for(i=n-1; i>=1; i--)
    {
        k=i;
        for(j=1; j<=i; j++, k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
