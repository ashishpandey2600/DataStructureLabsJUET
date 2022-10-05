/*

Given two arrays A1 , A2 of size n and a number x, design an algorithm to find
whether there exists a pair of elements one from A1 and other from A2 whose sum 
is equal to x. Also find the indices of those elements
Instruction: - Solve the above problem with the help of following example
Given Arrays are A1={4,5,8,1,3,9,0,2} 
 and A2 ={2,3,35,32,12,9,2} and x = 41
The output should be yes with i1=5 and i2=3.
For x=25, the output should be no.
*/

#include<iostream>
using namespace std;

int main()
{
    int A1[]={4,5,8,1,3,9,0,2};
    int A2[]={2,3,35,32,12,9,2};
    int x=41; bool flag=true;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        { int k=A1[i]+A2[j];
           if (k==x)
           {
               cout<<" Yes   i1= "<< i<<"   i2 = "<<j<<endl;
               flag=false;
               break;
           }
           
        }
        
    }
    if (flag==true)
    {
       cout<<"NO"<<endl;
    }
    
    


    return 0;

}