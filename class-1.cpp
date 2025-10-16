#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class s
{
private:
    char test[3];
    int front;
    int rear;
public:
 void set();
 void insert(char ch);
 char remove();
};
void s::set(){front=0; rear=0;}
void s::insert(char ch)
{
    if (rear==2) cout << "Full";
    rear++;
    test[rear]=ch;
}
char s::remove()
{
    if (rear==front) cout << "Empty";
    front++;
    return test[front];
}
main()
{
    s obj;
    obj.set();
    obj.insert('A');
    obj.insert('B');
    cout << obj.remove();
}