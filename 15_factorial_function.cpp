#include<iostream>
using namespace std;
int factorial(int a)
{
    int fact=1,i;
    for(i=1;i<=a;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n1,s;
    cout<<"enter the number:"<<endl;
    cin>>n1;
    s=factorial(n1);
    cout<<s;
    return 0;
}
