#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class Rect
{
    private:
            int x,y;
            friend double f(Rect ob2, double h);
    public:
            Rect(int h, int w);
            int area(Rect ob1){return ob1.x*ob1.y;}

};
Rect::Rect(int h, int w)
{
    x=h;
    y=w;
}
double f(Rect ob2, double h){return ob2.x*ob2.y*h;}
main()
{
    Rect obj(3,4);
    double h = 4.5;
    cout << "The area is: " << obj.area(obj);
    cout << "\nThe V is: " << f(obj,h);


}