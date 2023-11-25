#include<bits/stdc++.h>
using namespace std;

// class Chut{
//     private:
//     public:
//     static int x;
//     static void fun(){
//         cout<<"value of x: "<<x<<endl;
//     }
// };
// int Chut::x=10;

class Box{
    private:
    int length;
    int breath;
    int height;
    static int counter;

    public:
    Box(double l = 1.0 , double b = 1.0, double h = 1.0 ){
        cout<<"constructer called"<<endl;
        length=l;
        breath=b;
        height=h;
        counter++;
    }
    double volume(){
        return length*breath*height;
    }

    static int getcount(){
        return counter;
    }
};

int Box::counter=0;

int main(){
    Box b1(5,3,4);
    Box b2(9,4,2);
    cout<<b1.volume()<<endl;
    cout<<"counts:" <<Box::getcount();

    return 0;
}