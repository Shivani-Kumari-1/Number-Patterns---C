/*

1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
4 8 11 13
3 7 10
2 6
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
        for(j=1; j<=i; j++)
        {
            printf("%d", k);
            k+=n-j;
        }
        printf("\n");
    }

    for(i=n-1; i>=1; i--)
    {
        k=i;
        for(j=1; j<=i; j++)
        {
            printf("%d", k);
            k+=n-j;
        }
        printf("\n");
    }
    return 0;
}
