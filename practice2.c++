#include<iostream>
using namespace std;
int main()
{
   int i,j;
   int n;
  cout<<"Enter a number:"<<endl;
  cin>>n;
  for(i=1;i<n;i++)
    {
       for(j=1;j<=i;j++)
           {
                if(i<=5)
                    {
                       cout<<i<<" ";
                     }
                 else
                   {
                       cout<<"."<<" ";
                     }
             }
        cout<<endl;
      }
 return 0;
}
                
