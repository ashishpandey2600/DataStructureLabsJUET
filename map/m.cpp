#include<iostream>
#include<map>
using namespace std;
int main()
{
    //arrays are Numeric as well as Associative
   //map<key,value>obj;
    map<int,string>m1;
    m1[100]="Gajendra";
    m1[123]="dilip";
    m1[171]="shahid";
    m1[200]="Rajesh";
    cout<<m1[100];
map<int,string> ::iterator it=m1.begin();

 while (it!=m1.end())
 {cout<<it->second<<endl;/* code */
 it++;
 }
 m1.insert(pair<int,string>(112,"ashish"));
 cout<<m1.at(112)<<endl;
     return 0;
}