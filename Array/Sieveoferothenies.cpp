#include<iostream>
using namespace std;
int main()
{ int arr[100]={0};
int n=50;
  for (int i = 2; i <=n; i++)
  { if (arr[i]==0)
  { 
   for (int j=i*i; j<=n; j+=i)
   {
   
        arr[j]=1;
    
    
   }
  }
  
   
  }
  for (int i = 2; i <=n; i++)
  {    if(arr[i]==0){
      cout<<i<<" "<<endl;
  }
  }
  
  


    return 0;
}