#include<iostream>
using namespace std;
int sum(int a)
{
    int sum=0,i;
    for(i=1;i<=a;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n1,s;
    cout<<"enter the number:"<<endl;
    cin>>n1;
    s=sum(n1);
    cout<<"sum of first "<<n1<<" numbers is "<<s<<endl;
    return 0;
}
