#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
  int info ;
 struct stack *link;
}*top=NULL;
void  push(int data)
{
   struct stack *temp;
  temp=(struct stack *)malloc(sizeof(struct stack));
   if(temp==NULL)
    {
       printf("Stack is overflow\n");
       return ;
        
    }
  temp->info=data;
  temp->link=top;
  top=temp;
  
}
int pop()
{
  int element;
  struct stack *temp;
   if(top==NULL)
    {
       printf("stack is underflow");
      return ;
    }
  temp=top;
 element=temp->info;
 free(temp);
 top=top->link;
return element;
}
void peek()
{
  if(top==NULL)
    {
       printf("stack is underflow");
      return ;
    }
  int element;
  element=top->info;
  printf("%d\n",element);
}
void display()
{ 
  struct stack *p;
   int i;
   if(top==NULL)
     {
       printf("Stack is underflow\n");
        return ;
     }
  printf("stack element:\n");
 p=top;
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
       printf("1:push data into stack\n");
       printf("2:pop data from stack\n");
       printf("3:peek element of stack\n");
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
