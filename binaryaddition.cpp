#include<iostream>
using namespace std;

int binaryadd ( int a , int b )
{
    int add,n,m ;
    
    while ( a > 0 || b > 0)
    {
        n = a % 2 ;
        m = b % 2 ;

        

    }
}

int main()
{
    int b1,b2;
    cout<<"Enter the 1st binary number: ";
    cin>>b1;

    cout<<"Enter the 2nd binary number: ";
    cin>>b2;

    cout<< "Addition: " << binaryadd(b1,b2) ;
    
    return 0;
}