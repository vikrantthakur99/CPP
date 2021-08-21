#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
list<int> :: iterator it; //iterator is used to iterating tho the elements in the list
for(it=lst.begin();it!=lst.end();it++) 
{
 cout<<*it<<" ";   //pointer is used to pointing for the list
}
cout<<endl;
}

int main()
{
    
 //LIST1   
list<int> list1;
list1.push_back(4);
list1.push_back(6);
list1.push_back(8);
list1.push_back(1);
list1.push_back(2);
//display(list1);
/* list1.pop_front(); //for poping out the last list item
list1.remove(8); //remove is used to delete an element at a desired loc
*/

//LIST2
list<int> list2(3);
list<int> :: iterator iter;
iter=list2.begin();
*iter = 45;
iter++;
*iter = 50;
iter++;
*iter = 55;
iter++;
list1.sort();
list2.sort(); 
//list1.merge(list2); //is used to merge the two list in the code 

//LIST3 
list<int> list3={100,200,300,400}; //a list having all the values by default
list2.merge(list3);
display(list2);
}