#include<iostream>
using namespace std;
class Test
{
    static int count;
   public:
        Test()
           {
              count++;
            cout<<"Number of object is created="<<count<<endl;
            }
         ~Test()
            {
              
              cout<<count<<"th obects is destroyed="<<count<<endl;
              count--;
             }
          
};
int Test::count;
int main()
{
  cout<<"In main block"<<endl;
    Test t1;

   {
      cout<<"Inside the block "<<endl;
      cout<<"Two more object is created:";
      Test t1,t2;
    cout<<"Leaves block"<<endl;
   }
 

  cout<<"Back inside main block"<<endl;

  
  return 0;
}
