#include <iostream>
#include <stdio.h>
using namespace std;
class c
{
private:
    int a;
public:
    c(int x);
    ~c(){cout << endl << "The object is deleted.";};
    int f(){return a;}
};
c::c(int x){a=x;}
main()
{
    c array[3]={c(3),c(4),c(5)};
    cout << array[0].f() + array[2].f();
}