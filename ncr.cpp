#include<iostream>
using namespace std ;

int fact(int n)
{
    int i,factorial=n;
    for(i=n;i>=2;i--)
    {
        factorial=factorial*i;
    }
    return factorial;
}



int main()
{
    int n,r,ans;
    cout<< "Enter n: ";
    cin>>n;

    cout<<"Enter r: ";
    cin>>r;

    ans=fact(n)/fact(n-r)*fact(r);

    cout<<ans;

    return 0;
}