#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
 for(int i=0;i<v.size();i++)
 {
     cout<<v[i]<<" "<<endl;
 }
}

int main()
{
vector<int> vec1 ;
int element,size;
cout<<"Enter the size of your Vector "<<endl;
cin>>size;

for(int i=0;i<size;i++)
{
cout<<"Enter the element: "<<endl;
cin>>element;
vec1.push_back(element);   
}
display(vec1);
}