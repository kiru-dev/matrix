#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100], n, b, p, i, q, j;

    printf("Enter the size of the matrix\n");
    scanf("%d", &n);

    //displaying matrix

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("*\t");
            if(j==n)
            {
                printf("\n");
            }
        }
    }

    printf("\nEnter a number\n");
    scanf("%d", &b);

    printf("\nEnter a row position starting from zero\n");
    scanf("%d", &p);
    
    printf("\nEnter a column position starting from zero\n");
    scanf("%d", &q);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==p && j==q)
           {
              a[i-1][j-1]=b;
           }
           else
           {
              a[i-1][j-1]='*';
           }
        }
    }

    printf("\nDisplaying matrix\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==p && j==q)
            {
               printf("%d\t", a[i-1][j-1]);
               if(j==n)
                printf("\n");
            }
            else
            {
               printf("%c\t", a[i-1][j-1]);
               if(j==n)
                printf("\n");
            }
        }
    }

    printf("\n");
    return 0;
}
