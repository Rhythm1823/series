//18. WAP to read the order of the matrix and its elements . Find the transpose matrix of the matrix.
#include <stdio.h>
void main()
{
    int i, j, m,n,mat[10][10];
    printf(" enter number of rows and columns m and n");
    scanf("%d%d",&m,&n);
    printf(" enter the elements of the matrix \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf(" enter %drow and %dcol",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf(" transpose \n");
      for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf(" \t %d",mat[j][i]);

        }
        printf("\n");
    }

}
