#include<iostream>
using namespace std;
int main()
{

    int n=6;int count=0;int h;int x=2;
    int arr[6]={0,1,2,3,4,5};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                h=arr[i]+arr[j]+arr[k];
                if(h==x)
                count++;
            }
            
        }
        
    }
    cout<<count;
    return 0;
    
}