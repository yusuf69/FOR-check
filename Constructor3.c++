#include<iostream>
using namespace std;
int size=3;
class Vector
{
   int v[size];
  public:
      Vector(){ }
     Vectort(int *s);
   friend Vector operator+(int a,Vector b);
   friend Vector operator+(Vector b,int a);
   friend istream & operator >> (istream &,Vector &);
   friend ostream & operator << (ostream &, Vector &);
};
Vector::Vector()
{
}
Vector::Vector(int *s)
{
   for(int i=0;i<size;i++)
int main()
{
   Complex C1;
   Complex C2(5);
   Complex c3(4,5,6);
  Complex c4(c3);
   Complex c5=c3;
   cout<<endl<<"volume="<<C1.volume()<<endl;
  cout<<endl<<"volume="<<C2.volume()<<endl;
   cout<<endl<<"volume="<<c3.volume()<<endl;
    cout<<endl<<"volume="<<c4.volume()<<endl;
    cout<<endl<<"volume="<<c5.volume()<<endl;
  return 0;
}
