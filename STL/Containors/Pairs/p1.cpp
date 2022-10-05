#include<bits/stdc++.h>
using namespace std;
int main()
{ // Pair is class in STL which store two value
 pair<int,int>p;
 //any data types or container can be used in place of <int ,int>
//  p=make_pair(2,2);
p={2,4};//Initialization
pair<int ,int>p1=p;
cout<<p.first<<" "<<p.second<<endl;
//pairs are used to make relation between container or values

//example

int a[]={1,2,3};
int b[]={2,3,4};
pair<int ,int>p_array[3]; // pair ka array
p_array[0]={1,2};
p_array[1]={2,3};
p_array[2]={3,2};
for(int i=0;i<3;++i)
{
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
}
}
//pairs are used to make relation