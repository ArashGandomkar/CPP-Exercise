#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
class Circle
{
 private:
         int x,y;
         double radius;
 public:
         Circle(int = 0,int = 0,double = 0.00);
         Circle(Circle &m);
         void setX(int );
         int getX();
         void setY(int );
         int getY();
         void setR(int );
         double getR();
         double getDiameter();
         double getArea();
         double getCircumference();
         void print();
};
///////////////////////////////////////////
Circle::Circle(int a, int b, double r)
{
    x=a;
    y=b;
    setR(r);
}
Circle::Circle(Circle &m)
{
        x=m.x;    y=m.y;    setR(m.radius);
}
void Circle::setR(int r){ radius= r < 0.00 ? 0.00 : r;}
void Circle::setX(int a){x=a;}
void Circle::setY(int b){y=b;}
double Circle::getR() {return radius;}
double Circle::getDiameter() {return radius*2;}
double Circle::getCircumference() {return 2*3.14*radius;}
double Circle::getArea() {return 3.14*radius*radius;}
void Circle::print()
{
        cout << "Center: [" << x <<"," << y << "]\t";
        cout << "Radius: " << radius << '\t';
        cout << "Diameter: " << getDiameter() << '\t';
        cout << "Area: " << getArea()  << '\t';
        cout << "Circumference: " << getCircumference() << '\t';
        
}
main()
{
        Circle obj(20,30,3.5);
        cout << "Circle1:\n";
        obj.print();
        obj.setX(3);
        obj.setY(4);
        obj.setR(3.5);
        cout << "\nCircle2:\n";
        obj.print();
        Circle c1(4,5,3.5);
        Circle obj2(c1);
        cout << "\nCircle3:\n";
        obj2.print();
}