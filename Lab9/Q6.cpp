#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream fout; ifstream fin; char ch='y';
    fout.open("file1");
    int count=0,k;
    while(ch!='n'){
    cout<<"Enter the sentence file 1: ";
    getline(cin>>ws,str);
    fout.write((char*)&str,sizeof(str));
    count++;
    cout<<"Enter more... (y/n)";
    cin>>ch;
    }
    fout.close();
    k=count;
    fout.open("file2");
    ch='y';
    while(ch!='n'){
    cout<<"Enter the sentencec file 2 : ";
    getline(cin>>ws,str);
    fout.write((char*)&str,sizeof(str));
    k++;
    cout<<"Enter more... (y/n)";
    cin>>ch;
    }
    fout.close();
    fout.open("file3");
    fin.open("file1");
    for(int i=0;i<count;i++)
    {
        fin.read((char*)&str,sizeof(str));
        fout.write((char*)&str,sizeof(str));
    }
    fin.close();
    fin.open("file2");
    for(int i=0;i<count;i++)
    {
        fin.read((char*)&str,sizeof(str));
        fout.write((char*)&str,sizeof(str));
    }
    fin.close();
    fout.close();
    fin.open("file3");
    for(int i=0;i<k;i++)
    {
        fin.read((char*)&str,sizeof(str));
        cout<<str<<endl;
    }
    fin.close();
    return 0;
}