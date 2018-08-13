#include<iostream>
using namespace std;
int area(int);
int area(int , int);
float area(float);
int main()
{
   int a,b,l;
   float c;
   cout<<"Enter a ,b and l and c:";
   cin>>a>>b>>l;
   cin>>c;
   int k=area(l);
   int m=area(a,b);
   float n=area(c);
   cout<<"k="<<k<<endl<<"m="<<m<<endl<<"n="<<n<<endl;
  return 0;
}
int area(int l)
{
  return (l*l);
}
int area(int a,int b)
{
 return (a*b);
}
float area(float c)
{
   return (3.14*c*c);
}
