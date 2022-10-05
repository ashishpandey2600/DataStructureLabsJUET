#include<iostream>
using namespace std;
class student{
 private:
  string name;
  int age;
  public:
  void setstudent(string s,int a){
    name=s; age=a;
  }
  void showstudent(){
    cout<<"\nName = "<<name<<endl;
    cout<<"\nage = "<<age<<endl;

  }
};
int main()
{
pair <string,int> p1;
pair <string,string> p2;
pair <string,float> p3;
//any two type of data type have pair
pair<int,student>p4;//student can be user defined  class 
p1=make_pair("Ashish",100);
p2=make_pair("India","New Delhi");
p3=make_pair("Drilling c++",345.5f);
student s1;
s1.setstudent("ashish",22);
p4=make_pair(90,s1);
cout<<p1.first<<"  "<<p1.second<<endl;
cout<<p2.first<<" "<<p2.second<<endl;
cout<<p3.first<<" "<<p3.second<<endl;
cout<<p4.first<<" "<<endl;
student s2=p4.second;
s2.showstudent();
//comparision can be done between pairs
    return 0;
}