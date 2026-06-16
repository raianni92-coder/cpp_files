#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,m,o;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        k=1;
        for(m=1;m<=i;m++)
        {
            cout<<k;
            k++;
        }
        for(o=i-1;o>0;o--)
        {
            cout<<o;
        }
        cout<<"\n";
    }
    return 0;
}