#include <stdio.h>
#include<stdlib.h>
void mergeSort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);
int main()
{
   int num[20],i;
    printf("Enter the array");
    for (i = 0; i < 7;i++)
    {
        scanf("%d", &num[i]);
    }
    mergeSort(num,0,5);
    for (i = 0; i < 6;i++)
        printf("%d ", num[i]);
    return 0;
}
void mergeSort(int arr[],int l,int r)
{
    int m;
    if (l < r)  //At least 2 elements 
    {
    
        m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }    
    
  
}
void merge(int arr[],int l,int m, int r )
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2;j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k] = L[i];
            i += 1;
        }
        else
        {
            arr[k] = R[j];
            j += 1;
        }
        k += 1;
    }
    for (; i < n1;i++)
    {
        arr[k] = L[i];
        k += 1;
    }
    for (; j < n2;j++)
    {
        arr[k] = R[j];
        k += 1;
    }
}
