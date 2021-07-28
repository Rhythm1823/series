//17. WAP to define three user defined function for reading , processing and displaying of 2*3 matrices .
//Double the matrix element and display it.
#include <stdio.h>
void read();
void processing(int a[][3]);
void displaying(int a[][3]);
int i,j;
void main()
{
    read();
}
void read()
{
    int mat[2][3];
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf(" enter %drow %dcol",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    processing(mat);
}
void processing(int mat[][3])
{
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            mat[i][j]*=2;
        }
    }
    displaying(mat);
}
void displaying(int mat[][3])
{
     for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
           printf("\t %d",mat[i][j]);
        }
        printf("\n");
    }
}
