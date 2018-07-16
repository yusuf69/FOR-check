#include<iostream>
using  namespace std;
int main()
{
   int item[4]={10,8,12,15};
   int Cost[4]={75,100,60,99};
    cout.width(10);
    cout<<"ITEMS";
   cout.width(10);
   cout<<"COST";
    cout.width(15);
    cout<<"TOTAL VALUE";
    cout<<"\n";
  for(int i=0;i<4;i++)
     {
       cout.width(10);
       cout<<item[i];
       cout.width(10);
       cout<<Cost[i];
       cout.width(15);
       int value=item[i]*Cost[i];
       cout<<value;
      cout<<"\n";
    }
 return 0;
}
