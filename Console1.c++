#include<iostream>
using namespace std;
int main()
{
   int count=0;
   char c;
   cout<<"INPUT TEXT\n";
  cin.get(c);
 while(c!='\n')
   {
      cout.put(c);
      cout++;
      cin.get(c);
   }
 cout<<"\n NUMBER OF CHARACTERS ARE="<<count<<endl;
return 0;
}
