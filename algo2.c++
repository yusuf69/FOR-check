#include<iostream>
using namespace std;
void unionc2(int arr1[],int arr2[],int m,int n)
{
     int i,j;
    
     while(i<m && j<n)
        {
           if(arr1[i]<arr2[j])
              {
                cout<<arr1[i++]<<"\t";
               }
           else if(arr1[i]>arr2[j])
                {
                  cout<<endl<<arr2[j++]<<"\t";
                 }
            else
               {
                 cout<<endl<<arr2[j++];
                  i++;                 
               }
      }
   while(i<m)
       {
         cout<<arr1[i++]<<"\t";
       }
    while(j<n)
      {
        cout<<arr2[j++]<<"\t";
      }
}
int main()
{
 
  int arr1[]={2,3,4,7,5,9,6},arr2[]={3,4,8,5,6,9,7};
  int m=sizeof(arr1)/sizeof(arr1[0]);
  int n=sizeof(arr2)/sizeof(arr2[0]);
   unionc2(arr1,arr2,m,n);
      
      
  return 0;
}
