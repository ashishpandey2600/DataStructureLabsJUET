#include<iostream>
using namespace std;
void PrintArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}
void reversearray(int arr[],int start,int n)
{
   while (start<n)
   {
   int temp=arr[start];
   arr[start]=arr[n];
   arr[n]=temp;
   start++;
   n--;
}   
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    reversearray(arr,0,n-1);
    PrintArray(arr,n);
    

    return 0;
}