#include<iostream>
using namespace std;
int main()
{
   int *vector;
   int size;
   cout<<"Ente vector size"<<endl;
   cin>>size;
   cout<<"Creating a new vector"<<size<<".."<<endl;
   vector=new int[size];
   cout<<"This is vector"<<endl;
   delete vector;
  return 0;
}
  
