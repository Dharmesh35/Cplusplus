#include<iostream>
using namespace std ;
int main()
{
    int l,b,i,j ;
    char ch;
    cout<<"Enter the length :";
    cin>>l;

    cout<<"Enter the breadth :";
    cin>>b;

    cout<<"Enter the symbol :";
    cin>>ch;
    
    for(i=0;i<l;i++)            
    {
        for(j=0;j<b;j++)
        {
            if(j==0 || j==b-1 || i==0 || i==l-1)
            {
                cout<< ch ;
            }

            else
            {
            cout<<" ";
            }     
        }
        cout<<endl;
    }
    return 0;
} 

