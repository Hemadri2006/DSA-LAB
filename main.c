#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct queue
{
    int data[SIZE];
    int front,rear;
};
typedef struct queue QUEUE;
void enqueue(QUEUE *q,int item)
{
    if(q->rear==SIZE-1)
    {
        printf("QUEUE overflow- Queue is full!\n");

    }
    else
    {
        if(q->front==-1)
        {
            q->front=0;
        }
        q->rear++;
        q->data[q->rear]=item;
        printf("Inserted %d into queue.\n",item);
    }
}
int dequeue(QUEUE *q)
{
    if(q->front==-1)
    {
        printf("Queue underflow-Queue is empty!\n");
        return -1;
    }
    else
    {
        int deleted = q->data[q->front];
        if(q->front==q->rear)
        {
            q->front=-1;
            q->rear=-1;
        }
        else
        {
            q->front++;
        }
        return deleted;
    }
}
void display(QUEUE q)
{
    int i;
    if(q.front ==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue contents are:\n");
        for(i=q.front;i<=q.rear;i++)
        {
            printf("%d\t",q.data[i]);
        }
        printf("\n");

    }

}
int main()
{
    int item,ch;
    QUEUE q;
    q.front=-1;
    q.rear=-1;
    while(1)
    {
        printf("\n-------Queue Operations------\n");
        printf("1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n Enter element to be inserted:");
            scanf("%d",&item);
            enqueue(&q,item);
            break;
            case 2:item=dequeue(&q);
            if(item!=-1)
            {
                printf("\n Deleted element is%d\n",item);
            }
            break;
            case 3:display(q);
            break;
            case 4:printf("\nExiting program.....\n");
            exit(0);
            default:printf("\n Invalid choice! Please try again.\n");
        }

    }
    return 0;
}
