#include<iostream>
using namespace std ;
int main()
{
    int n,i,j,number=1;
    cout<<"Enter the Number of lines :";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
            cout<<number;
            number++;
        }
        cout<<endl;
    }

    return 0;
}