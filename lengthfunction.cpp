 #include <iostream>
 #include <cstring>
using namespace std;

int main()
{    
    
     // **1. strlen(string_name): GAVE LENGTH OF THE STRING 
	 char s[20]="Hello ";
    cout<<strlen(s)<<endl; //gave the length of the characters in the string including with the space in it 
    
    char *s;   //by the use of the pointer 

    cout<<"Enter the String ";
    cin.getline(s,100);
    
    cout<<strlen(s); 

     
    
    return 0;   
}