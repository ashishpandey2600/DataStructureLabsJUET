#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
    ofstream fout; ifstream fin; 
    char ch='y';
    string  arr;
    int count=0;
    int noofa=0;
    int noofb=0;
    int noofc=0;
    fout.open("TEXT.txt");
    while(ch!='n') // create and enter the text
    {
        cout<<"Enter the line"<<endl;
        getline(cin>>ws,arr);
        fout.write((char*)&arr,sizeof(arr));
        count++;
        cout<<"Enter  more (y/n) ";
        cin>>ch;
    }
    fout.close();
    
    fin.open("TEXT.txt");
    int i; 
   while(fin)
        {
            
         fin.get(ch);
         i=ch;
      
     if(i==97)
     noofa++;
     else if(i==98)
     noofb++;
     else if(i==99)
     noofc++;
    

        
      }
      fin.close();
    
    cout<<" a\t"<<noofa<<endl<<"b\t"<<noofb<<endl<<"c\t"<<noofc;
    return 0;
}
