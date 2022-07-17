#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
       struct node *next;
       int data;
       struct node *prev;
} sn;

sn *ll = NULL;

void inatb()
{
       sn *ptr = NULL;
       ptr = (sn *)malloc(sizeof(sn));
       if (!ptr)
       {
              printf("ll is full...\n");
       }
       else
       {
              printf("Enter data:");
              scanf("%d", &ptr->data);
              ptr->next = NULL;
              ptr->prev = NULL;

              if (ll == NULL)
              {
                     ll = ptr;
              }
              else
              {
                     ptr->next = ll;
                     ll->prev = ptr;
                     ll = ptr;
              }
       }
}

void inate()
{
       sn *ptr = NULL;
       sn *temp = ll;
       ptr = (sn *)malloc(sizeof(sn));
       if (!ptr)
       {
              printf("ll is full...\n");
       }
       else
       {
              printf("Enter data:");
              scanf("%d", &ptr->data);
              ptr->next = NULL;
              ptr->prev = NULL;

              if (ll == NULL)
              {
                     ll = ptr;
              }
              else
              {
                     while (temp->next != NULL)
                     {
                            temp = temp->next;
                     }
                     temp->next = ptr;
                     ptr->prev = temp;
              }
       }
}

void inatp()
{
       sn *ptr = NULL;
       sn *temp = ll;
       int pos;
       printf("enter the position to enter");
       scanf("%d", &pos);
       ptr = (sn *)malloc(sizeof(sn));
       if (!ptr)
       {
              printf("Queue is full...\n");
       }
       else
       {
              printf("Enter data:");
              scanf("%d", &ptr->data);
              ptr->next = NULL;
              ptr->prev = NULL;

              if (ll == NULL)
              {
                     ll = ptr;
              }
              else
              {
                     for (int i = 0; i < pos - 1; i++)
                     {
                            temp = temp->next;
                     }
                     temp->next->prev = ptr;
                     ptr->next = temp->next;
                     temp->next = ptr;
                     ptr->prev = temp;
              }
       }
}

void deatb()
{
       if (ll == NULL)
       {
              printf("ll is empty...\n");
       }
       else
       {
              printf("%d is deleted element...\n", ll->data);
              ll = ll->next;
       }
}

void deate()
{
       sn *temp = ll;
       if (ll == NULL)
       {
              printf("ll is empty...\n");
       }
       else
       {

              while (temp->next != NULL)
              {
                     temp = temp->next;
              }
              printf("%d is deleted element...\n", temp->data);

              temp->prev->next = NULL;
       }
}

void deatp()
{
       sn *temp = ll;
       int pos;
       printf("enter the position to delete");
       scanf("%d", &pos);

       if (ll == NULL)
       {
              printf("Queue is full...\n");
       }
       else
       {
              for (int i = 0; i < pos - 2; i++)
              {
                     temp = temp->next;
              }
                 printf("%d is deleted element...\n", (temp->next)->data);
              temp->next->next->prev=temp;
              temp->next=temp->next->next;
             
       }
}
void show()
{
       sn *temp;
       temp = ll;
       if (!temp)
       {
              printf("Queue is empty...\n");
       }
       else
       {
              while (temp != NULL)
              {
                     printf("%d ->", temp->data);
                     temp = temp->next;
              }
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
              printf("1.INSERT at begin\n");
              printf("2.INSERT at end \n");
              printf("3.INSERT at specific position\n");
              printf("4.delete at begin\n");
              printf("5.delete at end \n");
              printf("6.delete at specific position\n");
              printf("7.SHOW\n");
              printf("7.Exit\n");

              printf("Enter choice:");
              scanf("%d", &ch);
              switch (ch)
              {
              case 1:
                     inatb();
                     break;
              case 2:
                     inate();
                     break;
              case 3:
                     inatp();
                     break;
              case 4:
                     deatb();
                     break;
              case 5:
                     deate();
                     break;
              case 6:
                     deatp();
                     break;
              case 7:
                     show();
                     break;
              case 8:
                     exit(0);
                     break;
              }
       }
       return 0;
}