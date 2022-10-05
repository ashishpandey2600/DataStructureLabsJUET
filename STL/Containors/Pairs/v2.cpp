#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&v)
{
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{ vector<int>v(5,3);//5 is size of vector || all 5 values are three;
 v.push_back(4);// 7 will thw 6th element of vectors
   print(v);
   v.pop_back();//it removes the last element from the vector
   print(v);
   //pushback and popback is O(1)
   vector<int> &v2=v; 
   //time complexity of copy of v to v2 is O(n): element are copied one by one
   // v2 is copy of v
   v2.push_back(55);
   print(v);
   print(v2);
 
}