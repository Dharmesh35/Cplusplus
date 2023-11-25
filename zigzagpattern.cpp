#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    cout<<"Enter the Number of rows: ";
    cin>>r;

    cout<<"Enter the Number of columns: ";
    cin>>c;

    // r=3 and c=9 ideal case

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if((i+j)%4==0 || (i==2 && j%4==0) )
            cout<<"*";

            else
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}