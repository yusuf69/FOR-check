#include<iostream>
using namespace std;
void unionc1(int arr1[],int arr2[],int m,int n)
{
     int i,j;
    
     while(i<m && j<n)
        {
           if(arr1[i]<arr2[j])
              {
                i++;
               }
           else if(arr1[i]>arr2[j])
                {
                  j++;
                 }
            else
               {
                 cout<<endl<<arr2[j++];
                  i++;                 
               }
      }
  
}
int main()
{
 
  int arr1[]={2,3,4,7,5,9,6},arr2[]={3,4,8,5,6,9,7};
  int m=sizeof(arr1)/sizeof(arr1[0]);
  int n=sizeof(arr2)/sizeof(arr2[0]);
   unionc1(arr1,arr2,m,n);
      
      
  return 0;
}
