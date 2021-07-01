#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100], n, b, p, i, q, j;

    printf("Enter the size of the matrix\n");
    scanf("%d", &n);

    //displaying array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("*\t");
            if(j==n-1)
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

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==p && j==q)
           {
              a[i][j]=b;
           }
           else
           {
              a[i][j]='*';
           }
        }
    }

    printf("\nDisplaying matrix\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==p && j==q)
            {
               printf("%d\t", a[i][j]);
               if(j==n-1)
                printf("\n");
            }
            else
            {
               printf("%c\t", a[i][j]);
               if(j==n-1)
                printf("\n");
            }
        }
    }

    printf("\n");
    return 0;
}
