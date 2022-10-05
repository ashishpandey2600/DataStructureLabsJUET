//Move all negative numbers to beginning and positive to end with constant extra space
//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
#include<iostream>
using namespace std;
int main()
{ 
    int arr[]={-12, 11, -13, -5,
               6, -7, 5, -3, 11 };
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i<= n/2; i++)
    {
        for (int j = n/2; j < n; j++)
        {
            if (arr[i]>0 && arr[j]<0)
            {
               swap(arr[i],arr[j]);
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    




    return 0;
}