//8. Implement a Double-Ended Queue (DEQUEUE) with the operations:
//8.1 Insert elements to the Front of the queue.
//8.2 Insert elements to the Rear of the queue
//8.3 Delete elements from the Front of the queue.
//8.4 Delete elements from the Rear of the queue.
//8.5 Display the queue after each operation.
#include <stdio.h>

int max;
int front = 0;
int rear = -1;
int do_arr[50];

int isFull()
{
    if ((front == 0 && rear == max - 1) || (front == rear + 1))
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
    if (front < 0 || rear < front)
        return 1;
    else
    {
        return -1;
    }
}

void insertFront(int i)
{
    if (isEmpty() == -1)
    {
        front = rear = 0;
    }
    else
    {
        if (front == 0)
        {
            front = max - 1;
            do_arr[front] = i;
        }
        else
        {
            front--;
            do_arr[front] = i;
        }
    }
}

void insertLast(int i)
{
    if (isEmpty() == -1)
    {
        front = rear = 0;
    }
    else
    {
        if (rear == max - 1)
        {
            rear = 0;
            do_arr[rear] = i;
        }
        else
        {
            rear++;
            do_arr[rear] = i;
        }
    }
}
void display()
{
    int front_pos = front, rear_pos = rear,i;
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements :\n");
    for (i = 0; i < max; i++)
    {
        printf("%d ",do_arr[i]);
    }
    
    printf("\n");
}
void deleteFront(int i)
{
    if (isEmpty() == 1)
    {
        printf("Queue is Empty");
    }
    else
    {
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == max - 1)
            front = 0;

        else
            front-=1;
    }
}

void deleteLast(int i)
{
    if (isEmpty() == 1)
    {
        printf("Queue is Empty");
    }
    else
    {
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear == 0)
            rear = max-1;

        else
            ++rear;
    }
}



int main()
{
    int item, n, n2;
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
            printf("---------------------------------------\n");
            printf("1.Insert Front\n");
            printf("2.Insert Back\n");
            printf("3.Quit\n");
            printf("---------------------------------------\n");
            printf("Enter a choice (1,2,3) --> ");
            scanf("%d", &n2);
            printf("---------------------------------------\n");
            switch (n2)
            {
            case 1:
                printf("Input the element for insertion in Front portion of the  queue : ");
                scanf("%d", &item);
                insertFront(item);
                break;
            case 2:
                printf("Input the element for insertion in Back portion of the  queue : ");
                scanf("%d", &item);
                insertLast(item);
                break;
            case 3:
                break;
            default:
                printf("Please enter the right choice");
                break;
            }
            break;

        case 2:
            printf("---------------------------------------\n");
            printf("1.Delete Front\n");
            printf("2.Delete Back\n");
            printf("3.Quit\n");
            printf("---------------------------------------\n");
            printf("Enter a choice (1,2,3) --> ");
            scanf("%d", &n2);
            printf("---------------------------------------\n");
            switch (n2)
            {
            case 1:
                printf("Input the element for deletion in Front portion of the  queue : ");
                scanf("%d", &item);
                deleteFront(item);
                break;
            case 2:
                printf("Input the element for deletion in Back portion of the  queue : ");
                scanf("%d", &item);
                deleteLast(item);
                break;
            case 3:
                break;
            default:
                printf("Please enter the right choice");
                break;
            }
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
