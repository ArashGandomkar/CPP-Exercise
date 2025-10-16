#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class Sqr;
class Rect
{
    private:
            int x,y;
    public:
            Rect(int a, int b);
            int area(){return x*y;}
            friend void display(Rect r, Sqr s);
};
Rect::Rect(int a, int b)
{
    x=a;
    y=b;
}
class Sqr
{
    private:
            int x;
    public:
            Sqr(int a){x=a;}
            int area(){return x*x;}
            friend void display(Rect r, Sqr s);
};
void display(Rect r, Sqr s)
{
    cout << "Rect Area: " << r.area();
    cout << endl << "Sqr Area: " << s.area();
}
main()
{
    Rect obj1(3,4);
    Sqr obj2(6);
    display(obj1,obj2);
    getch();
}