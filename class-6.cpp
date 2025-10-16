#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class cubicle
{
    private:
    int x,y,z;

    public:
    cubicle();
    ~cubicle();
    cubicle(cubicle &c2)
    {
        cout << endl << "Using copy constructor...";
        x=c2.x; y=c2.y; z=c2.z;
    }
    cubicle(int a, int b, int c)
    {
        x=a; y=b; z=c;
        cout << endl << "Using Parametr...";
    }
    int volume(){return x*y*z;}
};
cubicle::cubicle()
{
    x=2; y=3; z=4;
    cout << endl << "Using Default...";
}
cubicle::~cubicle(){cout << endl << "The Object was deleted.";}
main()
{
    {
    cubicle c1;
    cout << "Volume1: " << c1.volume();
    }
    cubicle c2(5,6,7);
    cout << "Volume2: " << c2.volume();
    cubicle c3(c2);
    cout << "Volume3: " << c3.volume();
    getch();
}