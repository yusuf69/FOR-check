#include<iostream>
#include<math.h>
#define MAX 5
using  namespace std;
int main()
{
    cout.precision(5);
    cout.width(10);
    cout<<"VALUES";
   cout.width(20);
   cout<<"SQRT OF VALUE";
    cout<<"\n";
  for(int i=1;i<MAX;i++)
     {
       cout.width(10);
       cout<<i;
       float z=sqrt(i);
     
       cout.width(20);
       cout<<z;
      cout<<"\n";
    }
 cout.width(10);
 cout.precision(10);
 cout<<"Precision set to ten digits\n";
 cout<<sqrt(20)<<endl;
 return 0;
}
