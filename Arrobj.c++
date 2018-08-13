#include<iostream>
using namespace std;
class Array
{
   char name[30];
  int rollno;
  float marks;
  public :
      void getdata()
       {
         cout<<"Enter details of student"<<endl;
         cin>>name>>rollno>>marks;
      }
       void putdata()
         {
            cout<<"name:"<<name<<endl;
            cout<<"rollno:"<<rollno<<endl;
            cout<<"marks:"<<marks<<endl;
         }
};
int main()
{
  int n;
  cout<<"Enter number"<<endl;
  cin>>n;
   Array stu[n];
   int i;
   for(i=0;i<n;i++)
     {
        stu[i].getdata();
     }
  cout<<"Print details of student"<<endl;
   for(i=0;i<n;i++)
     {
        stu[i].putdata();
      }
return 0;
}
