#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,-1,-5,-4};
    int currarr=0;
    int maxsum=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        currarr+=arr[i];
        if (currarr>maxsum)
        {
            maxsum=currarr;
        }
        if (currarr<0)
        {
            currarr=0;
        }
    }
    cout<<maxsum<<endl;


    return 0;
}