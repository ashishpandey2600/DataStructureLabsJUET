#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0) return 1;

    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);

}
// requirement to remember 
//1. Number of funtion calls
//2. What is complexity of each funtion
// Time Complexity - O(n^2)