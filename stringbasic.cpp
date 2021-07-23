#include <iostream>
using namespace std;

int main()
{
//char S[6]="Hello";  
// char S[]="Hello"; 
//char *S="Hello"; (by the use of the pointer)
   char S[]={'H','e','l','l','o','\0','p'}; //termination of the string is imp and it can be done by \0 also p will not print cause \0 is used before p
   cout<<S<<endl;   
   return 0;   
}
