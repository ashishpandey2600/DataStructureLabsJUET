#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1;
    l1.push_back(100);
    l1.push_back(2);
    l1.push_back(3);
    

    list<string> l2;
    l2.push_back("ashish");
    l2.push_back("pandey");
    l2.push_front("Mr. ");
    list <int>::iterator it=l1.begin();
    list<string>::iterator it2=l2.begin();
    while (it!=l1.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    cout<<"the size of l1 = "<<l1.size()<<endl;
    l1.sort(); l1.remove(3);//removes value 
    l1.clear();
    list <int>::iterator it3=l1.begin();
    while (it3!=l1.end())
    {
        cout<<*it3<<" ";
        it3++;
    }
    cout<<endl;
    while (it2!=l2.end())
    {
        cout<<*it2;
        it2++;
    }
    cout<<endl;
    cout<<"Total Values in list are = "<<l2.size()<<endl;

   


    return 0;
}