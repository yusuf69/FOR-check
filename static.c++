#include<iostream>
using namespace std;
class Static
{
   static int count;
   int number;
   public:
     void getdata(int a)
       {
          number=a;
          count++;
         }
       void getcount()
        {
          cout<<count<<endl;
        }
 };
int Static::count;
int main()
{
   Static a,b,c;
   a.getcount();
   b.getcount();
   c.getcount();
   a.getdata(100);
   b.getdata(200);
  a.getcount();
  
  return 0;
}
  
