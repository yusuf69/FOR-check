#include<iostream>
using namespace std;
float value(float p,int n,float r);
void printline(char* ch,int len);
int main()
{
   float amount;
   float p,r;
    int n,len;
   char ch;
   value(p,n, r=0.15);
   printline("*", 15);
   printline();
   amount=value(5000.0,5);
  cout<<"Final Value:"<<amount<<endl;
   amount=value(p,n,0.12);
  cout<<"Final value:"<<amount<<endl;
  printline("=");
 return 0;
}     
float value(float p,int n,float r)
{
   int year=1;
   float sum=p;
    while(year<=n)
       {
           sum=sum*(1+r);
           year=year+1;
       }
    return sum;
}
void printline(char ch,int len)
{
   for(int i=0;i<len;i++)
        cout<<ch;
}

