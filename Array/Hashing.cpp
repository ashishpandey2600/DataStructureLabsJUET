#include<bits/stdc++.h>
using namespace std;
//Global array are zero intialize
const int N=1e7+10;
int hsh[N];
int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    int Q=q;
    int arr[q];
    while (q--)
    {
        int x;
        cin>>x;
       arr[q]=hsh[x];

    }
    for(int i=Q-1;i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}