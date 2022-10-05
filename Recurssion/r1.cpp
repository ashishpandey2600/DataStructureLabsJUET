//what is recurssion
// function caling it self is call resisive funtion
// recursiontion implementation is done like stack
#include <bits/stdc++.h>
using namespace std;
//print Factorial of N
int func(int n)
{ if(n==0)
  return 1;
return n*func(n-1);
}
int main()
{ int k=func(4);
 cout<<k;
}
