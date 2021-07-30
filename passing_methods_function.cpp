#include<iostream>
using namespace std;

//PROGRAM FOR PASS BY VALUE
void swap(int a, int b)
{
int temp;
cout<<a<<" "<<b<<endl;
temp=a;
a=b;
b=temp;
cout<<a<<" "<<b<<endl;
}
int main() 
{
int x=10,y=20;
swap(x,y);
cout<<x<<" "<<y;
return 0;
}

/*
//PROGRAM FOR PASS BY ADDRESS
void swap(int *a, int *b)
{
int temp;
cout<<*a<<" "<<*b<<endl;
temp=*a;
*a=*b;
*b=temp;
cout<<*a<<" "<<*b<<endl;
}
int main() 
{
int x=10,y=20;
swap(&x,&y);
cout<<x<<" "<<y;
return 0;
}
*/

/*
//PROGRAM FOR PASS BY REFERNCE
void swap(int &a, int &b)   //it is same as call by value just change in the syntax of parammeeters as & is used with parameters
{
int temp;
cout<<a<<" "<<b<<endl;
temp=a;
a=b;
b=temp;
cout<<a<<" "<<b<<endl;
}
int main() 
{
int x=10,y=20;
swap(x,y);
cout<<x<<" "<<y;
return 0;
}
*/