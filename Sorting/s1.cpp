//selection sort
//merge sort
// Arrenge elemnt in asscending or descending order
#include<iostream>
using namespace std;
void swapp(int &a,int &b)
{
    int temp = a;
    b=a;
    a=temp;
}
int main()
{
    int k;
    cin>>k;
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<k;i++)
    { for(int j=0;j<k-1;j++)
    {
        if(arr[i]<arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    }
     for (int i = 0; i < k; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}