 #include <iostream>
using namespace std;

int main()
{
	char i,j;
    for(i='E';i>='A';i--)        
    {
    	for(j='A';j<='E';j++)    //this loop will print the rows simill..
    	{
    		cout<<" "<<i;      
		}
		cout<<endl;       //it will end the line for the rows
	}
    return 0;
}