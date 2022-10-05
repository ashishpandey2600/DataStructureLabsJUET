#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int N= 1e7+10;
const int a[N];
int main()
{
    int n=5;
    // cin>>n;
    int prr[]={1,2,3,4,5};
   for(int i=1;i<n;i++)
   {
        // cin>>a[i];
        a[i]=prr[i];
        a[i]+=a[i-1];
   }
  int x;
  cin>>x;
  cout<<a[x];
}