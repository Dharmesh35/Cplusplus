#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    double area;
    virtual void Area() = 0;
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    void Area()
    {
        area = length * width;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }
    void Area()
    {
        area = 3.14 * radius * radius;
    }
};

class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }
    void Area()
    {
        area = 0.5 * base * height;
    }
};

int main()
{
    Shape *s;
    int choice;
    double l, w, r, b , h;

    while(choice!=4)
    {
        cout << "Choose a shape to calculate area:" << endl;
        cout << "1-> Rectangle" << endl;
        cout << "2-> Circle" << endl;
        cout << "3-> Triangle" << endl;
        cout << "4-> Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter length and width of rectangle: " << endl;
            cin >> l >> w;
            s = new Rectangle(l, w);
            s->Area();
            cout << "Area of rectangle is " << s->area << endl;
            break;

        case 2:
            cout << "Enter the radius of circle:";
            cin >> r;
            s = new Circle(r);
            s->Area();
            cout << "Area of the circle is" << s->area << endl;
            break;

        case 3:
            cout << "Enter the base and height of Triangle";
            cin >> b >> h;
            s = new Triangle(b ,h);
            s->Area();
            cout << "Area of the triangle is" << s->area << endl;
            break;
        case 4:

            cout<<"Exited";
            break;
        default:
            cout<<"Invalid Command";
            break;
        };
    };
}