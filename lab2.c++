#include<iostream>
using namespace std;
int vowelcount(char s[])
{
    char *p=s;
   int count=0;
    while(*p!='\0')
     {
         if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
             count++;
       p++;
      }
 return count;
}
int main()
{
    char s[20];
     cout<<"Enter a string\n";
     cin.get(s,20);
     int k=vowelcount(s);
     cout<<"count="<<k<<endl;
  return 0;
}
