#include<bits/stdc++.h>
using namespace std;

class Lundcp{
    private:
    int X,Y;

    public:
    Lundcp(int a=0,int b=0):X(a),Y(b){};
    void print() const{
        cout<<X<<"+j"<<Y<<endl;
    };

    Lundcp operator + (const Lundcp& rs ){
        Lundcp temp;
        temp.X = X + rs.X;
        temp.Y = Y + rs.Y;
        return temp;
    }
    Lundcp operator-(const Lundcp &rs)
    {
        Lundcp temp;
        temp.X = X - rs.X;
        temp.Y = Y - rs.Y;
        return temp;
    }

    Lundcp add(const Lundcp &rs){
        Lundcp temp;
        temp.X = X + rs.X;
        temp.Y = Y + rs.Y;
        return temp;
    }

    Lundcp mul(const Lundcp &rs)
    {
        Lundcp temp;
        temp.X = X * rs.X;
        temp.Y = Y * rs.Y;
        return temp;
    }

    Lundcp operator -(){
        return Lundcp(-X,-Y);
    }
};

int main(){
    Lundcp eg1(5,10),eg2(10,20),eg6(9,4),eg7(2,5);
    Lundcp eg3=eg1+eg2;
    eg3.print();
    Lundcp eg4= eg1.add(eg2);
    eg4.print();
    Lundcp eg5=(eg7.add(eg2)).mul(eg6.add(eg1));
    eg5.print();
    eg6=-eg6;
    eg6.print();
}