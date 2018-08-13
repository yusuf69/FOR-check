#include<iostream>
using namespace std;
void fun(int a1[],int a2[],int n,int m)
{
    int i=0,j=0;
     int k=0,a3[25];
    while(i<n && j<m)
       {
          if(a1[i]<a2[j])
            {
               a3[k++]=a1[i];
                i++;
            }
        else if(a1[i]>a2[j])
               {
                  a3[k++]=a2[j++];
               }
          else{
                 a3[k++]=a1[i];
                  i++;
                  j++;
         
         }
      }
    while(i<n)
      {
          a3[k++]=a1[i++];
      }
       while(i<m)
      {
          a3[k++]=a2[j++];
 
      }
  cout<<endl<<"Print union of given of two arrays: ";
  for(i=0;i<k;i++)
      {
          cout<<a3[i]<<"\t";
       }
  cout<<endl;
}
int main()
{
    int a1[]={1,3,4,7,8,9,10};
    int a2[]={2,4,5,9};
     int n=sizeof(a1)/sizeof(a1[0]);
      int m=sizeof(a2)/sizeof(a2[0]);
   
     
   cout<<"print union of two arrays"<<endl;
     fun(a1,a2,n,m);
  return 0;
}
