#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

class Complex{
    private:
    float real, imag;

    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex( float real, float imag){
        this->real=real;
        this->imag=imag;
    }

    Complex addition(Complex c1,Complex c2){
        Complex temp;
        temp.real=c1.real +c2.real;
        temp.imag=c1.imag +c2.imag;
        return temp; 
    }

    Complex subtract(Complex c1,Complex c2){
        Complex temp;
        temp.real=c2.real-c1.real;
        temp.imag=c2.imag-c1.imag;
        return temp; 
    }

    void print(){
        cout<<"Imaginary Number-> "<<'('<<real<<','<<imag<<')'<<endl;
    }
};

int main(){
    Complex no1(2,5);
    Complex no2(3,5);
    Complex temp ;
    temp=temp.addition(no1,no2);
    cout<<"Addition of ";
    temp.print();
    temp=temp.subtract(no1,no2);
    cout<<"Subtraction of ";
    temp.print();
}