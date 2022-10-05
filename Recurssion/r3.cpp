#include<bits/stdc++.h>
using namespace std;
//sum of array
//sum(n,a) -> sum of elements in a uptill n index n
// sum(n,a)=a[n]+sum(n-1,a);
int sum(int n,int a[]){
    if(n<0) return 0;
    return sum(n-1,a) +a[n];
}
int main()
{ int n;
cin>>n;
int arr[n];
for(int i=0;i<n;++i)
{
    cin>>arr[i];
cout<<sum(2,arr);

}