#include <stdio.h>
#include <stdlib.h>

struct node
{
       int data;
       struct node *next;
};
void inq(struct node **front, struct node **rear)
{
       struct node *ptr = NULL;
       ptr = (struct node *)malloc(sizeof(struct node));
       if (!ptr)
       {
              printf("Queue is full...\n");
       }
       else
       {
              printf("Enter data:");
              scanf("%d", &ptr->data);
              ptr->next = NULL;

              if (*front == NULL)
              {
                     *front = ptr;
                     *rear = ptr;
                     (*front)->next = NULL;
                     (*rear)->next = NULL;
              }
              else
              {
                     (*rear)->next = ptr;
                     (*rear) = ptr;
              }
            
       }
}
void deq(struct node **front, struct node **rear)
{
       if (*front == NULL)
       {
              printf("Queue is empty...\n");
       }
       else
       {
              printf("%d is deleted element...\n", (*front)->data);
              if (*front == *rear)
              {
                     *front = NULL;
                     *rear = NULL;
              }
              else
              {
                     (*front) = (*front)->next;
              }
       }
}
void show(struct node *front, struct node *rear)
{
       struct node *temp;
       temp = front;
       if (!temp)
       {
              printf("Queue is empty...\n");
       }
       else
       {
              while (temp != rear)
              {
                     printf("%d ->", temp->data);
                     temp=temp->next;
              }
               printf("%d ", rear->data);
              
      
       }
}
int main()
{
       struct node *front = NULL;
       struct node *rear = NULL;
       int ch;
       while (1)
       {
              printf("\n");
              printf("1.INSERT\n");
              printf("2.DELETE\n");
              printf("3.SHOW\n");
              printf("7.Exit\n");

              printf("Enter choice:");
              scanf("%d", &ch);
              switch (ch)
              {
              case 1:
                     inq(&front, &rear);
                     break;
              case 2:
                     deq(&front, &rear);
                     break;
              case 3:
                     show(front, rear);
                     break;
              case 4:
                     exit(0);
                     break;
              }
       }
       return 0;
}