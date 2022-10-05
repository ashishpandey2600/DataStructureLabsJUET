#include<iostream>
#include<vector>
using namespace std;
//vector is dynamic array
int main()
{ 
    vector<int>v1;
    vector<char>v3;
    v3.push_back('b');
    v3.push_back('b');
    v3.push_back('c');
    v3.push_back('d');
    v3.push_back('e');
    v1.push_back(2);//add value at last
    vector<char>:: iterator it=v3.begin();
    v3.insert(it+1,'2');
    vector<string>v2;
    // v2.push_back("ashish");
    // v2.push_back("pandey");
    cout<<v3.at(4)<<endl;
    cout<<v3.front()<<endl;
    cout<<v3.back()<<endl;
cout<<"Capacity = "<<v3.capacity()<<endl;
cout<<"Size of vector = "<<v3.size()<<endl;
    for (int i = 0; i < 10; i++)
    {
       cout<<v3[i] <<" ";
    }
    cout<<endl;
v3.pop_back();
v3.pop_back();
v3.pop_back();
v3.pop_back();

cout<<endl;
cout<<"Size of vector = "<<v3.size()<<endl;

    cout<<endl;
cout<<"Capacity = "<<v3.capacity()<<endl;
  
    for (int i = 0; i < 32; i++)
    {
       cout<<v3[i];
    }
    cout<<endl;
    v3.clear();
    cout<<"Size of vector = "<<v3.size()<<endl;

    cout<<endl;
cout<<"Capacity = "<<v3.capacity()<<endl;
  

    return 0;
}