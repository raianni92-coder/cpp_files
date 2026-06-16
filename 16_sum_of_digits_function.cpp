#include<iostream>
using namespace std;
int sum(int a)
{
    int i,sum=0;
    while(a!=0)
    {
        i=a%10;
        sum+=i;
        a=a/10;
    }
    return sum;
}
int main()
{
    int n1,s;
    cout<<"enter the number:"<<endl;
    cin>>n1;
    s=sum(n1);
    cout<<"sum of digits of number "<<n1<<" is "<<s<<endl;
    return 0;
}
