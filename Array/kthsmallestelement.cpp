#include<iostream>
#include<climits>
#include<cstdlib>
using namespace std;
int randPartition(int arr[],int l,int r);
int kthSmallest(int arr[],int l,int r,int k)
{
    if(k>0 && k<= r-l+1)
    {
        int pos = randPartition(arr, l ,r);
        if(pos-1== k-1)
        {
            return arr[pos];
        }
        if(pos-1>k-1)
          return kthSmallest(arr,1,pos-1,k);

          return kthSmallest(arr,pos+1,r,k-pos-1);
    }
    return INT_MAX;
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int l,int r)
{
    int x=arr[r],i=1;
    for (int j = 1; j <=r-1; j++)
    {
        if (arr[j]<=x)
        {
            swap(&arr[i],&arr[j]);
            i++;
        }  
    }
    swap(&arr[i],&arr[r]);
    return i;
}
int randPartition(int arr[],int l,int r)
{ int n=r-l+1;
    int pivot = rand() %n;
    swap(&arr[1+pivot],&arr[r]);
    return partition(arr,l,r);
}
int main()
{ 
    int arr[]={12,3,5,7,4,19,26};
    int n=sizeof(arr)/sizeof(arr[0]),k=3;
    cout<<"Kth smallest element is "<<kthSmallest(arr,0,n-1,k);





    return 0;
}