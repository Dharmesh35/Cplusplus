#include<iostream>
using namespace std ;
int main()
{
    int n,i,j;
    cout<<"Enter the Number of lines :";
    cin>>n;

    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=i;j++)
        {
            cout<<" ";
            if((i+j)%2==0)
            cout<<"1";
            else
            cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}