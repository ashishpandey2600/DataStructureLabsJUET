#include<iostream>
#include<cmath>
using namespace std;
void checkprime(int n)
{ bool flag=false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        flag=true;
    }
    if(flag==false)
    {
        cout<<n<<" ";
    }

}
int main()
{ int n=10;int k=1;
for(int j=2;j<n;j++){
   checkprime(j);
 
}




    return 0;
}