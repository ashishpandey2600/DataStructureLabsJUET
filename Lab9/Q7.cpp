#include<iostream>
#include<fstream>
using namespace std;
int main()
{
        ofstream fout; ifstream fin;
        string str;
        char ch='y',chr='R';
        int count=0,k;
        fout.open("file");
        while(ch!='n')
        {
        cout<<"Enter sentence : "; //create and input in file
        getline(cin>>ws,str);
        fout.write((char*)&str,sizeof(str));
        cout<<"Enter more... (y/n)";
        cin>>ch;
        count++;
        }
        fout.close();
        cout<<"confirm encryption the file...(y/n)"; //Encrypting data
        cin>>ch;
        k=count;
        fout.open("Encryptedfile");
        fin.open("file");
        if(ch=='y'){
        for(int i=0;i<k;i++)
        {
        str = "**********";
        fin.read((char*)&str,sizeof(str));
        fout.write((char*)&str,sizeof(str));
        }
        }
        fout.close();
        fin.close();
        fout.open("file",ios::out); //adding garbage value in file data
        if(ch=='y'){
        for(int i=0;i<k;i++)
        {
        str = "**********";
        fout.write((char*)&str,sizeof(str));
        }
        cout<<"file encrypted Succsesfully!! "<<endl;
        }
        fout.close();
         //reading encrypted data
        fin.open("file",ios::in);
        for(int i=0;i<k;i++){
        fin.read((char*)&str,sizeof(str));
        cout<<str<<endl;
        fin.close();
        }
        cout<<"confirm decryption encryption the file...(y/n)"; //decryption
        cin>>ch;
        if(ch=='y'){
        fin.open("Encryptedfile"); 
        fout.open("file");
        for(int i=0;i<k;i++)
        {
        fin.read((char*)&str,sizeof(str));
        fout.write((char*)&str,sizeof(str));
        }
        cout<<"Decryption Successful !!"<<endl;
        fin.close();
        fout.close();
         }
        fin.open("file");//read decrypted data
        for(int i=0;i<k;i++){
        fin.read((char*)&str,sizeof(str));
        cout<<str<<endl;
        }
        fin.close();
    return 0;
}