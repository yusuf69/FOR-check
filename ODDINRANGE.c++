#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,a,b;
  cout<<"Enter a number:"<<endl;
  cin>>n;
  int  i,min,max;
  cout<<"Enter minimum value of range:"<<endl;
  cin>>min;
 cout<<"Enter maximum value of range:"<<endl;
  cin>>max;
  int y,x=min;
  int count=0,count1=0;
 for(i=1;i<=n;i++)
   { 
      if(x<max)
       { 
      cout<<"Enter a and b"<<endl;
      cin>>a>>b;
      y=a*x+b;
      x=y;
      
    if(y%2==0)
           {  
              count++;
            }
     else 
           {
              count1++;
            }
       }
    else
        {
           break;
        }
     }
  cout<<"Number of even number:"<<count<<endl;
  cout<<"Number of odd number:"<<count1<<endl;
 return 0;
}
