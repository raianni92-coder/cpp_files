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
int binomial_coefficient(int n,int r)
{
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);
    int coeff=fact_n/(fact_r)*fact_nmr;
    return coeff;
}

int main()
{
    int n,r,s;
    cout<<"enter the value of n and r:"<<endl;
    cin>>n>>r;
    s=binomial_coefficient(n,r);
    cout<<s;
    return 0;
}
