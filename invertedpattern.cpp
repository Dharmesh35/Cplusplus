#include<iostream>
using namespace std ;
int main()
{
    int n,i,j,count=1;
    cout<<"Enter the Number of lines :";
    cin>>n;

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" " ;
            cout<<count;   // also u can write  cout<<j
            count++;
        }
        count=1;
        cout<<endl;
    }

    return 0;
}