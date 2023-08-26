#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("enter the row and column number of the 2d array:\n");
    int rows, col;
    scanf("%d %d", &rows, &col);

    int a[rows][col];
    printf("enter the input");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix is :-\n");
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

int count = 0;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < col; j++)
    {
        if (a[i][j] != 0)
        {
            count++;
        }
    }
}
int x = 0;
int b[3][count];
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < col; j++)
    {
        if (a[i][j] != 0)
        {
            b[0][x] = i;
            b[1][x] = j;
            b[2][x] = a[i][j];
            x++;
        }
    }
}

printf("output:-");
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < col; j++)
    {
        printf("%d ", b[i][j]);
    }
    printf("\n");
}
}