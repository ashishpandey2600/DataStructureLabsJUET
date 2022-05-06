#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream fout;ifstream fin; char ch='y'; 
    int count=0;
    fout.open("file1");
     
    while(ch!='n'){
    cout<<" Enter sectence  :  ";
    getline(cin>>ws,str);
    fout.write((char*)&str,sizeof(str));
    count++;
    cout<<"Enter more... (y/n)";
    cin>>ch;
    }
    fout.close();

    fin.open("file1");
    fout.open("file2");

   for(int i=0;i<count;i++)
    {
        fin.read((char*)&str,sizeof(str));
        
        fout.write((char*)&str,sizeof(str));
    }
    fin.close();
    fout.close();
//Reading
   fin.open("file2");
  for(int i=0;i<count;i++)
   {
       fin.read((char*)&str,(sizeof(str)));
       cout<<str<<endl;
   }
   fout.close();
    return 0;
}