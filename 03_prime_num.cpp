#include<iostream>
using namespace std;
int main()
{
    int n,i,flag=0;
    cout<<"Enter the number:";
    cin>>n;
   if(n==1)
   {
    cout<<"1 is not a prime number"<<endl;
   }
   else if(n==2)
   {
    cout<<"2 is a prime number"<<endl;
   }
   else{
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
    }   
   }
   if(flag==0)
   {
    cout<<n<<" is a prime number"<<endl;
   }
   else{
    cout<<n<<" is not a prime number"<<endl;
   }
    return 0;
}