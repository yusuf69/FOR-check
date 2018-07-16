#include<iostream>
using  namespace std;
int main()
{
   int i;
   float pi=22.0/7.0 ;
   cout.fill('<');
   cout<<"Value of Pi:"<<endl;
   for(i=1;i<=10;i++)
     {   
         cout.width(5);
         cout.precision(i);
       cout<<pi;
       
       cout<<endl;
    }
 return 0;
}
