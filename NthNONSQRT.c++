#include<iostream>
#include<math.h>
using namespace std;
int nonsqrt(int n)
{
   long double x=(long double)n;
   long double ans=x+0.5+sqrt(x);
    return (int)ans;
}
int main()
{
   int n;
  cout<<"Entered number is="<<endl;
  cin>>n;
  cout<<"Nth non sqrt number is:"<<nonsqrt(n)<<endl;
 return 0;
}
