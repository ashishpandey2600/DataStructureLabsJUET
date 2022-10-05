/*
Develop an algorithm to solve the maximum segment sum problem. 
Instruction: - Solve the above problem with the help of following example
Let A [0,…, n-1] be a given array of real numbers (positive and negative).
For given 0<=i<=n-1 and 0<=j<=n-1,segment sum is defined as follows:
Segment sum (i, j) =A[i] +A [i+1] +…A[j]. if i<=j.
The problem is to find the maximum value of segment sum over all i and j.
Also find the value of i and j for which segment sum is maximum
Given Array is A= {4,-5, 8,-1, 3,-4.2, 0, 2};
The maximum segment sum for this array is 10.
The corresponding value for i and j are 2 and 4 respectively. 
*/

#include<iostream>
using namespace std;
int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    return n*fact(n-1); 
}
int sum(int arr[],int i,int j)
{ int k;
    for (int m = i; m < j; m++)
    { 
        k=arr[m];
        k+=k;
        
    }
    return k;
}
int main()
{
    int n; 
    cin>>n; int g=0;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=fact(n);
    int narr[k];
    int max=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=i;j<n;j++)
        {
           max=max+arr[j];
           narr[g]=max;
           g++;
        }
        max=0;
    } 
    
    cout<<max<<endl;
    
    return 0;
}