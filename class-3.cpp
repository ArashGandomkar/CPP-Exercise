#include <iostream>
#include <stdio.h>
using namespace std;
class c
{
public:
    int a;
    c();
    ~c(){cout << endl << "The object is deleted.";};
};
c::c(){cout << endl << "The object is created.";}
c k(){c obj; obj.a=5; return obj;}
main()
{
    c obj1;
    obj1=k();
    cout << endl << "Obj1.a=" << ++obj1.a;
}