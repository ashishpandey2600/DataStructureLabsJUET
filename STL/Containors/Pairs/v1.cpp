#include<iostream>
#include<vector>
using namespace std;
void print_vector(vector< int >v)
{ cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i)
{ //v.size -> O(1)
    cout<<v[i]<<" ";
}

}
int main()
{ int a[10];//Fixed size || memory allocated at the time of array delaration
   vector<int> v2;//dynamic Size || memory not allocation untill vector is intialized
   //vector of pair
   vector<pair<int ,int > > v1;
   //vectors me value dalne ka tarika
   vector<int > v;
   int n;
   cin>>n;
   for(int i=0;i<n;++i)
   {
    int x;
    cin>>x;
    v.push_back(x);
   }
 print_vector(v);




}