#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
map<string,int> marksMap;

marksMap.insert({{"Fuego",50},{"Kayne",60}});  //insert fun is used to directly insert the elements in the map

/*

marksMap["Vikrant"] = 98;
marksMap["Honey"] = 90;
marksMap["Alex"] = 80;
//we can also assign the values by this
*/

map<string,int> :: iterator itr;
for(itr=marksMap.begin();itr!=marksMap.end();itr++)
{
cout<<(*itr).first<<" "<<(*itr).second<<"\n";
}
cout<<marksMap.size();  //return the size of the map

return 0;    
}