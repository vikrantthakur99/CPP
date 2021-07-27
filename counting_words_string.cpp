#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int vowel=0,space=0,consonant=0,digit=0;
    string str = "How Many Words 78";
    
    for (int i=0;str[i]!='\0';i++)
    {
     if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || 
	 str[i]=='o' || str[i]=='u' )
     {
     	vowel++;
	 }
	 else if (str[i]== ' ')
	 {
	 	space++;
	 }
	 else if(str[i]>='a' && str[i]<='z' || str[i]>='A'&& str[i]<='Z')
	 {
	    consonant++;
	 }
	 else if(str[i]>=0 || str[i]<=0)
	 {
	 	digit++;
	 }
    } 
	cout<<"Vowel Count is "<<vowel<<endl;
	cout<<"Consonant Count is "<<consonant<<endl;
	cout<<"Digit Count is "<<digit<<endl;
	cout<<"Word Count is "<<space+1<<endl;	
	
	return 0;   
}