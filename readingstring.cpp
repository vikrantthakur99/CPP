 #include <iostream>
 #include <cstring>
using namespace std;

int main()
{   
   char s1[10]="Hello";
   char s2[10]="";
   
   strncpy(s2,s1,2);
   
   cout<<s2;
 
    
    return 0;   
}
