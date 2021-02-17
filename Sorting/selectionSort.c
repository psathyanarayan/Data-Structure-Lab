#include <stdio.h>
void selection(int *x)
{
    int i, min_index,j,temp;
    for (i = 0; i < 4;i++)
    {
        min_index = i;
        for (j = i + 1; j < 5;j++)
        {
            if(x[j]<x[min_index])
            {
                temp = x[j];
                x[j] = x[min_index];
                x[min_index] = temp;
            }
        }
    }
    for (i = 0; i < 5;i++)
        printf("%d ", x[i]);
}
int main(int argc, char const *argv[])
{
    int num[20],i;
    printf("Enter the array");
    for (i = 0; i < 5;i++)
    {
        scanf("%d", &num[i]);
    }
    selection(num);
    return 0;
}