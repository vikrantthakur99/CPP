 #include <iostream>
using namespace std;

int main()
{
    int x=10;
    int &y=x;    //refence cannot be undeclared(int &y;) it must be decalred
    //   &y=b; now the &y cannot assign to the variable in the program it will gave error
    cout<<x<<endl;
    cout<<y<<endl;
    x++;
    cout<<x<<endl;
    y++;
    cout<<y<<endl;
    cout<<&x<<" "<<&y<<endl;  //adress of the x and y would be same cause y is not other variable its the nickname for the x variable
   return 0;   
}
