 #include <iostream>
using namespace std;

int main()
{
	char i,j;
    for(i='A';i<='E';i++)        
    {
    	for(j='A';j<='E';j++)    //this loop will print the rows simill..
    	{
    		cout<<" "<<j;      //this will print only the value for j
		}
		cout<<endl;       //it will end the line for the rows
	}
    return 0;
}