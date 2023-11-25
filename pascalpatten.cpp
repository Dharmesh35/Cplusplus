#include<iostream>
using namespace std ;


int fact(int n)
{
    int i,factorial=1;
    for(i=2;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}


int main()
{
    
    int n;
    cout<<"Enter the Number of lines :";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
            cout<<fact(i)/fact(i-j)*fact(j);
        }
        cout<<endl;
    }
 
    return 0;
}