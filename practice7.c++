#include<iostream>
#include<stdlib.h>
using namespace std;
class Items
{
   int item[50];
   float price[50];
    int count=0;
   public:
      void getdata();
      void distval();
      void remove();
      void disAll();
 };
void Items::getdata()
{
   cout<<"Enter item code"<<endl;
   cin>>item[count];
   cout<<"Item price"<<endl;
  cin>>price[count];
  count++;
}
void Items::distval()
{
    float sum=0;
    for(int i=0;i<count;i++)
             sum=sum+price[i];
 cout<<"Price of total="<<sum<<endl;
}
void Items::remove()
{
   int a;
  cout<<"Enter an address:"<<endl;
  cin>>a;
  for(int i=0;i<count;i++)
    {
         if(item[i]==a)
             price[i]=0;
    }
}
void Items::disAll()
{
   int i;
  cout<<endl<<"Code"<<"\t"<<"Price"<<endl;
   for(i=0;i<count;i++)
     {
       if(price[i]!=0)
        {
        cout<<item[i]<<"\t";
        cout<<price[i]<<endl;
        }
      }
}
int main()
{
    Items I;
   int choice;
    
   while(1)
    {
       cout<<"1:add"<<endl;
       cout<<"2:distval"<<endl;
       cout<<"3:remove"<<endl;
      cout<<"4:disAll"<<endl;
       cout<<"5:exit"<<endl;
      cout<<"Enter your choice";
    cin>>choice;
   switch(choice)
      {
           case 1:I.getdata();
                   break;
           case 2:I.distval();
                      break;
           case 3:I.remove();
                     break;
           case 4:I.disAll();
                     break;
           case 5:exit(0);
           default:cout<<"Invalid case"<<endl;
        }
}
return 0;
}
  
