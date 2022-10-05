#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
const int arr[N][N];
int main()
{
    int n;
    cin>>n;
    int l1,l2,r1,r2;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            cin>>arr[i][j];
            arr[i][j]+=arr[i-1][j-1];
        }
    }

}