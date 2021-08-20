#include <iostream>
#include <list>
using namespace std;

int main()
{
list<int> l={2,3,4,5};

l.push_back(20);

for(int x:l)
cout<<++x<<endl;
}       //vector and list worked as on same way just the differnce is in the header files