#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int stack[MAX];
int top=0;
void  push(int data)
{
   if(top==MAX)
    {
       printf("Stack is overflow\n");
       return ;
        
    }
  top=top+1;
  stack[top]=data;
}
int pop()
{
   if(top==0)
    {
       printf("stack is underflow");
      return ;
    }
  int element;
  element=stack[top];
  top=top-1;
return element;
}
void peek()
{
  if(top==0)
    {
       printf("stack is underflow");
      return ;
    }
  int element;
  element=stack[top];
  printf("%d\n",element);
}
void display()
{ 
   int i;
   if(top==0)
     {
       printf("Stack is underflow\n");
        return ;
     }
  printf("stack element:\n");
   for(i=top;i>0;i--)
      {
        printf("%d\n",stack[i]);
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
