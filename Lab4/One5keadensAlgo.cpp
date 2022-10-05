#include<iostream>
using namespace std;

int main()
{
    double arr[]={4,-5, 8,-1, 3,-4.2, 0, 2};;
    double currentsum=0;
    double maxsum=0;
    int ii,jj;

    for (int i = 0; i < 8; i++)
    {
       currentsum+=arr[i];
       
       if (currentsum>maxsum)
       {
           maxsum=currentsum;
           int ii=i;
           jj=i;
           
       }
       if (currentsum<0)
       {
          currentsum=0;
          ii=i+1;
       }
       
       
    }
    cout<<"Max sum =  "<<maxsum<<endl;
    cout<<"i = "<<ii<<" j = "<<jj;
    return 0;
}