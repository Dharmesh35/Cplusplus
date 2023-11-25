#include<iostream>
using namespace std ;
int main()
{
    int n,i,j,count=1;
    cout<<"Enter the Number of lines :";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }

        for(j=1;j<=i;j++)
        {
            cout<<count;
            cout<<" ";
            count++;
        }
        count=1;
        cout<<endl;
    }
    return 0;
}