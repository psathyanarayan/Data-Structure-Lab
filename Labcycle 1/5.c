//Implement a Stack using arrays with the operations:
//Pushing elements to the Stack.
//Popping elements from the Stack
//Display the contents of the Stack after each operation.
#include<stdio.h>
int top=-1;
int max;
int stack_arr[20];
int isFull()
{
    if(top==max-1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
    
}
int isEmpty()
{
    if(top<0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
    
}
void push(int i)
{
    if(isFull() == -1)
    {
        top = top+1;
        stack_arr[top] = i;
        printf("Top = %d\n",stack_arr[top]);
    }
    else
    {
        printf("!! Overflow Detected !!\n");
    }
    
}
void pop()
{
    if(isEmpty() == -1)
    {
        int data = stack_arr[top];
        top = top-1;
        printf("Deleted Element is %d\n",data);
    }
    else
    {
        printf("!! Underflow Detected\n");
    }
    
}
void display()
{
   if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(int i=top; i>=0; i--)
            printf("%d ",stack_arr[i]);
    }
    else
    {
        printf("\n The STACK is empty");
    }
    printf("\n");

}
int main()
{
     int item, n;
    printf("Expected MAX Size of the array --> ");
    scanf("%d", &max);
    do
    {
        printf("---------------------------------------\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("---------------------------------------\n");
        printf("Enter a choice (1,2,3,4) --> ");
        scanf("%d", &n);
        printf("---------------------------------------\n");
        switch (n)
        {
        case 1:
            printf("Input the element for insertion in queue : ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Wrong choice\n");
        }
    } while (n != 4);
    return 0;
}
