#include<iostream>
#include<math.h>
using namespace std ;

bool pytha ( int a, int b ,int c)
{
    int flag=0;

    if(pow(a,2)+pow(b,2)==pow(c,2)  ||  pow(b,2)+pow(c,2)==pow(a,2)  ||    pow(a,2)+pow(c,2)==pow(b,2))
    {
        flag=1;
    }
    return flag;
}

int main()
{
    int i,j,k;
    cout<<"Enter the i :";
    cin>>i;

    cout<<"Enter the j :";
    cin>>j;

    cout<<"Enter the k :";
    cin>>k;

    if(pytha(i,j,k))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }

    return 0;
}