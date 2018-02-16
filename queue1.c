#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct queue
{
  int info ;
 struct stack *link;
}*front=NULL,*rear=NULL;
void  push(int data)
{
   struct queue *temp;
  temp=(struct queue *)malloc(sizeof(struct queue));
   if(temp==NULL)
    {
       printf("queue is overflow\n");
       return ;
        
    }
  temp->info=data;
  temp->link=NULL;
  if(front==NULL)
       front=temp;
  else
       rear->link=temp;
  rear=temp;
  
}
int pop()
{
  int element;
  struct queue *temp;
   if(front==NULL)
    {
       printf("queue is underflow");
      return ;
    }
  temp=front;
 element=temp->info;
 free(temp);
 front=front->link;
return element;
}
void peek()
{
  if(front==NULL)
    {
       printf("queue is underflow");
      return ;
    }
  int element;
  element=front->info;
  printf("%d\n",element);
}
void display()
{ 
  struct queue *p;
   int i;
   if(front==NULL)
     {
       printf("queue is underflow\n");
        return ;
     }
  printf("queue element:\n");
 p=front;
 while(p!=NULL)
   {
      printf("%d\n",p->info);
      p=p->link;
   }
}
int main()
{
    int choice ,data;
    while(1)
     {
       printf("1:push data into queue\n");
       printf("2:pop data from queue\n");
       printf("3:peek element of queue\n");
       printf("4:display\n");
       printf("5:exit\n");
       printf("enter your choice\n");
      scanf("%d",&choice);
    switch(choice)
      {
        case 1:printf("ENter data to be pushed\n");
               scanf("%d",&data);
               push(data);
               break;
       case 2:pop();
              break;
       case 3:peek();
              break;
       case 4:display();
               break;
       case 5:exit(1);
       default:printf("enter choice is wrong:");
      }
   }
return 0;
}
