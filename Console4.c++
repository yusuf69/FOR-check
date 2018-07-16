#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char* String1="C++";
  char* String2="Programming";
   int m= strlen(String1);
    int n= strlen(String2);
   for(int i=1;i<n;i++)
    {
       cout.write(String2,i);
        cout<<"\n";
    }
   for(int i=n;i>0;i--)
    {
       cout.write(String2,i);
       cout<<"\n";
    }
    cout<<"\n\n";
   cout.write(String1,m).write(String2,n);
   cout<<"\n\n";
   cout.write(String1,12);
   cout<<"\n";
  return 0;
}
