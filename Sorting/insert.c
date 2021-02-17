#include<stdio.h>
void insertion(int * x)
{
    int i, min_index,j,k,temp;
    for (i = 1; i <= 5;i++)
    {
        j = i - 1;
        k = i;
        while (x[k] < x[j])
        {
            
            temp = x[k];
            x[k] = x[j];
            x[j] = temp;
            k -= 1;
            j -= 1;

        }
    }
    for (i = 0; i < 5;i++)
        printf("%d ", x[i]);
}
int main()
{
    int num[20],i;
    printf("Enter the array");
    for (i = 0; i < 5;i++)
    {
        scanf("%d", &num[i]);
    }
    insertion(num);
    return 0;
}