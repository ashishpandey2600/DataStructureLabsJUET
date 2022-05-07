#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout; ifstream fin;
    string str,str1="Password";
    int count=0,k;
    char ch;
    cout<<"Enter the Password : ";
    fout.open("Password");
    cin>>str;
    fout<<str;
    fout.close();

    fout.open("Protected");
    fin.open("Password");
while(fin)
    {
          fin.get(ch);
          count++;
          fout<<"*";
     }
    fin.close();
    fout.close();

    fin.open("protected");
    fin>>str;
    cout<<str<<endl;
    fin.close();

    fout.open("Existing password");
    fout<<str1;
    fout.close();

    fin.open("password");
    fin>>str;
    fin.close();

    fin.open("Existing password");
    fin>>str1;
    fin.close();

    if(str==str1)
    {
        cout<<"Correct pasword !! validated";
    }
    else
    cout<<"Wrong password!!";



    return 0;
}