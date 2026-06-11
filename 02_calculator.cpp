#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    char k;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"enter the operator:";
    cin>>k;
    if(k=='+')
    {
        c=a+b;
        cout<<c<<endl;
    }
    else if (k=='-')
    {
        if(a>b)
        {
            c=a-b;
            cout<<c;
        }
        else{
            c=b-a;
            cout<<c;
        }
    }
    else if(k=='*')
    {
        c=a*b;
        cout<<c;
    }
    else if(k=='/')
    {
        c=a/b;
        cout<<c;
    }
    else if(k=='%')
    {
        c=a%b;
        cout<<c;
    }
    else{
        cout<<"invalid operator";
    }
    return 0;
}