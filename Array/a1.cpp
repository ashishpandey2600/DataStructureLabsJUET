#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int ,11> data_array={11,2,3,4,5,6,4,3,2,1};
    array<int,11>data_array1={1,2,3,4,5,6,7,8,9,10,11};
   // cout<<data_array.at(1)<<endl;//fatch element of array at proded index
   // cout<<data_array.back()<<endl;
   // cout<<data_array.front()<<endl;
    data_array.fill(1);
    data_array1.fill(2);
    for (int i = 0; i < 11; i++)
    {
        cout<<data_array.at(i)<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 11; i++)
    {
        cout<<data_array1.at(i)<<" ";
    }
    cout<<endl;
    data_array.swap(data_array1);
    data_array.fill(2);
    for (int i = 0; i < 11; i++)
    {
        cout<<data_array.at(i)<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 11; i++)
    {
        cout<<data_array1.at(i)<<" ";
    }
    cout<<endl;
    cout<<"size is "<<data_array1.size();//Size of array
    

}