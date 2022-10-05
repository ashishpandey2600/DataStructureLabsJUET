#include<iostream>
using namespace std;
//Digit sum
//digit_sum(n) -> digit_sum(n/10) + last_digit
//1234 -> 4 + digit_sum(123)
int Digit_sum(int n)
{ if (n==0)
   return 0;
  return Digit_sum(n/10)+(n%10);

}
int main()
{ int k=Digit_sum(1234);
   cout<<k<<endl;
}
//complexity -> O(number of digit) = log(n)