/*
Given an array S of unsorted elements.
Design an algorithm and implement that to find a pair x, 
y such that x≠y from S that minimizes |x-y|.The worst case running time of the algorithm
should be O (nlgn). 
Instruction: - Solve the above problem with the help of following example
Given Array is 
S = {4, 15, 8, 1, 19, 0, 12}, the output should be 0 and 1.

*/
#include<iostream>
using namespace std;
#define n 100
class queue{
    public:
  int *arr;
  int front;
  int back;
  queue(){
      arr=new int[n];
      front=-1;
      back=-1;
}
void push(int x)
{
    if (back==n-1)
    {
       cout<<"queue overflow"<<endl;
       return;
    }
    back++;
    arr[back]=x;
    if (front==-1)
    {
       front++;
    }    
}
void pop(){
    if (front==-1 || front>back)
    {
       cout<<"No element in queque"<<endl;
       return 0;
    }
   front++; 
   int top()
   {
       return arr[front];
   } 
}
};
void compare(queue *q,int s[],int y)
{ 
    int x=q.top();
    int p=s[0];
    int l;
    int arr[7];
    for (int i = 0; i < 7; i++)
    { 
         l=x-s[i];
         if (l<0)
         {  
             l=l*-1;
         }
         if (l<p)
         {
            p=l;
         } 
         
          
    }
    for (int i = 0; i < 7; i++)
    {
        arr[i]=
    }
    
    
    
    
}
int main()
{
    queue q;
    int S[] = {4, 15, 8, 1, 19, 0, 12};
    for (int i = 0; i < 7; i++)
    { q.push(arr[i]);   
    }
    int arr[100];int i=-1;
    int p=compare(q,s,k);
    i++;
    arr[i]=p;




    return 0;
}
