/*

1
21
123
4321
12345
4321
123
21
1

*/

#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("\nEnter number = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2 == 1)
            k = 1;
        else
            k = i;
        for(j=1; j<=i; j++)
            {
              printf("%d",k);
                if(i%2 == 1)
                    k++;
                else
                    k--;
             }
            printf("\n");
    }
    for(i=n-1; i>=1; i--)
    {
        if(i%2 == 1)
            k = 1;
        else
            k = i;
        for(j=1; j<=i; j++)
            {
             printf("%d",k);
                if(i%2 == 1)
                    k++;
                else
                    k--;
            }
            printf("\n");
    }
    return 0;
}
