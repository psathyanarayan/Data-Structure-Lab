//Implement a circular queue using arrays with the operations:
//Insert an element to the queue.
//Delete an elements from the queue.
//Display the contents of the queue after each operation.
#include <stdio.h>
#include <stdlib.h>
int cqueue_arr[50];
int front = -1;
int rear = -1;
int max;
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

//Insertion operation
void enqueue(int x)
{
    if ((isFull() == 1))
    {
        printf("!! Warning Queue Overflow detected !!\n");
    }
    else if (isEmpty() == 1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == max - 1) /*rear is at last position of queue */
            rear = 0;
        else
            rear = rear + 1;
    }
    cqueue_arr[rear] = x;
}

//Deletion Operation
void dequeue()
{
    if ((isEmpty() == 1))
    {
        printf("!! Warning Queue Underflow detected !!\n");
    }
    printf("Element deleted from queue is : %d\n", cqueue_arr[front]);
    if (front == rear) /* queue has only one element */
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == max - 1)
            front = 0;
        else
            front = front + 1;
    }
}
void  display()
{
    int front_pos = front,rear_pos = rear;
	if(front == -1)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Queue elements :\n");
	if( front_pos <= rear_pos )
		while(front_pos <= rear_pos)
		{
			printf("%d ",cqueue_arr[front_pos]);
			front_pos++;
		}
	else
	{
		while(front_pos <= max-1)
		{
			printf("%d ",cqueue_arr[front_pos]);
			front_pos++;
		}
		front_pos = 0;
		while(front_pos <= rear_pos)
		{
			printf("%d ",cqueue_arr[front_pos]);
			front_pos++;
		}
	}
	printf("\n");
}
int main()
{
    int item, n;
    printf("Expected MAX Size of the array");
    scanf("%d", &max);
    do
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("Enter a choice (1,2,3,4) --> ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Input the element for insertion in queue : ");
            scanf("%d", &item);
            enqueue(item);
            break;
        case 2:
            dequeue();
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
