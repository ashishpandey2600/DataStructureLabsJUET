#include<iostream>
using namespace std;
void swapx(int *i,int *j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}
int partition(int arr[],int l,int r)
{
    int pivot=arr[r];
    int i=l-1;
    for (int j = l; j < r; j++)
    {
        if (arr[j]<pivot)
        {
           i++;
           swapx(&i,&j);
        }
        
    }
    int z=i+1;
    swapx(&z,&r);
    return i+1;
    
}
int main()
{
    int arr[]={6,3,9,5,2,8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=partition(arr,0,n-1);
    cout<<k;

    return 0;
}