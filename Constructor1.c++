#include<iostream>
using namespace std;
class Complex
{
   int l,b,h;
  public:
      Complex(){ }
     Complex(int s)
       {
          l=b=h=s;
        }
    Complex(int len,int br,int ht)
     {
         l=len;
         b=br;
        h=ht;
     }
  Complex(Complex &c)
      {
         l=c.l; b=c.b;h=c.h;
      }
   int volume()
   {
     return l*b*h;
   }
};
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
