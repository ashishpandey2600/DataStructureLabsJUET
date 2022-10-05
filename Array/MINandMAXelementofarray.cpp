#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={ 1,2,0,99,5,6 };
   int max=arr[0];
   int min=arr[0];
   
   for (int i = 0; i < 6; i++)
   {
      if (arr[i]>max)
      {
       max=arr[i];
      }
      if (arr[i]<min)
      {
        min=arr[i];
      }

      
      
   }
   
    cout<<"min = "<<min<<"  "<<"max = "<<max<<endl;

    return 0;
}