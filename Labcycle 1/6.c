//Implement a Priority Queue using arrays with the operations:
//Insert elements to the Priority Queue.
//Delete elements from the Priority Queue.
//Display the contents of the Priority Queue after each operation.
#include <stdio.h>
int max, pq_arr[20];
int front = -1;
int rear = -1;

void check(int x)
{
    int i, j;
    for (i = 0; i <= rear; i++)
    {
        if (x >= pq_arr[i])
        {
            for (j = rear + 1; j > i; j--)
            {
                pq_arr[j] = pq_arr[j - 1];
            }
            pq_arr[i] = x;
            return;
        }
    }
    pq_arr[i] = x;
}

void enqueue(int i)
{
    if (rear > max )
    {
        printf("!! Warning queue Overflow detected !!");
        return;
    }
    if (front == -1 && rear == -1)
    {
        front += 1;
        rear += 1;
        pq_arr[rear] = i;
        return;
    }
    else
    {
        check(i);
        rear += 1;
    }
}

void dequeue(int data)
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("!! Warning Queue is Empty !!");
    }
    for (i = 0; i < rear; i++)
    {
        if (data == pq_arr[i])
        {
            for (; i < rear; i++)
            {
                pq_arr[i] = pq_arr[i + 1];
            }
            pq_arr[i] = -99;
            rear--;
            if (rear == -1)
            {
                front = -1;
            }
            return;
        }
    }
    printf("\n%d not found in queue to delete", data);
}
void display()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
        return;
    }
 
    for (; front <= rear; front++)
    {
        printf(" %d ", pq_arr[front]);
    }
 printf("\n");
    front = 0;
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
            enqueue(item);
            break;
        case 2:
            printf("Input the element for deletion in queue : ");
            scanf("%d", &item);
            dequeue(item);
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
