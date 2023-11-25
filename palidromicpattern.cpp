#include<iostream>
using namespace std ;
int main()
{
    int n,i,j,count;
    cout<<"Enter the Number of lines :";
    cin>>n; 

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }

        count=i;

        for(j=1;j<=i;j++)
        {
            cout<<" ";
            cout<<count;
            count--;
        }

        for(j=2;j<=i;j++)
        {
            cout<<" ";
            cout<<j;
        }
        cout<<endl;
    } 

    return 0;                                                                            
}                                                                                        
