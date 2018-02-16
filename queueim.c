#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int front=0;
int rear=0;
void  push(int data,int *queue[])
{
   if(rear==MAX)
    {
       printf("queue is overflow\n");
       return ;
        
    }
  if(front==0)
      front=1;
  rear=rear+1;
  queue[rear]=data;
}
int pop(int *queue[])
{
   if(front==0 || front==rear+1)
    {
       printf("queue is underflow");
      return ;
    }
  int element;
  element=queue[front];
  front=front+1;
  return element;
}
int  peek(int *queue[])
{
  if(front==0 || front==rear+1)
    {
       printf("queue is underflow");
      return ;
    }
  int element;
  element=queue[front];
  printf("%d\n",element);
 return element;
}
void display(int *queue[])
{ 
   int i;
   if(front==0 || front==rear+1)
     {
       printf("queue is underflow\n");
        return ;
     } 
 
  printf("queue element:\n");
   for(i=front;i<=rear;i++)
      {
        printf("%d\n",queue[i]);
      }
}
int main()
{ 
    int *queue[MAX];
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
               push(data,queue[MAX]);
               break;
       case 2:pop(queue[MAX]);
              break;
       case 3:peek(queue[MAX]);
              break;
       case 4:display(queue[MAX]);
               break;
       case 5:exit(1);
       default:printf("enter choice is wrong:");
      }
   }
return 0;
}
