 #include <iostream>
using namespace std;

int main()
{
	int i,j;
    for(i=1;i<=5;i++)        
    {
    	for(j=5;j>=i;j--)    //this loop will print the rows simill..
    	{
    		cout<<" "<<j;      
		}
		cout<<endl;       //it will end the line for the rows
	}
    return 0;
}