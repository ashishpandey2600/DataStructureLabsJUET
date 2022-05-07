#include<iostream>
#include<fstream>
using namespace std;
ostream& tab(ostream& out)
{
    out<<"\t";
    return out;

}
int main()
{
    cout<<"my"<<tab<<"name"<<tab<<"is"<<tab<<"ashish "<<endl;
    return 0;
}
