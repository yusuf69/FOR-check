#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n;
  cout<<"Entered number is="<<endl;
  cin>>n;
    float x=(float)n;
   float ans=x+0.5+sqrt(x);
  cout<<"Nth non sqrt number is:"<<(int)ans<<endl;
 return 0;
}
