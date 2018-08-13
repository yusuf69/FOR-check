#include<iostream>
using namespace std;
int revnumber(int n)
{
   int rev=0;
   while(n>0)
     {
        rev=rev*10+n%10;
         n/=10;
      }
 return rev;
}
int main()
{
    int n;
  cout<<"Enter a number"<<endl;
   cin>>n;
  int k=revnumber(n);
  cout<<endl<<"reverse number of n:"<<k<<endl;
  return 0;
}
