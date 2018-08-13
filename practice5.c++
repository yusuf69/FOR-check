#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Binary 
{
  string s;
  public :
      void getdata()
      {
         cout<<"Enter a binary number";
        cin>>s;
      }
          void chk_bin()
            {
               int i;
                
             for(i=0;i<s.length();i++)
                {
                    if(s.at(i)!='1' && s.at(i)!='0')
                       {
                           cout<<"Entered string is not a binary number:"<<endl;
                            exit(0);
                       }
                }
            }
       void ones()
          {
             chk_bin();
              for(int i=0;i<s.length();i++)
                {
                    if(s.at(i)=='0')
                          s.at(i)='1';
                     else
                          s.at(i)='0';
                  }
            }
    
       void dis()
         {
            ones();
           cout<<"ones of s="<<s<<endl;
         }
};
int main()
{
   Binary b;
    b.getdata();
    b.dis();
   return 0;
}
                
