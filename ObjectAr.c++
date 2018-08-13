#include<iostream>
using namespace std;
class Time
{
   int hours;
   int minute;
 public:
     void getdata()
     {
        cout<<"Enter time:"<<endl;
        cin>>hours>>minute;
     }
    void sum(Time T1,Time T2)
     {
         
         hours=T1.hours+T2.hours+(T1.minute+T2.minute)/60;
        minute=(T1.minute+T2.minute)%60;
        
      }
    void showtime()
      {
          cout<<"Time:"<<hours<<":"<<minute<<endl;
       }
};
int main()
{
   Time T1,T2,T3;
   T1.getdata();
    T2.getdata();
   T3.sum(T1,T2);
    T1.showtime();
    T2.showtime();
   T3.showtime();
    
  return 0;
}
