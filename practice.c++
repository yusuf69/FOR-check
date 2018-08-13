#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
   int temp;
    temp=a;a=b;b=temp;
  cout<<"a="<<a<<endl<<"b="<<b<<endl;
 }
int  main()
{
    int a,b;
    cout<<"Enter a and b";
    cin>>a>>b;
  swap(a,b);
 return 0;
 
}
