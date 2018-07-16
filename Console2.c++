#include<iostream>
using namespace std;
int main()
{
  int size=30;
  char city[30];
  
 cout<<"Enter city name\n";
 cin>>city;
 cout<<endl<<"\nCityname="<<city<<endl;
 cout<<"Enter again cityname\n";
 cin.getline(city,size);
 cout<<"\n Cityname="<<city<<endl;
  cout<<"Enter another cityname\n";
 cin.getline(city,size);
 cout<<"\n Cityname="<<city<<endl;
 return 0;
}
 
