#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int n1,n2,s;
    cout<<"enter two numbers:"<<endl;
    cin>>n1>>n2;
    s=sum(n1,n2);
    cout<<s;
    return 0;
}
