#include<iostream>
using namespace std;
void countSort(int arr[],int k)
{
    int k=arr[0];
    for (int i = 0; i < k; i++)
    {
       k=max(k,arr[i]);
    }
    int count[10]={0};
    for (int i = 0; i < k; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 0; i <=k; i++)
    {
       count[i]+=count[i-1];
    }
    
    int output[10];
    for (int i = n-1; i>=0; i--)
    { 
        output[--[count[arr[i]]]]=arr[i];       
    }
    for (int i=0;i <k; i++)
    {
        arr[i]=output[i];
    }
   
}
int main()