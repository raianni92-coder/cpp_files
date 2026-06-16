#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,m,o;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(m=1;m<=n-i;m++)
        {
            cout<<" ";
        }
        for(o=1;o<=i;o++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
        {
            cout<<"*";
        }
        for(k=1;k<=i-1;k++)
        {
            cout<<" ";
        }
        for(m=1;m<=i-1;m++)
        {
            cout<<" ";
        }
        for(o=1;o<=n+1-i;o++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}