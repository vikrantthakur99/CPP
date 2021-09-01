void checkString(string s)
{
    int v=0;
    int c=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == ' ')
            continue;
     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
    v++;
    else
    c++;
    }
    //Your code here
   
    if(v>c)
        cout<<"Yes";
    else if(c>v)
        cout<<"No";
    else
        cout<<"Same";
    
    cout<<endl;
}