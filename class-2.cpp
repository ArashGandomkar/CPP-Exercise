#include <iostream>
#include <stdio.h>
using namespace std;
class c
{
private:
    int x;
    int y;
public:
    c(int a);
    ~c(){cout << endl << "The object is deleted.";};
    int f(){y=++x; return y;}
};
c::c(int a){x=a;}
void k(c obj){cout << obj.f();}

main()
{
    c obj1(5);
    k(obj1);
}