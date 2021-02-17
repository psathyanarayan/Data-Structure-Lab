#include<stdio.h>
int partition(int *num, int low, int heigh)
{
    int pivot, i, j, temp;
    pivot = num[heigh];
    i = (low - 1);
    for (j = low; j < heigh;j++)
    {
        if (num[j]<= pivot)
        {
            i++;
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;
            
        }
    }
    temp = num[i+1];
    num[i+1] = num[heigh];
    num[heigh] = temp;
    return i + 1;
}
void quick(int *num,int low,int heigh)
{
    int pi,i;
    if (low < heigh)
    {
        pi = partition(num, low, heigh);
        quick(num, low, pi - 1);
        quick(num, pi + 1, heigh);
        
    }
    
    
}
int main(int argc, char const *argv[])
{
    int num[20],i;
    printf("Enter the array");
    for (i = 0; i < 7;i++)
    {
        scanf("%d", &num[i]);
    }
    quick(num,0,6);
    for (i = 0; i < 7;i++)
        printf("%d ", num[i]);
    return 0;
}