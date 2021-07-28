#include<iostream>
using namespace std;

//PROGRAM TO FIND THE MINIMUM OF 2 INTEGER, 2 FLOATS, 3 INTEGERS
int min(int x,int y)
{
	if(x<y)
	{
	return x;
    }
	else 
	return y;
}
float min(float x,float y)
{
    if(x<y)
    {
    return x;
	}
	else
	return y;
}
int min(int x,int y,int z)
{
	if(x<y && x<z)
	{
	return x;
	}
	else if (y<z)
	{
	return y;
	}
	else
	return z;
}
int main() 
{
   int x,y,z;
   cout<<min(5,3)<<endl;
   cout<<min(10.6f,2.4f)<<endl;
   cout<<min(5,7,10)<<endl;
   return 0;
}

/*
//PROGRAM TO FIND THE ADDITION OF 2 INTEGER, 2 FLOATS, 3 INTEGERS
#include<iostream>
using namespace std;

int add(int x,int y)
{
    return x+y;
}
float add(float x,float y)
{
	return x+y;
}
int add(int x,int y,int z)
{
	return x+y+z;
}
int main() 
{
   int x,y,z;
   cout<<add(2,3)<<endl;
   cout<<add(2.2f,2.4f)<<endl;
   cout<<add(1,2,3)<<endl;
   return 0;
}
*/