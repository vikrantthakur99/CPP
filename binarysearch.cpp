#include <iostream>
using namespace std;

int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int key,l=0,h=9,mid;
    cout<<"Enter the key:";
    cin>>key;
    while(l<=h)
    {
    	mid=(l+h)/2;
    	if(A[mid]<key)
    	l=mid+1;
    	else if(A[mid]==key)
    	{
    		cout<<"The number found at position "<<mid+1;
    		break;
		}
		else
		h=mid-1;
		mid=(l+h)/2;
	}
	if(l>h)
	cout<<"Not found";
	cout<<endl;
    return 0;
}