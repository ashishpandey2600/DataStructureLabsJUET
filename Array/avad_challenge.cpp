//merge two sorted array
#include<iostream>
using namespace std;
int main()
{
    int n=3;
 int arr1[]={1,2,3};
  int arr2[]={2,2,2};
  int arr[6]={0};
  int y=0,z=0;
  if(arr[z]>arr[y])
  for (int i = 0; i < 6; i++)
  {
    
    arr[i]=arr1[y];
    y++;i++;
  }
  if(arr[z]<arr[y])
  for (int i = 1; i < 6; i++)
  {
    arr[i]=arr2[z];
    z++;i++;
  }
  for (int i = 0; i < 6; i++)
  {
    cout<<arr[i]<<" "<<endl;
  }
  


    return 0;
}