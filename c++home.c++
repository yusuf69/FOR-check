#include<iostream>
using namespace std;
class Person
{
   int age;
   char name[25];
    public:
       void getdata();
       void putdata();
};
void Person::getdata()
{
   cout<<"Enter name :"<<endl;
   cin.get(name,25);
   cout<<"Enter age:"<<endl;
   cin>>age;
}
void Person::putdata()
{
   cout<<"Name:"<<name<<endl;
  cout<<"age:"<<age<<endl;
}
int main()
{
    Person P;
    P.getdata();
    P.putdata();
    return 0;
 }
