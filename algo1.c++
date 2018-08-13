#include<iostream>
using namespace std;
void unionc(int arr1[],int arr2[])
{
    int arr3[50],k=0;
     int i,j;
    for(i=0;i<7;i++)
     {
      for(j=0;j<7;j++)
        {
           if(arr1[i]==arr2[j])
              {
                arr3[k]=arr1[i];
                 k++;
              }
        }

   }
 cout<<"Intersection of two array elements"<<endl;
 for(i=0;i<k;i++)
   {
     cout<<"\t"<<arr3[i];
   }
  cout<<endl;
}
int main()
{
 
  int arr1[]={2,3,4,7,5,9,6},arr2[]={3,4,8,5,6,9,7};
   unionc(arr1,arr2);
      
      
  return 0;
}
