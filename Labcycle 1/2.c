//C Write a program to enter two matrices in normal form .
//Write a function to convert two matrices to tuple form and display it.
//find the transpose of the two matrices represented in tuple form and display it.
//Find the sum of the two matrices in tuple form and display the sum in tuple form.
#include <stdio.h>
#include <stdlib.h>

//read function to read the matrix
void read(int *x, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &*(x + i * n + j));
        }
    }
}

//display function to display the matrix
void display(int *x, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", *(x + i * n + j));
        }
        printf("\n");
    }
}
void tuple(int *x, int n, int m)
{
    int i, j;
    printf("(");
    for (i = 0; i < m; i++)
    {
        printf("(");
        for (j = 0; j < n; j++)
        {
            if (j == n - 1)
            {
                printf("%d", *(x + i * n + j));
            }
            else
                printf("%d ", *(x + i * n + j));
        }
        printf(")");
    }
    printf(") \n");
}
void transpose(int *x, int m, int n)
{
    int i, j;
    printf("(");
    for (i = 0; i < m; i++)
    {
        printf("(");
        for (j = 0; j < n; j++)
        {
            if (j == n - 1)
            {
                printf("%d", *(x + j * n + i));
            }
            else
                printf("%d ", *(x + j * n + i));
        }
        printf(")");
    }
    printf(") \n");
}
void sum(int *x, int *y, int m, int n, int p, int q)
{
    int i,j;
    if (m == p && n == q)
    {
        printf("(");
        for (i = 0; i < m; i++)
        {
            printf("(");
            for (j = 0; j < n; j++)
            {
                if (j == n - 1)
                {
                    printf("%d", *(x + i * n + j) + *(y + i * n + j));
                }
                else
                    printf("%d ", *(x + j * n + i)+ *(y + i * n + j));
            }
            printf(")");
        }
        printf(") \n");
    }
}

int main()
{
    int r, c, i, j, num, r2, c2;
    printf("Enter the row and column of 1st matrix --> ");
    scanf("%d%d", &r, &c);
    printf("Enter the row and column of 2nd matrix --> ");
    scanf("%d%d", &r2, &c2);
    int *arr = malloc(r * c * sizeof(int));
    int *arr2 = malloc(r * c * sizeof(int));
    //printf("How many matrix to be entered --> ");
    //scanf("%d", &num);
    //read and display 1st matrix
    read(arr, r, c);
    display(arr, r, c);
    printf("\n");
    //read and display 2nd matrix
    read(arr2, r2, c2);
    display(arr2, r2, c2);
    //To Tuple from the 1st matrix
     printf("\nTuple of 1st matrix = ");
    tuple(arr, r, c);
    //To Tuple from the 2nd matrix
    printf("\nTuple of 2nd matrix = ");
    tuple(arr2, r2, c2);
    //Transpose
    printf("\nTranspose of 1st matrix in tuple = ");
    transpose(arr, c, r);
    printf("\nTranspose of 2nd matrix in tuple = ");
    transpose(arr2, c2, r2);
    //Sum
    printf("\nSum = ");
    sum(arr, arr2, r, c, r2, c2);
    free(arr);
    free(arr2);
    return 0;
}
