//Tuple is not container
#include<iostream>
#include<tuple>
using namespace std;
int main()
{
   // tuple<t1,t2,t3> tuple1; template class
   tuple<string,int ,int>t1;
   t1= make_tuple("India",99,1);
  cout<<get<0>(t1);
   cout<<get<1>(t1);
    cout<<get<2>(t1);



    return 0;
}